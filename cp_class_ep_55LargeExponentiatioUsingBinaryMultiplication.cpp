#include<bits/stdc++.h>
// here we a,b and M value increase what would be effect of this
using namespace std;

const long long int M=1e9+7;



//a <=10^18 so we can a %=M;

//2^1024

// if M large M=10^18
int binMultply(long long a, long long b){
    int ans=0;
    while(b){
        if(b&1)
        {
            ans =(ans+a)%M;

        }
        b >>=1;
        a =(a+a)%M;

    }
    return ans;

}



int binExIter(long long  a, long long  b){
    //a %=M; this is if a is large
    int ans=1;
    while(b){
        if(b&1)
        {
            ans =binMultply(ans,a);

        }
        b >>=1;
        a =binMultply(a,a);

    }
    return ans;

}


// long^2(N) time complxity for two binMultply
int main(){
    int a=2,b=13;

    cout<<binExIter(a,b)<<endl;

}

