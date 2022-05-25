/*
½d¨Ò¿é¤J #1
4 4
*...
....
.*..
....
3 5
**...
.....
.*...
0 0
½d¨Ò¿é¥X #1
Field #1:
*100
2210
1*10
1110

Field #2:
**100
33200
1*100
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a,b;
    int n=0;
    char square;
    while(cin>>a>>b)
    {
        if(a==0&&b==0){break;}
        getchar();
        if(n)cout<<endl;
        int ans[100][100]={0};
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                square=getchar();
                if(square=='*')
                {
                    ans[i][j]=-100;
                    for(int x=-1;x<=1;x++){
                        for(int y=-1;y<=1;y++){
                            ans[i+x][j+y]++;
                        }
                    }
                }
            }
            getchar();
        }
        cout<<"Field #"<< ++n <<":"<<endl;

        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                if(ans[i][j]<0){cout<<"*";}
                else {cout<<ans[i][j];}
            }
            cout<<endl;
        }
    }
    return 0;
}
