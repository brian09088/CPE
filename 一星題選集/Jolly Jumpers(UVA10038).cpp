/*
½d¨Ò¿é¤J #1
4 1 4 2 3
5 1 4 2 -1 6
½d¨Ò¿é¥X #1
Jolly
Not jolly
*/

#include <bits/stdc++.h>
using namespace std;

bool check;
int *data,n;
vector <int>a;

int main(){
    while(cin>>n){
        data=new int[n];
        a.clear();
        check=true;
    for(int i=0;i<n;i++){
        cin>>data[i];
    }

    for(int i=1;i<n;i++){
        a.push_back(abs(data[i]-data[i-1]));
        }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size()&&check;i++){
        if(a[i]!=i+1){
            check=false;
        }
    }
    if(check){cout<<"Jolly"<<endl;}
    else{cout<<"Not jolly"<<endl;}
    delete [] data;
    a.clear();}
   return 0;
}
