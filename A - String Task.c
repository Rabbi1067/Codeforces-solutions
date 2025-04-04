#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
int n,i;
char a[100];
scanf("%s",&a);
for(i=0;i<strlen(a);i++){
    n=tolower(a[i]);
    if(n !='a'&&n !='o'&&n !='y'&&n !='e'&&n !='u'&&n !='i'){
        printf(".%c",tolower(a[i]));
    }
}
return 0;
}
 
