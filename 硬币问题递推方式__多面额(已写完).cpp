#include <iostream>
using namespace std;
const int MAN=20;
int memo[MAN];
int num=0;
int coins[10]={0};
void mec(int change,int memo[]){
	memo[0]=0;
	for(int i=1;i<MAN;i++){
		memo[i]=-1;
	}
	for(int i=0;i<change;i++){
		for(int j=0;j<num;j++){
			if(i>=coins[j]){
				int tmp=memo[i-coins[j]];
				if(memo[i]==-1 or tmp<memo[i]){
					memo[i]=tmp;
				}
			}
		}
	}
}
int main(){
	int x=0;
	cin>>x;
	while (1){
		cin>>memo[num++];
		if(getchar()=='/n') break;
	}
	mec(x,memo);
	return 0;
}