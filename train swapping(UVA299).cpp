/*
½d¨Ò¿é¤J #1
3
3
1 3 2
4
4 3 2 1
2
2 1
½d¨Ò¿é¥X #1
Optimal train swapping takes 1 swaps.
Optimal train swapping takes 6 swaps.
Optimal train swapping takes 1 swaps.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        int a[num];
        for(int k=0;k<num;k++){
            int in;
            cin>>in;
            a[k]=in;
        }
        int s=0;
        for(int j=0;j<num;j++){
            for(int z=j+1;z<num;z++){
                if(a[j]>a[z]){
                swap(a[j],a[z]);
                s++;}
            }
        }
        cout<<"Optimal train swapping takes "<<s<<" swaps."<<endl;
    }
    return 0;
}
