#include<stdio.h>
#include<conio.h>
#include<string.h>
void factorial()
{
int n,i,fact=1;
printf("Enter a number to printfactorial\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 fact=fact*i;
}
printf("Factorial of %d is %d",n,fact);
}
int main()
{
    char username[3][15]; //={{"princeshuka"},{"chhotushukla"},{"ramanandpal"},{"haridasrahan"},{"krishnmodanwal"}};
    char user[15];
    int i;
    printf("Enter 3 username\n");
    for(i=0;i<3;i++)
    {
        fgets(username[i],15,stdin);
    }
    printf("Enter your username\n");
    fgets(user,15,stdin);
    for(i=0;i<3;i++)
    {
        int res=strcmp(username[i],user);
        if(res==0)
        {
            factorial();
           //printf("matched ");
        }
       
    }
    return 0;
}