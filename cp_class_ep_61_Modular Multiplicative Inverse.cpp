#include<bits/stdc++.h>

using namespace std;
const int M =1e9+7;

/*

(A/b) %M=(a*b^-1)%M=((a%M) * (b^-1)%M)%M

(b^-1)%M --MMI of B

if we know A*B=1 B is Multiplicative inverse of A
    Here (A*B)%M =1  means (A%M *B%M) %M =1 so B is modular multiplicative inverse of A
    so 1<= B < M-1

    loop b=1-M then check (A*B)%M=1  so inverse find time o(n)

    // every no ar multiplicative inverse exist kore nah

    //  MMI define hoi A and M ai doita opor depend kore  means when A and M are co prime so is can find MMI


    // co prime means to no GCD(A,M)=1;

    // optimaize

    format theorem =( A^m-1  three - 1 mod(M) ) means A^m-1 %M =1


    // congrancy of number o bole here
     A is not multiple of M and M is prime


     A^M-2 --- A^-1 mod(M) both side a A^-1 diye multiply format theorem  a
     means  A^M-2 %M = A^-1

     A^M-2 %M this calculte by binary expenetiation


     if M non prime MMI ase Extended Euclid Algorithm thekhe heacker rank article basic number theory -1 part 2

*/
int binExp(int a,int b,int m){
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


// There are N children and K toffees. k<N
//count the number of ways to distribute toffees among N students such that each student get 1 toffee only
// N <10^6,K<n<10^6
// quesry 10^5
// result would NcK combination

const int N=1e6+10;
int fact[N];

int main(){

    //cout<<binExp(2,M-2,M)<<endl;


    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*1LL*i)%M;
    }

    int q;
     cin>>q;
     while(q--){
        int n,k;
        cin>>n>>k;
        int ans=fact[n];
        int den=(fact[n-k]*1LL*fact[k])%M;
        ans=ans*binExp(den,M-2,M);
        cout<<ans<<endl;
     }
}
