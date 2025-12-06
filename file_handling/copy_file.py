import sys

def file_copy(source_filename, dest_filename):
    try:
        # Open source file in read mode and destination file in write mode ('w')
        # using a 'with' statement ensures files are automatically closed
        with open(source_filename, 'r') as source_file:
            with open(dest_filename, 'w') as dest_file:
                # Read all content from source and write it to destination
                content = source_file.read()
                dest_file.write(content)
        
        print(f"Successfully copied '{source_filename}' to '{dest_filename}'.")

    except FileNotFoundError:
        # Handles the error if the source file does not exist
        print(f"Error: The source file '{source_filename}' was not found.")
        sys.exit(1)
    except IOError as e:
        # Handles other potential input/output errors
        print(f"An I/O error occurred: {e}")
        sys.exit(1)

if __name__ == "__main__":
    # Check if the correct number of command-line arguments are provided
    if len(sys.argv) != 3:
        print("Usage: python script_name.py <source_file> <destination_file>")
        sys.exit(1)

    # The first argument (sys.argv[0]) is the script name itself
    source_file_arg = sys.argv[1]
    dest_file_arg = sys.argv[2]

    file_copy(source_file_arg, dest_file_arg)
