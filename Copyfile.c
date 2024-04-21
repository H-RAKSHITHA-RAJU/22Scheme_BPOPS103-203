#include <stdio.h>
#include <stdlib.h>

#define MAX_FILENAME_LENGTH 100
#define BUFFER_SIZE 1024

int main() {
    FILE *source_file, *target_file;
    char source_filename[MAX_FILENAME_LENGTH];
    char target_filename[MAX_FILENAME_LENGTH];
    char buffer[BUFFER_SIZE];
    size_t bytes_read;

    // Input source file name
    printf("Enter the name of the source file: ");
    scanf("%s", source_filename);

    // Input target file name
    printf("Enter the name of the target file: ");
    scanf("%s", target_filename);

    // Open source file for reading
    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        printf("Error: Unable to open the source file.\n");
        return 1;
    }

    // Open target file for writing
    target_file = fopen(target_filename, "w");
    if (target_file == NULL) {
        printf("Error: Unable to create or open the target file.\n");
        fclose(source_file);
        return 1;
    }

    // Copy contents from source to target file
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0) {
        fwrite(buffer, 1, bytes_read, target_file);
    }

    // Close both files
    fclose(source_file);
    fclose(target_file);

    printf("File copied successfully.\n");

    return 0;
}

/*
Copying a text file to another (Target File)
Input:
Enter the name of the source file: source.txt
Enter the name of the target file: target.txt
(Assuming source.txt contains "Hello, world!")
Output:
File copied successfully.
  */
