#include<stdio.h>
int main(){
long long n;
int a=0;
scanf("%lld",&n);
while(n!=0){
    if(n%10==4 || n%10==7){
        a++;
    }
        n=n/10;
 
}
if(a==4||a==7){
    printf("YES\n");
}
else{
    printf("NO\n");
}
 
 
 
return 0;
}
