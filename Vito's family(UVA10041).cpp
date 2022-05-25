/*
sample input
2
2 2 4
3 2 4 6
sample output
2
4
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
int n,num,point,mid;
vector <int> line;
cin>>n;
for(int i=0;i<n;i++){
    cin>>num;
    mid=num/2;
    for(int k=0;k<num;k++){
        cin>>point;
        line.push_back(point);
        }
    int sum=0;
    sort(line.begin(),line.end());
    for(int i=0;i<num;i++){
        sum+=abs(line[i]-line[mid]);}
    cout<<sum<<endl;
    line.clear();
    }
    return 0;
}
