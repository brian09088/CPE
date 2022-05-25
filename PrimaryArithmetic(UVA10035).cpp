/*sample intput
123 456
555 555
123 594
0 0
sample output
No carry operation.
3 carry operations.
1 carry operation.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    while(cin>>num1>>num2){
        int carry=0;
        int counting=0;
        while(num1!=0 || num2!=0){
        carry+=(num1%10+num2%10)+carry;
        carry=carry/10;
        num1=num1/10;
        num2=num2/10;
        if(carry!=0){counting++;}
        }
    if(counting==0){cout<<"No carry operation."<<endl;}
    if(counting==1){cout<<"1 carry operation."<<endl;}
    else cout<<counting<< " carry operations."<<endl;
    }
    return 0;
}

