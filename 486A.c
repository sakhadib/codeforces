#include<stdio.h>

int main()
{
    long long int n,sum;
    scanf("%lld",&n);

    if(n%2==0)
    {
        sum = n/2;
        printf("%lld",sum);
    }
    else
    {
        sum = ((n/2)+1)*(-1);
        printf("%lld",sum);
    }

    return 0;
}
