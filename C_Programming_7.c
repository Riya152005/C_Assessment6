#include <stdio.h>
int main()
{
    int n = 1, sum;
    while(n <= 99)
    {
        sum = (n / 10) + (n % 10);
        if(n % 2 != 0)
        {
            if(sum == 7)
                printf("%d\n", n);
        }
        n++;
    }
}
