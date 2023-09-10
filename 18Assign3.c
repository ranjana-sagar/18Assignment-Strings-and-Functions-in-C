#include<stdio.h>
#include<string.h>
int strcmp1(char[],char[]);
int main()
{
    char s1[]="hello12";
    char s2[]="hello123";
    printf("%d",strcmp1(s1,s2));
    return 0;
}
int strcmp1(char s1[],char s2[])
{
    int i,l1,l2;
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1<=l2)
    {
        for(i=0;i<l1;i++)
            if(s1[i]>s2[i])
               return 1;
            else if(s1[i]<s2[i])
               return -1;
        return i==l2?0:-1;             
    }
    else
    {
        for(i=0;i<l2;i++)
            if(s1[i]>s2[i])
               return 1;
            else if(s1[i]<s2[i])
               return -1;
        return i==l1?0:1;              
    }
}