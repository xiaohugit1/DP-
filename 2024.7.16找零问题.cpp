#include<bits/stdc++.h>
using namespace std;
int memo[1000000];
int cnt=10000;
int mec(int change,int memo[]){
	if(change==0)return 0;
	if (change<0)return -1;
	if(memo[change]==0){
		if(change>=5){
			cnt=min(cnt,1+mec(change-5,memo));
		} 
		if(change>=2) {
			cnt=min(cnt,1+mec(change-2,memo));
		}
		if(change>=1){ 
			cnt=min(cnt,1+mec(change-1,memo));
		}
		memo[change]=cnt;
	}
	return memo[change];
}
int main(){
	cout<<mec(7,memo);
}