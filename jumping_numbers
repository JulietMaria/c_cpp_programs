#include <stdio.h>
int main()
{
    int num,dig1,dig2;
    scanf("%d",&num);//12345---<12345/10000
    while(num)
    {
        dig1=num%10;
        num=num/10;
        dig2=num%10;
        if(dig1-dig2!=1 && dig1-dig2!=-1)
            break;
    }
    if(num==0)
        printf("yes");
    else
        printf("no");

    return 0;
}
/* 
Output

12345 
yes

456789
yes

34256
no
*/
