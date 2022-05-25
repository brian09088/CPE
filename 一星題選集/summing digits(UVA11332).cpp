/*½d¨Ò¿é¤J #1
2
11
47
1234567892
0
½d¨Ò¿é¥X #1
2
2
2
2*/
#include <bits/stdc++.h>
using namespace std;

int fun(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum<10){return sum;}
    else{return  fun(sum);}
}


int main(){
    int n;
    while(cin>>n){
        cout<<fun(n)<<endl;}
    return 0;
}
