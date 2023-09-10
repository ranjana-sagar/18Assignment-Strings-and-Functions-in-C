#include<stdio.h>
char* strlwr1(char[]);
int main()
{
    char str[30];
    printf("Enter astring:");
    fgets(str,30,stdin);
    printf("%s",strlwr1(str));
    return 0;
}
char* strlwr1(char str[])
{
    int i;
    for(i=0;str[i];i++)
        if(str[i]>='A'&&str[i]<='Z')
           str[i]+=32;
    return str;       
}