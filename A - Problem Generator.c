#include <stdio.h>
#include <string.h>
int main() {
    int x;
    scanf("%d", &x);
    for (int case_num = 0; case_num < x; case_num++) {
        int n, m;
        scanf("%d %d", &n, &m);
        char problems[51];
        scanf("%s", problems);
        int count[7] = {0};
        for (int i = 0; i < n; i++) {
            count[problems[i] - 'A']++;
        }
        int rabbi = 0;
        for (int i = 0; i < 7; i++) {
            if (count[i] < m) {
               rabbi += (m - count[i]);
            }
        }
        printf("%d\n", rabbi);
    }
    return 0;
}
