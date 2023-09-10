#include<stdio.h>
#include<string.h>
void charrept(char[]);
int main()
{
    char str[30];
    printf("Enter a string:");
    fgets(str,30,stdin);
    charrept(str);
    return 0;
}
void charrept(char str[])
{
    int i,freq[256]={0};
    for(i=0;str[i];i++)
        freq[str[i]]++;
    for(i=0;i<=255;i++)
        if(freq[i]>1)
           printf("%c==>%d\n",i,freq[i]);  
}