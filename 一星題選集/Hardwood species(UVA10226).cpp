/*
範例輸入 #1
2

Red Alder
Ash
Aspen
Basswood
Ash
Beech
Yellow Birch
Ash
Cherry
Cottonwood
Ash
Cypress
Red Elm
Gum
Hackberry
White Oak
Hickory
Pecan
Hard Maple
White Oak
Soft Maple
Red Oak
Red Oak
White Oak
Poplan
Sassafras
Sycamore
Black Walnut
Willow

Red Alder
Ash
Ash
Aspen
範例輸出 #1
Ash 13.7931
Aspen 3.4483
Basswood 3.4483
Beech 3.4483
Black Walnut 3.4483
Cherry 3.4483
Cottonwood 3.4483
Cypress 3.4483
Gum 3.4483
Hackberry 3.4483
Hard Maple 3.4483
Hickory 3.4483
Pecan 3.4483
Poplan 3.4483
Red Alder 3.4483
Red Elm 3.4483
Red Oak 6.8966
Sassafras 3.4483
Soft Maple 3.4483
Sycamore 3.4483
White Oak 10.3448
Willow 3.4483
Yellow Birch 3.4483

Ash 50.0000
Aspen 25.0000
Red Alder 25.0000
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    bool flag = false;
    string name;

    cin >> n >> ws;
    // 這幾種方法都行，濾掉多餘換行
    // cin.get();
    // cin.ignore();
    // getline(cin, name);

    while(n--){

        if(flag){
            cout << "\n";
        }

        flag = true;
        double sum = 0;
        map<string, int> mp;

        while(getline(cin, name) && name != ""){
            mp[name]++;
            sum++;
        }

        for (auto i: mp){
            cout << i.first << " " << fixed << setprecision(4) << (i.second / sum) * 100 << "\n";
        }
    }

    return 0;
}
