#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char *p;
    int i = 0;
    char *h;

    h = malloc(34495);
    p = malloc(1);
    while (1)
    {
        p[i] = 0;
        printf("%d\n", i);
        i++;
        /* code */
    }
    
}
//134495