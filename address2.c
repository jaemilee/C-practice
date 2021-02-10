#include<stdio.h>

int main(void)
{
    int n = 50;
    int *address = &n;
    
    printf("%p  \n", address);
    
    printf("%d \n", *address);
}
