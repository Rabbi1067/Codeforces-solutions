#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        int optimal_x = 0;
        int max_sum = 0;
 
        for (int x = 2; x <= n; x++) {
            int sum = 0;
            for (int k = 1; k * x <= n; k++) {
                sum += k * x;
            }
            if (sum > max_sum) {
                max_sum = sum;
                optimal_x = x;
            }
        }
 
        printf("%d\n", optimal_x);
    }
 
    return 0;
}
