#include<stdio.h>
char* strupr1(char[]);
int main()
{
    char str[30];
    printf("Enter astring:");
    fgets(str,30,stdin);
    printf("%s",strupr1(str));
    return 0;
}
char* strupr1(char str[])
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='a'&&str[i]<='z')
           str[i]-=32;
    return str;       
}