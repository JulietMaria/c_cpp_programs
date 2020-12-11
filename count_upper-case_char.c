/*count the number of upper-case characters in a given string
Sample Input
BeauTIfull Life
Sample Output
4
*/
#include <stdio.h>
#include <string.h>
int main() { 
    char s[20];
    scanf("%[^\n]s",s);
    int i,count=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=90)
            count++;
    }
    printf("%d",count);
    return 0;
}
