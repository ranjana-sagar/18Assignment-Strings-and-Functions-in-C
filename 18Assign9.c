#include<stdio.h>
#include<string.h>
char* strrevword(char[]);
int main()
{
    char str[30]="welcome to my world";
    printf("%s",strrevword(str));
    return 0;
}
char* strrevword(char str[])
{
    int i,l2,x,k=0,a,l;
    l2=l=strlen(str);
    l-=1;
    l2-=1;
    for(i=0;i<=l;i++,l--)
    {
        x=str[i];
        str[i]=str[l];
        str[l]=x;
    }///////////////////////////
    for(i=0;i<=l2;i++)
    {
        if(str[i]==' ')
        {
            x=i;
            for(k,x-=1;k<=x;k++,x--)
            {
                a=str[k];
                str[k]=str[x];
                str[x]=a;
            }
            k=i+1;
        }
        else if(i==l2)
        {
            //x=i;
            for(k,l2;k<=l2;k++,l2--)
            {
                a=str[k];
                str[k]=str[l2];
                str[l2]=a;
            }
            break;
        }
    }//end of main for loop
    return str;
}///function end