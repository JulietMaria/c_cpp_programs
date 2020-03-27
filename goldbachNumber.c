//sum of 2 primes-check Goldbach numbers

#include<stdio.h>
int isPrime(int num)
{
int factor;
for(factor=2;factor*factor<=num;factor++)
    if(num%factor==0)//not a prime num
        return 0;
return 1;        
}
int main()
{
    int num;
    scanf("%d",&num);
    if(num%2!=0)//odd
    {
        if(isPrime(num-2)==1)//num-2 is prime
            printf("2 %d",num-2);//2 num-2
        else//not a prime num
        {
            printf("-1");
        }
    }
    else//even
    {
        if(num==2)
            printf("-1");
        else if(num==4)
            printf("2 2");
        else
        {
            int check;
            for(check=3;;check+=2)
            {
                if(isPrime(check) && isPrime(num-check))
                {
                    printf("%d %d",check,num-check);
                    break;
                }
            }
        }
                
    }
    
      return 0;      
    

}
