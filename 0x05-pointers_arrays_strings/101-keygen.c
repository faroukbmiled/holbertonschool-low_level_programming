#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main (void)
{
        char* alp  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char* num = "0123456789";
        char* sym = "`~!@#$%^&*()_-+={}[]\\|:;\"'<>,.?/";
 
        int i, x, y, z;
        i = 0;
        x = 0;
        y = 0;
        z = 0;
        srand (time(NULL));

        printf ("i");
 
        for (i = 0; i < 12; i++)
        {
                x = (rand () % 50);
                y = (rand () % 9);
                z = (rand () % 31);
                printf ("%c%c%c", alp[x], num[y], sym[z]);
        }
 
        return 0;
}
