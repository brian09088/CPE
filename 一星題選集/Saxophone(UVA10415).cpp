/*
Sample Input
3
cdefgab
BAGFEDC
CbCaDCbCbCCbCbabCCbCbabae
Sample Output
0 1 1 1 0 0 1 1 1 1
1 1 1 1 0 0 1 1 1 0
1 8 10 2 0 0 2 2 1 0
*/
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int main()
{
   map<char,string> a;
   a[' ']="0000000000";
   a['c']= "0111001111";
   a['d']= "0111001110";
   a['e']= "0111001100";
   a['f']= "0111001000";
   a['g']= "0111000000";
   a['a']= "0110000000";
   a['b']= "0100000000";
   a['C']= "0010000000";
   a['D']= "1111001110";
   a['E']= "1111001100";
   a['F']= "1111001000";
   a['G']= "1111000000";
   a['A']= "1110000000";
   a['B']= "1100000000";
   int n;
   cin>>n;cin.ignore();
   while(n--){
     char c, last=' ';
     int ans[10]={};
     while(cin.get(c),c!=10){
        for(int k=0;k<10;k++){
           if (a[last][k]=='0' && a[c][k]=='1'){
              ans[k]++;}
        }
        last=c;
     }
     for(int k=0;k<10;k++){
        if(k){cout<<" ";}
        cout<<ans[k];
     }
     cout<<endl;
   }






 return 0;
}
