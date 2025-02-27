#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>card(n);
for(int i=0;i<n;i++){
    cin>>card[i];
}
int sereja=0,dima=0;
int l=0;
int r=n-1;
int cnt=0;
while(l<=r){
    if(cnt%2==0){
        if(card[l]>card[r]){
            sereja=sereja+card[l];
            l++;
        }
        else{
            sereja=sereja+card[r];
            r--;
        }
    }
    else{
        if(card[l]>card[r]){
            dima=dima+card[l];
            l++;
        }
        else{
            dima=dima+card[r];
            r--;
        }
    }
    cnt++;
}
cout<<sereja<<" "<<dima<<endl;
return 0;
}
