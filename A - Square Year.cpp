#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
       int n = stoi(s);
        bool f = false;
    for(int i=0;i<=99;i++){
        if(i*i==n){
            int a = i / 2;
                int b = i - a;
                cout << a << " " << b << endl;
                f = true;
                break;
        }
        
    }
    if(!f) cout<<-1<<endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	int t;
	cin >> t;
 
	while(t--){
		ll n;
		cin >> n;
 
		ll r = sqrt(n);
		if(r*r == n){
			if(r % 2 == 0){
				cout << (r/2) << " " << (r/2) << endl;
			}
			else cout << (r/2) << " " << (r/2)+1 << endl;
		}
		else cout << -1 << endl;
	}
}
*/
