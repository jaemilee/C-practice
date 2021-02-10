#include<stdio.h>

int main(void)
{
    char *s = "EMMA";
    char *t = "EMMA";
    
    if(&s==&t)
    {
        printf("Smae\n");
        printf("s의 주소 값은 %p 입니다.\n", &s);
        printf("t의 주소 값은 %p 입니다.\n", &t);
    }
    else
    {
        printf("Different\n");
        printf("s의 주소 값은 %p 입니다.\n", &s);
        printf("t의 주소 값은 %p 입니다.\n", &t);
    }
    
}
