/*
Sample Input
2
10 8 12 13 15 13 13 16 9
11 18 24 21 23 23 23 13 15
17 33 21 23 27 26 27 19 4
22 18 30 30 24 16 26 21 21
5
98329921
12345
800348
14
873645
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1
4
0
1
10
100
Sample Output
Case 1:
Cheapest base(s) for number 98329921: 24
Cheapest base(s) for number 12345: 13 31
Cheapest base(s) for number 800348: 31
Cheapest base(s) for number 14: 13
Cheapest base(s) for number 873645: 22
Case 2:
Cheapest base(s) for number 0: 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36
Cheapest base(s) for number 1: 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36
Cheapest base(s) for number 10: 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
26 27 28 29 30 31 32 33 34 35 36
Cheapest base(s) for number 100: 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
26 27 28 29 30 31 32 33 34 35 36
*/
#include <bits/stdc++.h>
using namespace std;

long long int calculate(int cost[],int num,int base){
    vector<int> arr;
    int totalcost=0;
    while(num>0){
        arr.push_back(num%base);
        num=num/base;
    }
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        totalcost=totalcost+cost[arr[i]];
    }
    return totalcost;
}


int main(){

    int n,samplenum;
    int cost[36];

    cin>>n;
    for(int i=0;i<n;i++){
        if(i!=0){cout<<endl;}
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0;j<36;j++){
            cin>>cost[j];}

        cin>>samplenum;
        long long int samples[samplenum];

        for(int j=0;j<samplenum;j++){
            cin>>samples[j];

        int mincost=0;
        vector <int> allcost;

        for(int k=2;k<=36;k++){
            long long int tmp=calculate(cost,samples[j],k);
            allcost.push_back(tmp);
            if(mincost>=tmp || mincost==0)mincost=tmp;
        }
        cout<<"Cheapest base(s) for number "<<samples[j]<<":";
        for(int k=0;k<allcost.size();k++){
            if(allcost[k]==mincost){cout<<" "<<(k+2);}
            }
            cout<<endl;
        }
    }
    return 0;
}
