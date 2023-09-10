#include<stdio.h>
#include<string.h>
void ispalin(char[]);
int main()
{
    char str[]="revidiver";
    ispalin(str);
    return 0;
}
void ispalin(char str[])
{
    int i,l;
    l=strlen(str);
    for(i=0,l;i<l;i++,l--)
        if(str[i]!=str[l-1])
           break;
    printf(i>=l?"string is palindrome":"string is not palindrome");       
}