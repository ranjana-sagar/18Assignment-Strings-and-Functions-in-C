#include<stdio.h>
#include<string.h>
int totalword(char str[]);
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    printf("%d",totalword(str));
    return 0;
}
int totalword(char str[])
{
    int i,count=1;
    for(i=0;str[i];i++)
        if(str[i]==' '&&str[i+1]!=' ')
           count+=1;
    return count;    
}