#include <iostream>
using namespace std;
const int N=10;
int dp[N][N]={0};
int v[N]={0,1500,3000,2000};
int w[N]={0,1,4,3};
int main(){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=4;j++){
			if(j>=w[i]){
				dp[i][j]=max(v[i]+dp[i-1][j-w[i]],dp[i-1][j]);
			}else dp[i][j]=dp[i-1][j];
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=4;j++){
			cout<<dp[i][j]<<endl;
		}
		cout<<endl;
	}
	cout<<"dp[3][4]"<<"="<<dp[3][4];
}