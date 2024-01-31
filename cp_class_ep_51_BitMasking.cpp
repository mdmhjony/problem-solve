#include<bits/stdc++.h>
using namespace std;
//Bit+mask relation with set
// 2 sorted array intersection find o(N)
// here we any array represent by one banary no
//unsigned-32 bit
//long long -64 bit we can represent
// it is drawback/limit bitmasking

//blog with problem link---https://codeforces.com/blog/entry/73558

//worker prb

void printBinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
//    vector<int> v[n];
//    for(int i=0;i<n;i++){
//        int workDays;
//        cin>>workDays;
//        for(int j=0;j<workDays;j++){
//            int x;
//            cin>>x;
//            v[i].push_back(x);
//        }
//    }
//
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            //days[i],days[j]
//        }
//    }

    //o(n^2*30)


    vector<int> masks(n,0);
    for(int i=0;i<n;i++){
        int workDays;
        cin>>workDays;
        int mask=0;
        for(int j=0;j<workDays;j++){
            int x;
            cin>>x;
            mask=(mask|1<<x);
        }
        masks[i]=mask;
    }


//2
//4
//1 4 7 9
//6
//2 9 1 7 25 29

    for(int i=0;i<n;i++){
       cout<<masks[i]<<endl;
       printBinary(masks[i]);
    }

    int maxdays=0;
    int pOne=-1;
    int PTwo=-1;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int intersection= masks[i]&masks[j];
            int commonDays=__builtin_popcount(intersection);
            if(commonDays>maxdays){
                maxdays=commonDays;
                pOne=i;
                PTwo=j;
            }
        }
    }
    cout<<pOne<<" "<<PTwo<<" "<<maxdays<<endl;






}
