#include<bits/stdc++.h>
//problem---> https://www.spoj.com/problems/AGGRCOW/
using namespace std;
// stall 1e5  cow 1e5;

int n,cows;
const int N=1e5+10;

vector<int> v(N);
//int cou=0;

bool canPlaceCows(int minDist){
//    cou++;
//    cout<<"count:"<<cou<<endl;
    int lastpos=-1;
    int cows_ct=cows;
    for(int i=0;i<n;i++){
           if(v[i] - lastpos >= minDist || lastpos == -1){
                cows_ct--;
                lastpos= v[i];
            }

            if(cows_ct==0) break;
        }
        return cows_ct==0;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>cows;

        for(int i=0;i<n;i++){
        cin>>v[i];

    }

//    for(int i=0;i<n;i++){
//        cout<<v[i]<<" ";
//
//    }

    int low=0,high=1e9,mid;
    while(high-low>1){
        mid=(high+low)/2;
        if(canPlaceCows(mid)){
            low=mid;
            //cout<<"low:"<<low<<endl;
        }else{
            high=mid-1;
            //cout<<"high:"<<high<<endl;
        }
    }
    if(canPlaceCows(high))cout<<high<<endl;
    else cout<<low<<endl;



    }

}
