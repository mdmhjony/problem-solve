#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
#define pb push_back
const int N=1e5+10;
int hsh[N][26];

int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<26;i++){
           for(int j=1;j<N;j++){
            hsh[i][j]=0;
        }
    }
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            hsh[i+1][s[i]-'a']++;//every column is every letter index value count.26 column
        }
        for(int i=0;i<26;i++){
                for(int j=1;j<=n;j++){
                    hsh[j][i] +=hsh[j-1][i];
                }
        }

        while(q--){
           int l,r;
           cin>>l>>r;

//           int has[26]={0};
//           //cout<<has[0]<<endl;
//           l--,r--;
//           for(int i=l;i<=r;i++){-
//                has[s[i]-'a']++;
//           }
//           int oddcount=0;
//           for(int i=0;i<26;i++){
//              if(has[i]%2 !=0)oddcount++;
//           }
//           if(oddcount>1)cout<<"no"<<endl;
//           else cout<<"yes"<<endl;
            int oddct=0;
            for(int i=0;i<26;i++){
                    int charCt =hsh[r][i]-hsh[l-1][i];
                    if(charCt%2!=0)oddct++;

            }
            if(oddct>1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;


        }
    }
}


