#include <stdio.h>

int main(int argc, const char * argv[])
{

    if(argc != 2)
    {
        printf("명령행 인자를 넣어주시기 바랍니다.");
        return 1;
    }

    printf("명령행 인자를 넣으셨군요 \n");
    printf("넣은 명령행 인자는 %s 입니다.", argv[1]);
    return 0;

}
