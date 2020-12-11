/*Replace all vowels with spaces
Sample Input
Replace all vowels 
Sample Output
R pl c   ll v w ls
*/
#include <stdio.h>
#include <string.h>
#define isVowel(v) (v=='a'||v=='e'||v=='i'||v=='o'||v=='u'||v=='A'||v=='E'||v=='I'||v=='O'||v=='U')
int main() {
    char s[100];
    scanf("%[^\n]s",s);
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(isVowel(s[i]))
            s[i]=' ';
    }
    printf("%s",s);
    return 0;
}

