#include<stdio.h>
int check_prime(long long num)
{
    long long int i;
    if(num%2==0&&num!=2)
        return 0;
    for(i=3;i*i<=num;i+=2)
        if(num%i==0)
            return 0;
    return 1;
}
int main()
{
    long long int num;
    scanf("%lld",&num);
    check_prime(num)?printf("PRIME"):printf("NOT PRIME");
}