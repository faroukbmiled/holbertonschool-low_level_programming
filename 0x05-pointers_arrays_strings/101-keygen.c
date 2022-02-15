#include <time.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    char len[100];
    int num;
    int i;

    i = len[100];
    num = 1;
    srand (time(NULL));
 
    while(num--)
    {
        while(i++) {
            putchar(rand() % 56 + 65);
            srand(rand());
        }

    }
 
    printf("\n");
    return (0);
}
