#include<stdio.h>
int main(){
int k,n,w;
scanf("%d%d%d",&k,&n,&w);
int bcost,sum=0;
for(int i=1;i<=w;i++){
        bcost=k*i;
        sum=bcost+sum;
}
if(sum>n){
printf("%d\n",sum-n);
}
else{
    printf("0\n");
}
return 0;
}
