    #include <stdlib.h>
    #include <stdio.h>

    int main() {
        // Execute a command to list directory contents
        int status = system("ls -l"); // On Unix-like systems
        // int status = system("dir"); // On Windows
        if (status == -1) {
            perror("Error executing command");
            return 1;
        }
        printf("Command executed with status: %d\n", status);
        return 0;
    }