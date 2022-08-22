#include<stdio.h>
#include<conio.h>
int main()
{
    char str[10][20];
    int i,j,count=0;
     printf("Enter strings\n");
    for(i=0;i<3;i++)
    {
       
        fgets(str[i],20,stdin);
    }

for(i=0;i<3;i++)
{
    for(j=0;str[i][j];j++)
    {
        if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
        {
            count++;
        }
    }
    printf("%s = %d\n",str[i],count);
    count=0;
}

    return 0;
}