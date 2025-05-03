#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    vector<string>a(10);
    for(int i=0;i<10;i++) cin>>a[i];
    int score=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
           if (a[i][j] == 'X'){
                    int ans=min(min(i,j),min(9-i,9-j))+1;
                 score+=ans;
            }
        }
    }

  cout<<score <<endl;
}
return 0;
}
