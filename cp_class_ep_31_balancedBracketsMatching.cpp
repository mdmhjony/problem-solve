// balance baracket parantesis problem

// link >>> https://www.hackerrank.com/challenges/balanced-brackets/problem

#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
unordered_map<char,int> s={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isBalanced(string s) {
    stack<char> s;
    for(char bracket)

}

int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}


