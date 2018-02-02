#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char c[82];
    gets(c+1);
    c[0] = ' ';
    for(int i=strlen(c);i>=0;i--)
    {
        if(c[i] == ' ')
        {
            printf("%s", c+i+1);
            c[i] = '\0';
            if(i != 0)
            {
                printf("%c", ' ');
            }

        }
        else
        {
            continue;
        }
    }
    return 0;
}
