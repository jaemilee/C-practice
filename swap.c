#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x,y;
    printf("swap number1: ");
    scanf("%d", &x);

    printf("swap number2: ");
    scanf("%d", &y);

    swap(&x, &y); // x,y의 주소값을 전달해준다.

    printf("change x: %d, y: %d \n", x , y);

}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}