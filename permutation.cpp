#include <bits/stdc++.h>
using namespace std;

void givepermutation(string s ,int n , string ans = "" ){
	if(ans.size()==n){
		cout<<ans<<endl;
	}
	for(int i=0;i<n-ans.size();i++){
		string m = "" ;
		for(int k=0;k<n;k++)
		  if(k!=i){ 
		  	m+=s[k] ;
		  }
		givepermutation(m,n,ans+s[i]);
	}
}

int main() {
	string s ;
	cin>>s;
	givepermutation(s,s.size());
	return 0;
}