#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[10][20];
    char b[10][20];
    char t[20];
    int i,j;
    
     printf("Enter strings\n");
    for(i=0;i<3;i++)
    {
        gets(a[i]);
    }

for(i=0;i<3;i++)
{
    for(j=i+1;j<3;j++)
    {
        if(strcmp(a[i],a[j])>0)
        {
            strcpy(t,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],t);
        }
    }
}

for(i=0;i<3;i++)
{
printf(" %s\n",a[i]);
}

    return 0;
}