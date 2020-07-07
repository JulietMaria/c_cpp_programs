
/*
Input : n = 4

Output :

1*2*3*4*17*18*19*20
--5*6*7*14*15*16
----8*9*12*13
------10*11

*/

#include <stdio.h>

int main() {
	//code
	  int n;
	  printf("Enter the no");
	  scanf("%d",&n);
	  pattern_trapezium(n);
	return 0;
}

void pattern_trapezium(n)
{
    	int space;
    
	int i,j,l=2;
	int total_no=n*(n+1)+1;
	int first_part=1;
	int half_part=1;
int second_part=0;
int m;
    
    for(i=n;i>0;i--)
    {
        if(i<n)
        {
            for(space=1;space<=l;space++)              //print inital -- 
            {
                printf("-");
            }
            l=l+2;
        }
        
        for(j=1;j<=i;j++)                      //print part 1*2*3*4
        {                              // print half part       5*6*7
           
            printf("%d",half_part);
           half_part++;
           printf("*");
            
        }

          total_no=total_no-i;               // subtract i from total i.e 21-4=17 so next part start from 17 
          second_part=total_no;
		  
		  
          for(m=1;m<=i;m++)                     //print part 17*18*19*20
          {                               // print half part 14*15*16
              printf("%d",second_part);           
              second_part++;
              if(m!=i)
              printf("*");
              
          }
        
        
         printf("\n");
    }
   
    
}
