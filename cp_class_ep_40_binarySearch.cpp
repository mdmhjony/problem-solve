// list would be monotonic. means increasing or decresing

// predicate funcion -- f,f,f,f,t,t,t,t


// search space

#include<bits/stdc++.h>

using namespace std;


int main(){
//    int n;
//    cin>>n;
//    vector<int> v(n);
//    for(int i=0;i<n;i++){
//        cin>>v[i];
//    }
//
//    int findelement;
//    cin>>findelement;
//    int low=0,high=n-1;
//    int mid;
//    while(high-low>1){
//        int mid=(high+low)/2;
//        if(v[mid]<findelement){
//                low=mid+1;
//            }else{
//                high=mid;
//
//            }
//
//    }
//
//    if(v[low]==findelement){
//        cout<<low<<endl;
//    }
//    else if(v[high]==findelement){
//        cout<<high<<endl;
//    }
//

     int n;
     cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     int findElement;
     cin>>findElement;
     int low=0;
     int high=n-1;
     while(high-low>1){
        int mid=(high+low)/2;
        if(v[mid]<findElement){
            low=mid+1;
        }else{
            high=mid;
        }
     }

     if(v[low]==findElement) cout<<low<<endl;
     else if(v[high]==findElement) cout<<high<<endl;

}

