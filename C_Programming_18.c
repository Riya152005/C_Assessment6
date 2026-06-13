#include <stdio.h>
int main()
{
    int n, x, i, c = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    x = n % 100;   
    for(i = 1; i <= x; i++)
    {
        if(x % i == 0)
            c++;
    }
    if(c == 2)
        printf("Prime");
    else
        printf("Not Prime");
}
