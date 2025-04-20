#include<bits/stdc++.h>
int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> coins(n);
    int totalSum = 0;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> coins[i];
        totalSum += coins[i];
    }

    std::sort(coins.rbegin(), coins.rend());  

    int takenSum = 0, count = 0;
    
    for (int i = 0; i < n; ++i) {
        takenSum += coins[i];
        ++count;
        if (takenSum > totalSum - takenSum) {
            break;
        }
    }

    std::cout << count << std::endl;
    
    return 0;
}
