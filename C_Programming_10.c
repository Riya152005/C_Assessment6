#include <stdio.h>
int main()
{
    int n = 70, sum = 0;
    while(n < 80)
    {
        if(n % 2 != 0)
            sum = sum + n;
        n++;
    }
    printf("%d", sum);
}
