#include<bits/stdc++.h>
using namespace std;
int memo[10000];
long long cnt=0;
int mec(long long change,long long memo[]){
	if(change==0)return 0;
	if (change<0)return -1;
	if(memo[change]==0){
		if(change>=5){
			cnt=min(count,1+mec(change-5,memo));
		} 
		if(change>=2) {
			cnt=min(count,1+mec(change-2,memo));
		}
		if(change>=1){ 
			cnt=min(count,1+mec(change-1,memo));
		}
		memo[change]=cnt;
	}
	return memo[change];
}
int main(){
	cout<< mec(100000,memo);
}
