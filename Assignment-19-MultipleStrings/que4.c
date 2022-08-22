#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[5][20];
    char strig[10];
    int i,j,count=0;

     printf("Enter strings\n");
    for(i=0;i<5;i++)
    {
       
        fgets(str[i],20,stdin);
    }

    printf("Enter strings to find\n");
    fgets(strig,10,stdin);

for(i=0;i<5;i++)
{
   int res=strcmp(str[i],strig);
   if(res==0)
   break;
}
if(i==10)
printf("given strings is not available \n");
else
printf(" Your searched strings is %s\n",str[i]);
    return 0;
}