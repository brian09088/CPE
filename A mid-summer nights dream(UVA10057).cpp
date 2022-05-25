/*
½d¨Ò¿é¤J #1
2
10
10
4
1
2
2
4
½d¨Ò¿é¥X #1
10 2 1
2 2 1
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    while(!cin.eof()){
        int n,mini,k;
        int a[100];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int num2=0,num3;
        sort(a,a+n);
        for(int i=0;i<n;i++){
             if(n%2==0){
                mini=a[n/2-1];
                num3=a[n/2]-a[n/2-1]+1;
             if(a[i]==mini){
                num2++;}
             }
        else if(n%2==1){
            mini=a[(n-1)/2];
            if(a[i]==mini){
                num2++;}
            }
            num3=1;
        }
        cout<<mini<<" "<<num2<<" "<<num3<<endl;
    }
    return 0;
}
