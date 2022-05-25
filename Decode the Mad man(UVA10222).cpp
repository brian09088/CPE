/*
½d¨Ò¿é¤J #1
k[r dyt i[o
p '[nt ]y[jyd.
½d¨Ò¿é¥X #1
how are you
i love program
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    const char keyboard[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    const int kblength=strlen(keyboard);
    while(getline(cin,s)){
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                cout<<" ";
            }
            else {
                for(int j=0;j<kblength;j++){
                    if(keyboard[j]==s[i]){
                        cout<<keyboard[j-2];
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
