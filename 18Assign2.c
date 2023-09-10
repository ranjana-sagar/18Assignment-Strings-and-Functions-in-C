#include<stdio.h>
#include<string.h>
char* strrev1(char str[])
{
    char x;
    int i,l;
    l=strlen(str);
    for(i=0;i<l;i++,l--)
    {
        x=str[i];
        str[i]=str[l-1];
        str[l-1]=x;
    }
    return str;
}
int main()
{
    char str[20];
    printf("Enter a string:");
    fgets(str,20,stdin);
    printf("%s",strrev1(str));
    return 0;
}