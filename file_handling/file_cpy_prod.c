#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h> // Required for errno and perror()

// Define a buffer size for efficient copying (similar to Python's optimized I/O)
#define BUFFER_SIZE 1024

/**
 * Copies the content of a source file to a destination file using buffered I/O.
 * 
 * @param source_filename The path to the source file.
 * @param dest_filename The path to the destination file.
 * @return 0 on success, 1 on failure.
 */
int file_copy(const char *source_filename, const char *dest_filename) {
    FILE *source_file = NULL;
    FILE *dest_file = NULL;
    // Use a character buffer to copy chunks of data efficiently
    char buffer[BUFFER_SIZE];
    size_t bytes_read;

    // 1. Open source file in read mode ("rb" for binary safety)
    source_file = fopen(source_filename, "rb");
    if (source_file == NULL) {
        // Use perror to print a system-specific error message
        fprintf(stderr, "Error: The source file '%s' was not found.\n", source_filename);
        // We can use strerror(errno) for a specific message if not using perror
        // fprintf(stderr, "Reason: %s\n", strerror(errno));
        return 1;
    }

    // 2. Open destination file in write mode ("wb" for binary safety)
    dest_file = fopen(dest_filename, "wb");
    if (dest_file == NULL) {
        fprintf(stderr, "Error: Could not open destination file '%s' for writing.\n", dest_filename);
        perror("Reason"); // Prints why fopen failed
        fclose(source_file); // Ensure the already-opened source file is closed
        return 1;
    }

    // 3. Perform the copy operation using buffered I/O (fread/fwrite)
    // This is more efficient than the character-by-character C code
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0) {
        size_t bytes_written = fwrite(buffer, 1, bytes_read, dest_file);
        if (bytes_written != bytes_read) {
            fprintf(stderr, "An I/O error occurred while writing to the destination file.\n");
            // Check feof/ferror to see where the problem occurred
            break; 
        }
    }
    
    // Check if an error occurred during reading the source file
    if (ferror(source_file)) {
        fprintf(stderr, "An I/O error occurred while reading the source file.\n");
        // We return failure here, but still close files below.
    }

    // 4. Close files (equivalent to Python's 'with' statement ensuring cleanup)
    fclose(source_file);
    fclose(dest_file);

    printf("Successfully copied '%s' to '%s'.\n", source_filename, dest_filename);
    return 0; // Success
}

int main(int argc, char **argv) {
    // Check if the correct number of command-line arguments are provided
    if (argc != 3) {
        // Print usage information to stderr
        fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
        return EXIT_FAILURE; // Standard failure exit code (1)
    }

    // Pass the arguments to the file_copy function
    // argv[0] is the program name, argv[1] is source, argv[2] is destination
    int success = file_copy(argv[1], argv[2]);

    return success == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
