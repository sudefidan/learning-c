/*
Code to do following operations:
a-print the contents of file
b-copy contents of one file to another file
c- count the Number of Characters in a File
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Write prototypes of all functions
void PrintFileContent(FILE *fPtr);
void copy_file(FILE *fPtr1, FILE *fPtr2);
int findNumberofChar(FILE *fPtr);

int main()
{
    // Describe empty file pointers and char for names of files
    FILE *fPtr2 = NULL;
    FILE *fPtr = NULL;
    char tfirst[20], tsecond[20];

    // get name of first file
    printf("Enter the filename to open for reading: ");
    fgets(tfirst, sizeof(tfirst), stdin);
    tfirst[strcspn(tfirst, "\n")] = '\0'; // remove newline character

    // Open the first file in reading mode and assign to first pointer
    FILE *fPtr1 = fopen(tfirst, "r");

    /* If the first pointer is still empty (and it means that the file couldn't open),
       give an error and exit */
    if (fPtr1 == NULL)
    {
        printf("ERROR: SOURCE FILE CANNOT BE OPENED.\n");
        exit(EXIT_FAILURE);
    }

    // Get name of the second file
    printf("Enter the filename to open for writing and reading: ");
    fgets(tsecond, sizeof(tsecond), stdin);
    tsecond[strcspn(tsecond, "\n")] = '\0'; // remove newline character

    /* Open the second file in writing mode and assign to the second pointer.
       After that, if it is still empty (and it means that the file couldn't open),
       give an error and exit. If not, continue processing */
    if ((fPtr2 = fopen(tsecond, "w")) == NULL)
    {
        printf("ERROR: DESTINATION FILE CANNOT BE OPENED.\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        // Call function to print the first file's content
        PrintFileContent(fPtr1);

        // Call function to copy the first file to the second file
        copy_file(fPtr1, fPtr2);

        // Open the second file again in reading mode
        FILE *PTR;
        PTR = fopen(tsecond, "r");

        // Call function that finds the number of characters in the second file and assign it to ch
        int ch;
        ch = findNumberofChar(PTR);

        // Open the second file again in reading and appending mode
        FILE *FP;
        FP = fopen(tsecond, "a+");

        // Print the number of characters in the second file
        fprintf(FP, "\nThe file %s has %d characters.\n", tsecond, ch);

        // Call function to print the second file's content
        PrintFileContent(FP);

        // Close all files
        fclose(FP);
        fclose(fPtr1);
    }
    return 0;
}

void PrintFileContent(FILE *fPtr)
{
    // Move the cursor to the top of the file using the rewind function
    rewind(fPtr);

    int ch;
    // Get the characters of the file and assign them to ch
    ch = fgetc(fPtr);
    // Repeat until the end of file character is reached
    while (ch != EOF)
    {
        // Print the characters to the console
        putchar(ch);
        ch = fgetc(fPtr);
    }
}

void copy_file(FILE *fPtr1, FILE *fPtr2)
{
    // Move the cursor to the top of the file using the rewind function
    rewind(fPtr1);

    int ch;
    // Repeat until the end of file character is reached
    while ((ch = fgetc(fPtr1)) != EOF)
    {
        /* With toupper function, don't change the letter if it is uppercase;
           if it is lowercase, make it uppercase. */
        ch = toupper(ch);
        // Put the changed characters into the second file
        fputc(ch, fPtr2);
    }

    // Close the second file
    fclose(fPtr2);
}

int findNumberofChar(FILE *fPtr)
{
    // Describe a character counter and make it 0
    char ch;
    int charcount;
    charcount = 0;

    if (fPtr)
    {
        // Repeat until the end of file character is reached
        while ((ch = getc(fPtr)) != EOF)
        {
            // Increase the character counter by one
            ++charcount;
        }
    }

    // Close the file
    fclose(fPtr);

    // Return the character counter
    return charcount;
}
