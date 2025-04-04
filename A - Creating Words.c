#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  
 
    while (n--) {
        char a[4], b[4];
        scanf("%s %s", a, b); 
 
        
        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        printf("%s %s\n", a, b);
    }
    return 0;
}
