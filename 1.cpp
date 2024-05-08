#include<bits/stdc++.h>

int N=1e6+1;


using namespace std;


int solve(int arr[], int size){
  int maxsum=0;
  int cursum=0;
  for(int i=0;i<size;i++){
  	cursum+=arr[i];
  	if( cursum < 0 ){
  		cursum=0;
  	}

  	if(cursum > maxsum) maxsum=cursum;

  }
  return maxsum;


}

int main(){
	int t;
	cin>>t;
	while(t--){
	  int n;
	  cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
      	cin>>arr[i];
      }
     cout<<solve(arr, n);
	}
	
}
