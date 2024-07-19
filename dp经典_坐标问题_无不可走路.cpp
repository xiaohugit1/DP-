#include <iostream>
using namespace std;
const int N=550;
int dp[N][N];
void man(){
	for(int n=1;n<N;n++){
		for(int m=1;m<N;m++){
			if(n==1 or m==1)dp[n][m]=1;
			else dp[n][m]=dp[n-1][m]+dp[n][m-1];
		}
	}
}
int main(){
	man();
	int n=0,m=0;
	cin>>n>>m;
	cout<<dp[n][m];
	return 0;
}