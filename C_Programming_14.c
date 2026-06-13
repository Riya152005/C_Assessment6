#include <stdio.h>
int main()
{
    int n, temp, first, last, digits = 0, mid, p = 1, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }
    first = temp;
    while(digits > 0)
    {
        p = p * 10;
        digits--;
    }
    mid = (n % p) / 10;
    result = last * p + mid * 10 + first;
    printf("%d", result);
}
