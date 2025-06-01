#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>c && d>c)cout<<"Flower"<<endl;
        else if(a<b && a<d)cout<<"Flower"<<endl;
        else cout<<"Gellyfish"<<endl;
    }
}
