#include<bits/stdc++.h>

using namespace std;
const int N =2510;
// int dp[10010];

// int func(int amount, vector<int>& coins){
//    if(amount==0) return 0;
//    if(dp[amount] !=-1) return dp[amount];
//    int ans=INT_MAX;
//    for(int coin: coins){
// 	   if(amount-coin>=0)
// 		ans =min(ans +0LL,func(amount-coin , coins)+1LL);

// 	}
// 	return dp[amount]=ans;

	
	
// }
int dp[310][10010];

int func(int ind, int amount, vector<int>& coins){
   if(amount==0) return 1;
   if(ind<0) return 0;
   if(dp[ind][amount] !=-1) return dp[ind][amount];
   int ways=0;
   for(int coin_amount=0 ; coin_amount <=amount; coin_amount +=coins[ind])
	   if(amount-coin>=)
		ways =func(ind-1,amount-coin_amount , coins);

	
	return dp[ind][amount]=ways;

	
	
}



int coinChange(vector<int>& coins, int amount){
	// int ans= func(amount,coins);
	// return ans==INT_MAX?-1:ans;
	 // return func(coins.size()-1,amount,coins);
	

}


int main(){
	memset(dp,-1,sizeof(dp));
	vector<int> coins={1,2,5};
	cout<<coinChange(coins,11);

}