#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ftpr;

    //Create a file and file name
    char file_name[10];

    printf("Enter the file name:");
    scanf("%s",file_name);

    ftpr=fopen(file_name,"a");
    fclose(ftpr);

    //Writing to File
    fopen(file_name,"a");
    char text[100];
    printf("Enter the text:");
    scanf("%s",text);

    fprintf(ftpr,"%s\n",text);
    fclose(ftpr);

    //Read the file
    fopen(file_name,"r");
    char myString[100];
    fgets(myString,100,ftpr);
    printf("%s",myString);
    fclose(ftpr);   

    return 0;
}
