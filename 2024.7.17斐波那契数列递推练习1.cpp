#include <iostream>
using namespace std;
int main(){
	int n=0;
	cin>>n;
	if (n==0){
		cout<<"0";
		return 0;
	}
	if (n==1){
		cout<<"0";
		return 0;
	}
	long long memo[10000]={0,1};
	for(int i=2;i<=n;i++){
		memo[i]=memo[i-1]+memo[i-2];
	}
	cout<<memo[n];
	return 0;
}