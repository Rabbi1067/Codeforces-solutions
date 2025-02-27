#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
set<int>num;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    num.insert(a);
}
if(num.size()<2) cout<<"NO"<<endl;
else{
    auto it=num.begin();
        for (int i = 0; i < 1; i++) { //or atao kora jai  advance(it, 1);
            ++it;
        }
        cout << *it << endl;
    }
return 0;
}
