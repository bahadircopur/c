#include <stdio.h>
int main(void)
{
    int i,j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%5d", i*j+1);
        }
        printf("\n");
    }
    
    return 0;
}