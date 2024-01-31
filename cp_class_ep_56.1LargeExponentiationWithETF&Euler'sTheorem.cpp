#include<bits/stdc++.h>
// here b value increase what would be effect of this
using namespace std;

const int M=1e9+7;
/*
//co prime no only common factor between two number is only 1
b<=10^9
b<=10^18

here if so much large no cannot effect that because of  log(b) time loop exucute those is  small value
 but directly 10^18 thekhe boro value can not give because of b<<1 cannot use
*/
int binExIter(int a,long long b){
    int ans=1;
    while(b>0){
        if(b&1)
        {
            ans =(ans*1LL*a)%M;

        }
        b >>=1;
        a =(a*1LL*a)%M;

    }
    return ans;





}
int main(){
    int a=2,b=13;

    cout<<binExIter(a,b)<<endl;
}

