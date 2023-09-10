#include<stdio.h>
#include<string.h>
int indexoffirst(char[],char);
int main()
{
    char str[30];
    printf("Enter a string:");
    fgets(str,30,stdin);
    printf("%d",indexoffirst("hello learnerts",'r'));
    return 0;
}
int indexoffirst(char str[],char x)
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]==x)
          break;
    return i;      
}