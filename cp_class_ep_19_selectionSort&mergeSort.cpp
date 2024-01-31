#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
#define pb push_back
const int N=1e5+10;

int a[N];

void merge(int l, int r, int mid){
    int l_s=mid-l+1;// here i couldnot underso0od
    int l_arr[l_s+1];
    int r_s=r-mid; //here i couldnot understood
    int r_arr[r_s+1];
    for(int i=0;i<l_s;i++){
        l_arr[i]=a[i+l];
    }

    for(int i=0 ;i<r_s;i++){
        r_arr[i]=a[mid+1+i];
    }
    l_arr[l_s]=r_arr[r_s]=INT_MAX;

    int l_count =0, r_count=0;

    for(int i=l;i<=r;i++){
          if(l_arr[l_count] <= r_arr[r_count]){
            a[i]=l_arr[l_count];
            l_count++;

          }
          else{
             a[i]=r_arr[r_count];
             r_count++;
          }

     }
}

void mergeSort(int l, int r){
    if(l==r) return; 
    int mid=(l+r)/2;
    //cout<<"mid: "<<mid<<endl;
    mergeSort(l,mid);
    mergeSort(mid+1,r);
    merge(l,r,mid);
}




int main(){
    int n;
    cin>>n;
//    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
//    for(int i=0;i<n;i++){
//        int minindex=i;
//        for(int j=i+1;j<n;j++){
//            if(a[j]<a[minindex]){
//                minindex=j;
//            }
//           swap(a[i],a[minindex]);
//        }
//    }




    mergeSort(0,n-1);
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }

}




