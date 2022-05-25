/*
½d¨Ò¿é¤J #1
1
7 10 4
abbbaaaaaa
abbbaaaaaa
abbbaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaccaaaaaa
aaccaaaaaa
1 2
2 4
4 6
5 2
½d¨Ò¿é¥X #1
7 10 4
3
1
5
1
*/
#include <bits/stdc++.h>
using namespace std;
const int maxn=100;
int n,num;
int a,b,c,x,y,z;
char s;
int direct[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
string arr[maxn];

int invalid(int x,int y){
    if(x>=0 && x<=a && y>=0 && y<=b)return 1;
    return 0;
}

int square(int x,int y){
    int d=1;
    int root=arr[x][y];
    int booling=1;

    while(booling){
    d=d+2;
    int nowx=x-d/2;
    int nowy=y-d/2;
    for(int i=0;i<4;i++){
        for(int j=0;j<d-1;j++){
            nowx+=direct[i][0];
            nowy+=direct[i][1];
            if(!invalid(nowx,nowy) && arr[nowx][nowy]!=root){
                booling=0;
                break;}
            }
            if(booling==0){break;}
        }
    }
    return d-2;
}


int main(){

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>arr[i];
            }
        }
        cout<<a<<" "<<b<<""<<c<<endl;
        for(int i=0;i<c;i++){
            cin>>y>>z;
            cout<<square(y,z)<<endl;}
    }
    return 0;
}
