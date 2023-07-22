#include <iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n),b(n);
	    map<int,int>mp;
	    for(auto &i:a)cin>>i;
	    for(auto &i:b){
	        cin>>i;
	        mp[i]++;
	    }
	    for(auto i:a)mp[i]++;
	    int mx=0;
	    for(auto it:mp)mx=max(mx,it.second);
	        cout<<mx<<"\n";
	}
	return 0;
}
