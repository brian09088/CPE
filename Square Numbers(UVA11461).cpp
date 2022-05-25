/*
½d¨Ò¿é¤J #1
1 4
1 10
0 0
½d¨Ò¿é¥X #1
2
3
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,square;
    while(cin>>a>>b){
        int sum=0;
        if(a==0&&b==0){break;}
        for(int i=1;i<350;i++){
            square=i*i;
            if(a<=square && square<=b){
                sum++;}
            if(square>b){break;}
        }
    cout<<sum<<endl;
    }
    return 0;
}
