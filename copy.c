#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    
    typedef char *string;
    
    string s  = "emma";
    string t = malloc(strlen(s) + 1); //에러발생.. 원인 모르겠음..
    
    for(int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i];
    }
    
    t[0] = toupper(t[0]);
    
    printf("%s\n", s);
    printf("%s\n", t);

}

