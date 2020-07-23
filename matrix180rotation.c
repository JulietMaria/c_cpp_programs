#include <stdio.h> 
int main() 
{ 
    int N1,N2;
    scanf("%d%d",&N1,&N2);
	int mat[100][100];
	int i,j;
	for(i=0;i<N1;i++)
	{
	    for(j=0;j<N2;j++)
	    {
	        scanf("%d",&mat[i][j]);
	    }
	}
	//rotateMatrix((int*)mat,N1,N2); 
	for (i = N1 - 1; i >=0; i--) 
	{ 
	for (j = N2 - 1; j >=0; j--) 
		printf("%d ", mat[i][j]); 
	printf("\n"); 
	} 

	return 0; 
} 

