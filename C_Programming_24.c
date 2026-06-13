#include <stdio.h>
int main()
{
    int n, x, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n >= 10)
    {
        x = n % 100;
        if(x==16 || x==25 || x==36 || x==49 || x==64 || x==81)
            count++;
        n = n / 10;
    }
    printf("%d", count);
}
