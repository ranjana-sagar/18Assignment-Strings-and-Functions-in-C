#include<stdio.h>
int strlen1(char[]);
int main()
{
    char str[20];
    printf("Enter a string:");
    fgets(str,20,stdin);
    printf("%d",strlen1(str));
    return 0;
}
int strlen1(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i;
}