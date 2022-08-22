#include<stdio.h>
#include<conio.h>
int main()
{
    char str[5][20];
    int i;
     printf("Enter strings\n");
    for(i=0;i<5;i++)
    {
       
        fgets(str[i],20,stdin);
    }

for(i=0;i<5;i++)
{
   printf("%d is %s\n",i+1,str[i]);
}
    return 0;
}