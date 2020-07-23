#include "stdio.h"
#include "math.h"
 
#define TRUE 1
#define FALSE 0
 
int isprime(long int x);
 
int main(void)
{
 long int i,n,count=1;
 printf("\nEnter Range: ");
 scanf("%ld",&n);
if(n>=3)
  printf(" { 3 , 7 },");
    for(i=7;i+2<=n;i+=6) {
        if(isprime(i) && isprime(i+4)){
             printf(" { %d , %d },",i,i+4);
        count++;
  }
}
 printf("\b \n\nTotal Primes within range: %ld\n",count);
 return 0;
}
 
int isprime(long int x)
{
 long int max=(int)sqrt(x),i,dx=4;
 for(i=5;i<=max;dx=-(dx-6),i+=dx)
    if(x%i==0)
        return FALSE;
 return TRUE;
}
