#include<stdio.h>
#include<string.h>
void isalpha1(char[]);
int main()
{
    char str[30];
    printf("Enter a string:");
    fgets(str,30,stdin);
    isalpha1(str);
    return 0;
}
void isalpha1(char str[])
{
   int i,l,j;
    l=strlen(str);
    for(i=0;i<l;i++)
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            break;        
    for(j=0;j<l;j++)
        if(str[j]>='0'&&str[j]<='9')
            break;  
    printf(i<l && j<l?"String is alpha numeric":"String is not alpha numeric");        
}