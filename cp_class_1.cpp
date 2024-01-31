#include<bits/stdc++.h>

using namespace std;


void prob1(int a[],int n){
    if(n<0)return;

    cout<<a[n]<<" ";
    prob1(a,n-1);
}

void prob2(int a[],int i,int j){
    if(i>j)return;
    cout<<a[i]<<" "<<a[j]<<endl;
    prob2(a,i+1,j-1);
}

int prob3(int a[],int i,int j,int n){
   if(j==n)return i;
   if(a[j]%2==0){
    a[i] = a[j];
    i++;
    //cout<<i<<endl;
   }
   prob3(a,i,j+1,n);
}

void prob4(int i,int n){
   if(i==n)return;
   if(i==0){
     cout<<1;
   }else if(i==1){
     cout<<"+x";
   }else{
       cout<<"+x^"<<i;
   }
   prob4(i+1,n);
}

int prob5(int x,int n,int i,int ans){
   if(i==n)return ans;
   if(i==0)ans+=1;
   else{
     ans+=pow(x,i);

   }
   prob5(x,n,i+1,ans);
}

int prob11(int a[],int n,int mx){
    if(n<0)return mx;
    if(a[n]>mx)mx = a[n];
    prob11(a,n-1,mx);
}

int prob12(int a[],int n,int mx,int prev){
    if(n<0)return prev;
    if(a[n]>mx){
            mx = a[n];}
    if(prev>a[i] && prev==mx){
        prev = a[i];
    }
    prob12(a,n-1,mx,prev);
}

int main(){
   int x,n;
   cin>>n;
   int a[n];

  for(int i=0;i<n;i++){
    cin>>a[i];
  }
   //int sz = prob3(a,0,0,n);
   //for(int i=0;i<sz;i++){
    //cout<<a[i]<<" ";
   //}

   int val = prob12(a,n-1,0,0);
  // cout<<val<<endl;
   cout<<val<<endl;
}
