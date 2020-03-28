#include <stdio.h>

int main()
{
    int mat[3][3]={1,2,3,4,5,6,7,8,9};
    int m=3,n=3,num,row,col;
    scanf("%d",&num);
    for(row=0;row+1<m&&mat[row+1][0]<=num;row++);
    for(col=0;col<n&&mat[row][col]<num;col++);
    if(mat[row][col]==num)
    printf("%d %d",row,col);
    else
    printf("-1");

    return 0;
}

/*
1 2 3
4 5 6
7 8 9

Output
5
1 1

7
2 0

23
-1

*/
