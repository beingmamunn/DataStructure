#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll l1,r1,l2,r2,k;
	cin>>l1>>r1>>l2>>r2>>k;
	ll l=max(l1,l2);
	ll r=min(r1,r2);
	if(l>r)
	cout<<0<<endl;
	else{
		if(k>=l && k<=r){
			cout<<abs(r-l+1-1)<<endl;
		}
		else{
			cout<<abs(r-l+1)<<endl;
		}

	}
}
