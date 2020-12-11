/*search for a character in a string
Sample Input
p
apple
Sample Output
Present

Sample Input
f
Myslate
Sample Output
Not Present
*/

#include <stdio.h>
#include <string.h>
int main() {
    char ch;
    scanf("%c",&ch);
    char s[100];
    scanf("%s",s);
    int i,c=0;
    for(i=0;i<strlen(s);i++)
    {
       if(s[i]==ch)
            c=1;
    }
    if(c)
        printf("Present");
    else
        printf("Not Present");
    return 0;
}
