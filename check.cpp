#include<bits/stdc++.h>

using namespace std;
const int N=10;
int has[N][2];

int main(){
    has[0][1]=2;
    for(int i=0;i<2;i++){
        for(int j=0;j<N;j++){
          cout<<has[i][j]<<" ";
        }
        cout<<endl;
    }
}
