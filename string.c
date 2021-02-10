#include<stdio.h>

int main(void)
{
    char *s = "EMMA";
    
    printf("%s\n", s);
    
    printf("포인터 s의 주소: %p \n", s);
    printf("포인터 s의 첫글자의 주소: %p \n", &s[0]);
}
