#include<bits/stdc++.h>

using namespace std;

int main(){

    int a=4,b=6;
    // two same no xor zero 101^101 =000
    // 000 101 xor 101
    // x^x=0
    // x^0=x


    // swap value;
    // xor are associative
    //x^y^z = y^z^x = z^y^x
    a=a^b;
    b=b^a;
    // b=b^(a^b)//here b^b^a = a
    a=a^b;//a=a^b^a=b


    /* Given array a of n integers. All integers are present in even count except one.
    find that one integer which has odd count int O(n) time complexity and O(1) space;
    N<10^5
    a[i]<10^5
    interview  question
    */


    int n;
    cin>>n;s
    int x;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        ans ^=x;
    }
    cout<<ans<<endl;




}
