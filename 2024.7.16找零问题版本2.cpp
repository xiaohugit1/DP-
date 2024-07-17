#include <iostream>
using namespace std;
int memo[1000];
int mec(int n,int memo[]){
	if(n==0)return 0;
	if(n<0)return -1;
	int cnt=100000;
	if(memo[n]==0){
		if(n>=1)cnt=min(cnt,1+mec(n-1,memo));
		if(n>=3)cnt=min(cnt,1+mec(n-3,memo));
		if(n>=5)cnt=min(cnt,1+mec(n-5,memo));
		memo[n]=cnt;
	}
	return memo[n];
}
int main(){
	int b=0;
	cin>>b;
	cout<<mec(b,memo);
}
