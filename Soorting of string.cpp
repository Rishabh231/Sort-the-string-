#include <iostream>
#include<algorithm>
#include <string>

using namespace std;

int main() {
	//code
	int t,i,n,arr[26];
	cin>>t;
	string s;
	while(t--)
	{
	    cin>>s;
	    sort(s.begin(),s.end());
	    cout<<s<<endl;
	}
	return 0;
}
