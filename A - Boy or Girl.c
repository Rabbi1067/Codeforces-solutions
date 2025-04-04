#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
 
    int i,j,k,n;
 
    gets(str);
 
    for(i=0; i<strlen(str); i++)
    {
 
        for(j=i+1; j<strlen(str);)
        {
 
            if(str[i]==str[j])
            {
 
                for(k=j; k<strlen(str); k++)
                {
 
                    str[k]=str[k+1];
 
                }
 
            }
 
            else
            {
 
                j++;
 
            }
 
        }
        n=strlen(str);
 
    }
 
if(n%2 == 0)
    {
        printf("CHAT WITH HER!\n");
 
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
 
 
