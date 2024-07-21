#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int coins[10]={0};
int memo[100]={0};
int num=0;
int mec(int change,int memo[]){
    if(change==0)return 0;
    if(change<0)return -1;
    int minN=10000;
    if(memo[change]!=0) return memo[change];
    for(int i=0;i<num;i++){
        if (change>=coins[i]){
            int tmp=1+mec(change-coins[i],memo);
            minN=min(minN,tmp);
        }
        memo[change]=minN;
    }
    return memo[change];
}
int main(){
    int k=0;
    int cnt=10;
    cin>>k;
    for(;;cnt--){
        cin>>coins[num++];
    }
    cout<<mec(k,memo);
}