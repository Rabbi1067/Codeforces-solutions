#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int mill=k*l;
int toast=mill/nl;
int limes=c*d;
int solt=p/np;
int ans=min(toast,min(limes,solt))/n;
cout<<ans<<endl;
return 0;
}
