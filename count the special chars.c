//count the special characters in the given string
/*
Sample Input
togy@#123
Sample Output
2
*/

#include <stdio.h>
#include <string.h>
int main() {   
    char s[100];
    scanf("%[^\n]s",s);
    int i,count=0;
    for(i=0;i<strlen(s);i++)
    {
        if(!((s[i]>=65 &&s[i]<=90) ||(s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)))
            count++;
    }
    printf("%d",count);
    return 0;
}
