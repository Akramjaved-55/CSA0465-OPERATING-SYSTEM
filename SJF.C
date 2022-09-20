#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *sourceFile;
FILE *destFile;
char sourcePath[100];
char destPath[100];
char ch;
printf("Enter source file path: ");
scanf("%s", sourcePath);
printf("Enter destination file path: ");
scanf("%s", destPath);
sourceFile = fopen(sourcePath, "r");
destFile = fopen(destPath, "w");
if (sourceFile == NULL || destFile == NULL)
{
printf("\nUnable to open file.\n");
printf("Please check if file exists and you have read/write
privilege.\n");
exit(EXIT_FAILURE);
}