/*½d¨Ò¿é¤J #1
23764
45897458973958
½d¨Ò¿é¥X #1
   1. 23 hajar 7 shata 64
   2. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
   */
#include <bits/stdc++.h>
using namespace std;
void fun(long long int num){
    if(num>=10000000){
        fun(num/10000000);
        cout<<" kuti";
        num=num%10000000;
    }
    if(num>=100000){
        fun(num/100000);
        cout<<" lakh";
        num=num%100000;
    }
    if(num>=1000){
        fun(num/1000);
        cout<<" hajar";
        num=num%1000;
    }
    if(num>=100){
        fun(num/100);
        cout<<" shata";
        num=num%100;}
    if(num)cout<<" "<<num;
}

int main(){
  long long int num;
  int counting=1;
  while(cin>>num){
        cout<<setw(4)<<counting<<".";
        if(num==0){
            cout<<" 0"<<endl;
            counting++;
        }
        else{
            fun(num);
            counting++;}
        cout<<endl;
    }
    return 0;
}
