/*
½d¨Ò¿é¤J #1
1
north
3
north
east
south
0
½d¨Ò¿é¥X #1
5
1
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin>>n){
    if(n==0)break;
    int mid=1,up=2,down=5,west=3,east=4,bottom=6;
    for(int i=0;i<n;i++){
        string direction;
        int buff;
        cin>>direction;
        if(direction=="north"){
            buff=mid;
            mid=down;
            down=bottom;
            bottom=up;
            up=buff;}
        if(direction=="south"){
            buff=mid;
            mid=up;
            up=bottom;
            bottom=down;
            down=buff;}
        if(direction=="east"){
            buff=mid;
            mid=west;
            west=bottom;
            bottom=east;
            east=buff;}
        if(direction=="west"){
            buff=mid;
            mid=east;
            east=bottom;
            bottom=west;
            west=buff;}
        }
        cout<<mid<<endl;
    }
return 0;
}
