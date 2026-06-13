#include <stdio.h>
int main()
{
    int n, temp, last, first, p = 1, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    if(last % 2 == 0)
    {
        printf("%d", n);
    }
    else
    {
        temp = n;
        while(temp >= 10)
        {
            temp = temp / 10;
            p = p * 10;
        }
        first = temp;
        result = (first - 1) * p + (n % p);
        printf("%d", result);
    }
}
