#include<stdio.h>
#include<string.h>
int main(){
int n,i,b;
char name[100];
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%s",&name);
    b=strlen(name);
    if(10<b){
    printf("%c%d%c\n",name[0],b-2,name[b-1]);
    }
    else{
        printf("%s\n",name);
    }
}
 
 
return 0;
