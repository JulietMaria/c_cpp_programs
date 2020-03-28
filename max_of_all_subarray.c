//max of all subarray
#include <stdio.h>
int main()
{
    int arr[7]={5,9,4,2,1,10,14};
    int size=7,wind=3,itr1,itr2,max;//wind->window value
    for(itr1=0;itr1<=size-wind;itr1++)//size-wind=7-3=4
    {
        max=arr[itr1];
        for(itr2=itr1+1;itr2<wind+itr1;itr2++)
        {
            if(max<arr[itr2])
                max=arr[itr2];
        }
        printf("%d ",max);
    }
    return 0;
}
/*
5,9,4,2,1,10,14
5 9 4 =>9
9 4 2 =>9
4 2 1 =>4
2 1 10=>10
1 10 14 =>14

Output:
9 9 4 10 14 

*/

