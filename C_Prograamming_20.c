#include <stdio.h>
int main()
{
    int i, c, count = 0, j;
    for(i = 1; i <= 9; i++)
    {
        c = 0;
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                c++;
        }
        if(c == 2)
            count++;
    }
    printf("%d", count);
}
