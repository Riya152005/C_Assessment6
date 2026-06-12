#include <stdio.h>
int main()
{
    int n = 1, sum = 0;
    while(n <= 99)
    {
        if(n % 10 == 5)
            sum = sum + n;
        n++;
    }
    printf("Sum = %d", sum);
}
