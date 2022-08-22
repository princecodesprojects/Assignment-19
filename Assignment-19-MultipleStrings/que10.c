#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[3][2][10]={{"prince","123"},{"kumar","456"},{"shukla","789"}};
    char username[10];
    char pass[10];
    int i;
    printf("Enter username\n");
    gets(username);
    printf("Enter password\n");
    gets(pass);

for(i=0;i<3;i++)
{
if(strcmp(a[i][0],username)==0 && strcmp(a[i][1],pass)==0)
{
      printf("User is authenticated\n");
      break;
}
else
{
printf("User is not authenticated\n");
break;
}

}
    
    return 0;
}