#include <iostream>
using namespace std;
long long memo[1000]={0,1,1};
int fibo(int n,long long memo[]){
	if(n<2) return memo[n];
	for(int i=2;i<=n;i++)memo[i]=memo[i-1]+memo[i-2];
	return memo[n];
}
int main(){
	int i=0;
	cin>>i;
	cout<<fibo(i,memo);
	
}