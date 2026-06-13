#include <stdio.h>
int main()
{
    int n, temp, sum = 0, i, c = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            c++;
    }
    temp = n;
    while(temp > 0)
    {
        sum = sum + temp % 10;
        temp = temp / 10;
    }
    if(c == 2)
        printf("Prime");
    else
        printf("Not Prime");
    if(sum == 14)
        printf(" & Sum of Digits is 14");
    else
        printf(" & Sum of Digits is not 14");
}
