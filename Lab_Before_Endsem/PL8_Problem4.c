#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *srcFile, *dstFile;
    char ch;

    // Check if the user provided correct number of arguments
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    // Try to open the source file for reading
    srcFile = fopen(argv[1], "r");
    if (srcFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Try to open the destination file for writing
    dstFile = fopen(argv[2], "w");
    if (dstFile == NULL) {
        perror("Error opening destination file");
        fclose(srcFile);
        return 1;
    }

    // Copy character by character from source to destination
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, dstFile);
    }

    printf("File copied successfully from '%s' to '%s'.\n", argv[1], argv[2]);

    // Close both files
    fclose(srcFile);
    fclose(dstFile);

    return 0;
}
