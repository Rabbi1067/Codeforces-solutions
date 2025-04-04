#include<stdio.h>
int main(){
int n,x,y,i,team;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d %d",&x,&y);
    if(x>y){
        team =y;
        y=x;
        x=team;
        printf("%d %d\n",x,y);
    }
    else{
        printf("%d %d\n",x,y);
    }
}
return 0;
}
