#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int num=0,c=0;
    char ip[]="23.00.00.255";
    char *a=strtok(ip,".");

    while(a!=0)
    {
        c++;
        int x=atoi(a);

        if((x>=0)&&(x<=255))
        {
         num++;
        }
        a=strtok(NULL,".");
    }
    if(c==4&&num==4)
    printf("Valid");
    else
    printf(" not Valid");
    return 0;
}