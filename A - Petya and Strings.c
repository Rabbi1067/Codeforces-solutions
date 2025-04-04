#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include<math.h>
int main(){
char a[100],b[100];
 
scanf("%s",&a);
scanf("%s",&b);
if(stricmp(a,b)<0){
    printf("-1\n");
}
else if(stricmp(a,b)>0){
    printf("1\n");
}
else{
    printf("0\n");
}
return 0;
}
