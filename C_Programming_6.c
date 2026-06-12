#include <stdio.h>
int main()
{
    int i = 11;
    printf("Odd numbers below 20");
    while(i <= 20)
    {
        if(i % 2 != 0)
            printf("\n%d", i);
        i++;
    }
}
