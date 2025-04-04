#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c,x,y,z,r,k;
cin>>a>>b>>c;
x=a+b*c;
y=a*(b+c);
z=a*b*c;
r=(a+b)*c;
k=a+b+c;
cout<<max(x,max(y,max(z,max(r,k))))<<endl;
return 0;
}
