#include <bits/stdc++.h>
using namespace std;
int memo[10000];
int mec(int n,int memo[]){
	if(n==0)return 0;
	if(n<0)return -1;
	int cnt=10000;
	if(memo[n]==0){
		if(n>=5) cnt=min(cnt,1+mec(n-5,memo));
		if(n>=3) cnt=min(cnt,1+mec(n-3,memo));
		if(n>=1) cnt=min(cnt,1+mec(n-1,memo));
		memo[n]=cnt; //此处看了一下答案，把 memo[n]=cnt 写成了 cnt=memo[n] over;
	}
	return memo[n];
}
int main(){
	int a=0;
	cin>>a;
	cout<<mec(a,memo);
}