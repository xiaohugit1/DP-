#include<iostream>
#include<algorithm>
long long count=100000;
using namespace std;
int memo[10000];
int mec(long long change,memo[]){
	if(change==0)return 0;
	if (change<0)return -1;
	if(memo[change]==0){
		if(change>=5){
			count=min(count,1+mec(change-5,memo));
		} 
		if(change>=2) {
			count=min(count,1+mec(change-2,memo));
		}
		if(change>=1){ 
			count=min(count,1+mec(change-1,memo));
		}
		memo[change]=count;
	}
	return memo[change];
}
int main(){
	cout<< min(11,5);
}
