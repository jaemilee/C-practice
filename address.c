#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p \n", &n); //&는 변수n의 주소의 위치를 알려준다(n의 주소가 뭐야), %p는 주소를 출력해준다.
    
    printf("%i \n", *&n); //*는 주소의 위치로 가준다.(n의 주소로 가줘)
}
