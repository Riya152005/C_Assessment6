#include <stdio.h>
int main()
{
    int n, x, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n >= 10)
    {
        x = n % 100;
        if(x % 2 != 0)
            count++;
        n = n / 10;
    }
    printf("%d", count);
}
