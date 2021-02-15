#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3*sizeof(int));
    if(list == NULL) //메모리 할당에 문제가 생기면 프로그램을 종료한다.
    {
        return 1;
    } 

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    
    
    int *tmp = realloc(list, 4 * sizeof(int)); // realloc을 활용한 메모리 크기 늘리기
    if(tmp == NULL)
    {
        return 1; 
    }

    /*  
    int *tmp = malloc(4*sizeof(int)); //malloc을 활용한 메모리 크기 늘리기
    if(tmp == NULL) //메모리 할당에 문제가 생기면 프로그램을 종료한다.
    {
        return 1;
    }
    for(int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4;
    free(list); // list의 메모리 안의 값을 tmp로 옮겼으니 list메모리 할당을 해제한다.
    */
    list = tmp;
    tmp[3] = 4;

    for(int i = 0; i < 4; i++)
    {
        printf("%d\n", list[i]);
    } 
    free(list);
}