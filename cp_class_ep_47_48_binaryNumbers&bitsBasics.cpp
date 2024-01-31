#include<bits/stdc++.h>

using namespace std;

const int N=1e5+10;

void printBinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
// all odd no end bits always 1 and even no 0

//binary operation

// and(&),or(|),xor(^),not(!),left shift(<<), right shift(>>)

// xor normally if two same input so output will be zero

// 3 binary ---  11 left shift--110 end a akta zero add hoise

// left shift 2 would be 1100

// right shift 3 -- means 11 right shift
// ans is  1 end bit remove hoye jabe

// integer 32 bit means we can store 32 bits this datatype
// 4 bits no means 4 place - - - - every place we can store 1 number in choice (0 or 1) means 2*2*2*2 (2^4) means 16 number we can create(0 -15) means 4 bits maximum no 15 (2^4-1)
// 32 bits same 2^32-1 this no( is 32 ta 1 hobe this no)

//cout<<INT_MAX<<endl;


// 1<<0-1
// 1<<1-10
// 1<<2-100
// 1<<3-1000
// 1<<n- means 1 then n zero means 2^n; we normally 2^n find with 1 left shift if 1 left shift 2 thekhe 1 minus kori tahole all bits are set
// means 2^n-1 no all bits are all 1 bits exp--111,1111,11111 2^n bits-1 bits .

// so integer value 2^32-1

// int a=(1LL<<32)-1;// here (1<<32 is 33 bits)
//cout<<a<<endl;// here result -1 means overflow here unsigned and signed concept use

//int a=(1LL<<31)-1;// this is actual size integer
//cout<<a<<endl;


// when binary representation in signed int  first bit signed bit if zero first bit positive no if 1 negative no

// unsigned int only positive number so we doesn't need signed bit so it can use 32 bits

//unsigned int b=((1LL<<32)-1); // this no divided by 2 is same (1LL<<31)-1;
//cout<<b<<endl;



//Episod 48

// 10111011 least significant bit means right most bit we represent binary no right to left
// 76543210 bit 0 bits least significant bit(lsb) nth bit most significant bit(msb)

// set bit--1 count question commonly coming set bits
//unset bit--0 count question commonly coming unset bits

// any binary number it'h bits set or not

// example 5-101 1st bit set or not so we  we need only 1st bit set then do and
//      &    010 if result is zero so first bit is not set

// any binary result is non zero so we can call no is not set.


// check set or not

//printBinary(9);
int a=13;
//int i=0;
//if((a & (1<<i)) !=0){//check set or not
//    cout<<"set bit"<<endl;
//}else{
//    cout<<"not set bit"<<endl;
//}


// 1 number do bit set
//printBinary(a|(1<<1));

//Tilda operation (~) it convert any no inverse that can
printBinary(a);
//printBinary((~(1<<0)|a));

// unset 0 bits
//printBinary(~(1<<0)&a);

// for it'h bit
//printBinary(~(1<<i)&a);
//printBinary((~(1<<i)|a));

// bit toggle means 1 convert 0 , 0 convert 1; using xor

//printBinary(a^(1<<2));

int cou=0;
for(int i=31;i>=0;i--){
    if( (a &(1<<i))!=0){
      cou++;
      //cout<<cou<<endl;
   }
}

cout<<cou<<endl;

// if long no we need
//cout<<__builtin_popcountll(a)<<endl;
cout<<__builtin_popcount(a);// building function same set bit count above loop







}
