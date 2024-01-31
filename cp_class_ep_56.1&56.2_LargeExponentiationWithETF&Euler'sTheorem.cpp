#include<bits/stdc++.h>
// here b value increase what would be effect of this
using namespace std;

const int M=1e9+7;
/*
co prime no only common factor between two number is only 1

ETF-- Eular totient function
if any no N-   1 to N ar maje joto no N ar shathe co prime ar count
    5 and this 4 no 1,2,3,4 is co prime
    fysign(N)=N*multiplication(1-1/p) p is N ar all prime factor
    //distint prime no multiplicition


Eular's theorem
a^b=a^b(mod fysign(n)) mod(n)
means a^b ke n dia mod korle ans hobe a^b(mod fysign(n))

// another theory
(a^b)%n=(a^b%pysign(n))%n

any prime no ETF value n-1 because or only nije hosse prime n(1-1/n)=n-1
so this rule is (a^b)%n=(a^b%(n-1))%n

b<=10^9
b<=10^18

here if so much large no cannot effect that because of  log(b) time loop exucute those is  small value
 but directly 10^18 thekhe boro value can not give because of b<<1 cannot use
*/
int binExIter(int a,long long b,int m){
    int ans=1;
    while(b>0){
        if(b&1)
        {
            ans =(ans*1LL*a)%m;

        }
        b >>=1;
        a =(a*1LL*a)%m;

    }
    return ans;





}



// Leetcode Superpow : https://leetcode.com/problems/super-pow/



int main(){
    //50^64^32 %M
    cout<<binExIter(50,binExIter(64,32,M-1),M)<<endl;
}

