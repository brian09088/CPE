/*
½d¨Ò¿é¤J #1
pretty
women
walking
down
the
street
½d¨Ò¿é¥X #1
e
nw
et
*/
#include <bits/stdc++.h>
using namespace std;

string a,b;
vector <char>output;
bool compare(char a,char b){
    return a<b;
}

int main(){

    while(getline(cin,a),getline(cin,b)){
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(b[j]==a[i]){
                    output.push_back(a[i]);
                    a[i]='1';
                    b[j]='1';
                }
            }
        }
    sort(output.begin(),output.end(),compare);
    for(int i=0;i<output.size();i++){
        cout<<output[i];
        }
    cout<<endl;
    output.clear();
    }
    return 0;
}
