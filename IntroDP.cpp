// Approaching problems
// Top Down/ Bottom up
//Memoisation

//top down approach uses recursion generally this  fibbonacci is top down approach
// botom up approach uses tabular format
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dp[N];

// 0 1 1 2 3 5 8
//top down approacch
int fib(int n){// here parametter is state here is 1 state means 1 dimentional then
	  if(n==0) return 0;
	  if(n==1) return 1;
	  if(dp[n] !=-1) return dp[n];
      return dp[n]= fib(n-1)+fib(n-2);
}

int main(){
    memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;
	cout<<fib(n);

	// this is bottom up approach
  /* dp[0]=0;
   dp[1]=1;
   for(int i=2;i<=n;i++){
   	dp[i]=dp[i-1]+dp[i-2];
   }*/

}

// recurstion time complexity calculate how many fuction call and each function call time complexity
//here every every function 0(1) and fuction call hoitese every level a uporer level ar double

// means 1 +2+4+8+..... =2^n+1; means 2^n equal exponential 2^20 means 10^6 so ar beshi calculate korte parbo na
// so we use dp func call max n time complexity hobe 0(n)
