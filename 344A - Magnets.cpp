#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=1;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
