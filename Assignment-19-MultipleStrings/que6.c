#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[4][10]={"level","ramayan","madam","naman"};

    int i;

    for(i=0;i<4;i++)
    {
        int l=strlen(a[i]);
        int j=0,k=l-1;
        char temp[10];
        strcpy(temp,a[i]);
        while(j<=k)
        {
            if(temp[j]!=temp[k])
            break;
            j++;
            k--;
        }
        if(j>k)
        printf("%s\n",a[i]);
    }
    return 0;
}