/*
Sample Input
3
5
A
Sample Output
4
6
11
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string s;
    int val[62];
    for(int i=0;i<62;i++){
        val[i]=i;
    }
    string dic="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    while(getline(cin,s)){
    int sum=0;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<62;j++){
            if(s[i]==dic[j]){
               sum=val[j]+1;}
        }
    }
     if(sum==62) {
        cout<<"such number is impossible!"<<endl;
        break;}
    cout<<sum<<endl;
    }
    return 0;
}
