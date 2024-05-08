#include<bits/stdc++.h>
using namespace std;

const int N=1e5+9;
int h[N];
int dp[N];
int frogCost(int n){
    
    if(n==0) return 0;
    //1 way
    if(dp[n] !=-1) return dp[n];
    int cost =INT_MAX;
    cost=min(cost,frogCost(n-1)+abs(h[n]-h[n-1]));
    if(n>1) cost=min(cost,frogCost(n-2)+abs(h[n]-h[n-2]));
   
    // //if k th way use loop
    // for(int i=1;i<=k;i++){
    // 	if(n-i>=0)
    // 	 cost=min(cost,frogCost(n-i)+abs(h[n]-h[n-i]));
    // }
      return dp[n]=cost;

}


int main(){
	memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>h[i];
	}

	cout<<frogCost(n-1);
}