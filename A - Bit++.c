#include<stdio.h>
int main(){
int i,n,x=0;
char bit[4];
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%s",&bit);
    if(bit[1]=='+'){
        x++;
    }
    else{
        x--;
    }
}
printf("%d",x);
return 0;
}
