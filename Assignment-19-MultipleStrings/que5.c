#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[3][20];
    int i,j,count=0;
     printf("Enter emails\n");
    for(i=0;i<3;i++)
    {
       
        gets(str[i]);
    }

for(i=0;i<3;i++)
{
    if(strchr(str[i],'@')!=0)
    printf("%s\n",str[i]);
}
    return 0;
}