#include<stdio.h>

int main(void)
{
    char *s = "EMMA";
    
    for(int i = 0; i<4; i++)
    {
        printf("%c\n", *(s+i));
    }
}
