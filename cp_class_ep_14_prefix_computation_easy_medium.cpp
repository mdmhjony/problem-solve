#include<bits/stdc++.h>
using namespace std;

#define pb push_back

typedef  long long  ll;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int backwordGc[n+10];
        int forwardGc[n+10];
        backwordGc[n+1]=forwardGc[0]=0;
        int a[n+10];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            forwardGc[i]=__gcd(forwardGc[i-1],a[i]);
        }

        for(int i=n;i>=1;i--){
            backwordGc[i]=__gcd(backwordGc[i+1],a[i]);
        }


        while(q--){
            int l,r;
            cin>>l>>r;
           // int gc=0;
            cout<<__gcd(forwardGc[l-1],backwordGc[r+1]);



//           for(int i=1;i<=l-1;i++){
//              gc=__gcd(gc,a[i]);
//              cout<<a[i]<<" of first loop gcd"<<gc<<endl;
//           }
//           for(int i=r+1;i<=n;i++){
//              gc=__gcd(gc,a[i]);
//              cout<<a[i]<<" of second loop gcd"<<gc<<endl;
//           }
//           cout<<" final gcd "<<gc<<endl;



        }
    }


}


//
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long int ll;
//typedef unsigned long long ull;
//#define pb push_back
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//
//
//    int n,q;
//    cin>>n>>q;
//    int a[n+1];
//    for(int i=1;i<=n;i++){
//        cin>>a[i];
//    }
//    int pre[n+1];
//    pre[1]=a[1];
//    for(int i=2;i<=n;i++){
//        pre[i]=__gcd(pre[i-1],a[i]);
//
//
//    }
//
//    int pre1[n+1];
//    pre1[n]=a[n];
//    for(int i=n-1;i>=1;i--){
//        pre1[i]=__gcd(pre1[i+1],a[i]);
//    }
//
//
//
//    for(int i=0;i<q;i++){
//        int l,r;
//        cin>>l>>r;
//        if(l==1 || r==n){
//           if(l==1) cout<<pre1[r+1]<<endl;
//           else if(r==n) cout<<pre[l-1]<<endl;
//           else{
//               cout<<pre[1]<<endl;
//           }
//        }
//        else{
//            int ans=__gcd(pre[l-1],pre1[r+1]);
//             cout<<ans<<endl;
//
//        }
//
//
//
//    }
//
//    }
//
//
//}
