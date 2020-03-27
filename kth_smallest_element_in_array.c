//Finding the k th smallest element in an array
//implementing bubble sort to decrease iterations-no need to sort entire array
#include <stdio.h>

int main()
{
    int arr[]={28,30,12,18,56,32,48},n=7,k=4;
    int index,itr;
    for(itr=1;itr<=k;itr++)//k times
    {
        for(index=0;index<n-itr;index++)//0 to n-iteration
        {
            if(arr[index]<arr[index+1])//element compared with next element
            {
                //if descending order is not maintained
                int temp=arr[index];
                arr[index]=arr[index+1];
                arr[index+1]=temp;
            }
        }
    }
    printf("%d",arr[n-k]);

    return 0;
}
