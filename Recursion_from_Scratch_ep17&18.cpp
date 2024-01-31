#include<bits/stdc++.h>

using namespace std;
void func(int n){//recursion internally implementation by stack;
   if(n==0) return;
   func(n-1); // int recurstion allways need address previous call
   cout<<n<<endl;

}

int fact(int n){
    if(n==0) return 1;
    return fact(n-1) * n;
}

//sum of array
// sum(n,a) -> sum of elements in a uptil n index;

int sum(int n, int a[] ){
    if(n<0) return 0;
    return sum(n-1,a)+ a[n];



}



int digitSum(int n){
    if(n<=0) return 0;
    return n%10+digitSum(n/10);


}


int main(){
    //func(5);

    int n;
    cin>>n;
    //int a[n];
//    for(int i=0;i<n;i++){
//        cin>> a[i];
//    }
    //cout<<sum(n-1,a);
    cout<<digitSum(n)<<endl;


}

//number of recursive function calls
//what is complexity of each function
