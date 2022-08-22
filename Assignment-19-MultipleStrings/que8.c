#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[4][10]={"my","name","is","prince"};
    char first[]="my";
    char second[]="prince";
    int w1=0,w2=0,i;

    for(i=0;i<4;i++)
    {
        if(strcmp(a[i],first)==0)
        {
            w1=i;
        }
        else if(strcmp(a[i],second)==0)
        {
            w2=i;
        }
    }
    int df=abs(w1-w2);
    printf("Diffrence is %d",df-1);
    return 0;
}