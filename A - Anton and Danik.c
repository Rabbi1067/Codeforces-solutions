#include<stdio.h>
int main(){
int i,n,a=0,d=0;
scanf("%d",&n);
char num[n+1];
scanf("%s",&num);
 
for(i=0;i<n;i++){
    if(num[i]=='A'){
    a++;
}
else if(num[i]=='D'){
    d++;
}
}
if(a>d){
    printf("Anton\n");
}
else if(a<d){
    printf("Danik\n");
}
else if(a==d){
    printf("Friendship\n");
}
return 0;
}
