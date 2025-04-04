#include<stdio.h>
int main(){
int i,n;
int x,y,z,xs=0,ys=0,zs=0;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d%d%d",&x,&y,&z);
    xs=xs+x;
    ys=ys+y;
    zs=zs+z;
}
if(xs==0 &&ys==0&&zs==0){
    printf("YES\n");
}
else{
    printf("NO\n");
}
return 0;
}
