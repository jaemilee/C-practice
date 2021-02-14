#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    
    typedef char *string;
    
    string s  = "emma";
    string t = malloc(strlen(s) + 1); // 메로리 할당
    
    strcpy(t, s);
    /* for(int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i];
    }
    */
    t[0] = toupper(t[0]);
    
    printf("%s\n", s);
    printf("%s\n", t);

    free(t); // 메모리 할당 해제
}

