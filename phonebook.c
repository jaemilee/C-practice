#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");

    char name[15];
    printf("name: ");
    scanf("%s", name);

    char number[15];
    printf("number: ");
    scanf("%s", number);

    fprintf(file, "%s, %s \n", name, number);

    fclose(file);

}