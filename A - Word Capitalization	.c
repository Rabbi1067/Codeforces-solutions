#include <stdio.h>
#include <ctype.h>
int main() {
char a[1000];
scanf("%s",&a);
 a[0]=toupper(a[0]);
printf("%s\n",a);
return 0;
}
