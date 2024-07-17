#include <iostream>
using namespace std;
long long memo[10086];
long fibo(int n,long long memo[]){
	if(n==0)return 0;
	if (n==1)return 1;
	if(memo[n]==0)memo[n]=fibo(n-1,memo)+fibo(n-2,memo);
	return memo[n];
}
int main(){
	long long s=0;
	cin>>s;
	cout<<fibo(s,memo);
}