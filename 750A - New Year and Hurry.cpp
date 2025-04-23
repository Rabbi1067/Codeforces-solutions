#include<bits/stdc++.h>
using namespace std;

int main(){
 int n,k; cin>>n>>k;

    int min = 240-k;
    int time = 0;
    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        time += 5 * i;
        if (time <= min)
            ++ans;
        else
            break;
    }

    cout << ans << endl;
    return 0;
}
