#include<bits/stdc++.h>


using namespace std;
//const int N=1e5+10;
const int N=1e3+10;
//int a[N];
int ar[N][N];

long long pf[N][N];

//int pf[N];



// using negative no in Hash in cp 2 ways. 1 is STL--map- unorder Map another is
//A=[-4,2,1,-3,-4,-6]
// we can add highest negetive value in array every element above this case add +6

//so it would be A'=[2,8,7,3,2,0]
// hash(A')
// 0 1 2 3 4 5 6 7 8 // index
// | | | | | | | | |
// 1 0 2 1 0 0 0 1 1 //count if search so we can add +6 in index and find acject result.

/*
five array a of N integers. Given Q queries
and in each query given L and R print sum of
array elements from index L to R (L,R included)

Constraints
1<=N <=10^5
1<= a[i] <=10^9
1<=Q <=10^5
1<=L,R <=N
*/



// used   1 based array in cp.if given l to R range also in prefix sum used 1 base as a result it ould be easy in implementation
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
//       cin>>a[i];
//       pf[i]=pf[i-1]+a[i];
        for(int j=1;j<=n;j++){
                cin>>ar[i][j];
                pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
            }

    }
    int q;
    cin>>q;
    while(q--){
//        int l,r;
//        cin>>l>>r;
//        long long sum=0;
//        for(int i=l;i<=r;i++){
//            sum +=a[i];


        //}
        //cout<<pf[r]-pf[l-1]<<endl;
        int a,b,c,d;
        cin>>a>>b>>c>>d;

//        long long sum=0;
//        for(int i=a;i<=c;i++){
//            for(int j=b;j<=d;j++){
//                sum +=ar[i][j];
//            }
//        }
//        cout<<sum<<endl;
          cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;



    }

}


/*
Given 2d array a of N*N integers. Given Q
queries and in each query given a, b,c and d
print sum of rectangle represented by (a,b) as
top left point and (c,d) as top bottom right point


 Constraints

1<=N <=10^3
1<= a[i][j] <=10^9
1<=Q <=10^5
1<=a,b,c,d <=N
*/



