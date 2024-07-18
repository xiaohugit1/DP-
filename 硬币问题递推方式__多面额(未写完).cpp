#include <iostream>
using namespace std;
const int MAN=20;
int memo[MAN];
int num=3;
int coins[10]={1,2,5};
void mec(int change,int memo[]){
	memo[0]=0;
	for(int i=1;i<MAN;i++){
		memo[i]=-1;
	}
	for(int i=0;i<change;i++){
		for(int j=0;j<num;j++){
			if(i>=coins[j]){
				int tmp
			}
		}
	}
}