#include<bits/stdc++.h>

using namespace std;

void printBinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
//    for(int i=0;i<8;i++){
//        printBinary(i);
//    }
//    int a;
//    cin>>a;
//    if(1 & a !=0){ // this is faster then n%2 and divided operation
//            //so every where need 2 division and multiplication we use this
//            cout<<"number is odd"<<endl;
//    }else cout<<"number is Even"<<endl;
//
//
//
//    int n=5;
//    cout<<(n>>1)<<endl;//divided by 2 integer division
//    cout<<(n<<1)<<endl;//multiple by 2 integer multiple



    // uppercase and lowercase converstion


//    for(char c='A';c<='Z';c++){
//        cout<<c<<endl;
//        printBinary(int(c));
//    }
//    for(char c='a';c<='z';c++){
//        cout<<c<<endl;
//        printBinary(int(c));
//    }

    // here we can see every upper and lower case letter binary 5 no bit in lower case 1 and upper case letter is 1; like small c 00001100011 capital C  00001000011
    // so if we unset or set vice-versa so it exchange

//    char c='A'| (1<<5);//upper to lower
//    cout<<c<<endl;
//    char d ='a' & ~(1<<5);//lower to upper
//    cout<<d<<endl;
//
//    //(1<<5) sky value of space so we can or operation space any character
//    cout<<char('C' | ' ')<<endl;// upper to lower
//
//    //00001100011 small c
//    //11111011111 or operation
//    //00001011111 &operation we need this no for convert it uppercase letter is _ sky value
//    printBinary('_');
//    cout<<char('C' & '_')<<endl;// lower to upper
//


      //clear LSB ticks

      // normal is by loop we can unset

      // another is single operation
      //0000001110111 here we unset least 3 bit so we need
      //1111111111000 & operation so this no create by
      //inverse of this below no
      //0000000000111 this no find below no
      //0000000001000-1
//      int a=59;
//      int i=4;// 0 to 4 means 5 bit
//
//      int b= a & (~((1<<(i+1))-1));
//      cout<<b<<endl;
//      printBinary(a);
//      printBinary(b);


      //clear MSB

      //001100011
      //000011111
      //000100000-1

//      int d=59;
//      int j=3;// 0 to 4 means 5 bit
//
//      int e= d & (1<<(j+1))-1;
//      cout<<e<<endl;
//      printBinary(d);
//      printBinary(e);
//


       // check power of 2
       //0000001000---n
       //0000000111--n-1 doing & so it would be zero so it n would be power of 2

       int n=16;
       printBinary(n);
       int k =(n&(n-1));
       printBinary(k);
       if(n&(n-1)){
        cout<<"not power of 2"<<endl;
       }else cout<<"power of 2"<<endl;







}

