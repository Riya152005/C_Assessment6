#include <stdio.h>
int main()
{
    int i = 1;
    printf("Odd numbers");
    while(i <= 9)
    {
        if(i % 2 != 0)
            printf("\n%d", i);
        i++;
    }
}
