#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int main(){
	int n,p,res=1;
	cin>>n>>p;

    while(p>0){
      if(p%2==0){
      	n *=n;
      	p /=2;
      }
      else{
      	res *=n;
        p -=1;
      }

    }
   // cout<<"hello"<<endl;

   cout<<res<<endl;

}