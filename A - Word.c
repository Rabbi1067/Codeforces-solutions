#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char a[100];
int i,upp=0,low=0;
scanf("%s",&a);
for(i=0;i<strlen(a);i++)
{
    if(a[i]>='A' && a[i]<='Z'){
        upp++;
    }
    if(a[i]>='a' && a[i]<='z'){
        low++;
    }
}
if(low>upp){
        for(int j=0;j<strlen(a);j++){
           printf("%c",tolower(a[j]));
        }
 
}
else if(upp>low){
    for(int j=0;j<strlen(a);j++){
           printf("%c",toupper(a[j]));
        }
}
else if(upp==low){
    for(int j=0;j<strlen(a);j++){
           printf("%c",tolower(a[j]));
        }
}
return 0;
}
