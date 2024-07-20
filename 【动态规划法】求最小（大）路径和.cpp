#include <iostream>
#include <algorithm>
using namespace std;
const int N=25;
int dp[N][N];
int grid[N][N];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>grid[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		dp[i][1]=dp[i-1][1]+grid[i][1];
	}
	for(int j=1;j<=m;j++){
		dp[1][j]=dp[1][j-1]+grid[1][j];
	}



	for(int i=2;i<=n;i++){
		for(int b=2;b<=m;b++){
			dp[i][b]=min(dp[i-1][b],dp[i][b-1])+grid[i][b];
		}
	}
    cout<<dp[n][m];
}