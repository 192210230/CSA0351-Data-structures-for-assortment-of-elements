#include <ctype.h>
#include <stdio.h>
#include <string.h>

int checkTriangle(const char *s, size_t n) 
{
    size_t i;

    for (i = 0; i < n; ++i)
        if (!isdigit(s[i])) 
            return 0;

    return 1;
}

int main(void)
{
    char s[32];
    size_t n;

    fgets(s, sizeof s, stdin);
    n = strlen(s) - 1;
    s[n] = '\0';

    if (!checkTriangle(s, n))
        puts("You entered string");
    else
     printf("it is not a string");

    return 0;
}
