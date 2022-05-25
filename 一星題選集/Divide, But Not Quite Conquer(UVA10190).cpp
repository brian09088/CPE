/*
½d¨Ò¿é¤J #1
125 5
30 3
80 2
81 3
½d¨Ò¿é¥X #1
125 25 5 1
Boring!
Boring!
81 27 9 3 1
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b;
    while(cin>>a>>b){
        long long int m=b;
        for(int i=1;m<a && b>1;i++){
            m=pow(b,i);
        }
        if(m>a || b<=1){
            cout<<"Boring!"<<endl;
        }
        else{
            while(m>0){
                cout<<m;
                if(m!=1){
                    cout<<" ";
                }
                else{
                    cout<<endl;
                }
            m=m/b;
            }
        }
    }
    return 0;
}
