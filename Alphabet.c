#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("Alphabet Capital Case");
    else if(ch>='a'&&ch<='z')
        printf("Alphabet Small Case");
    else if(ch>='0'&&ch<='9')
        printf("digit");
    else
        printf("Special Character");            
return 0;
}
