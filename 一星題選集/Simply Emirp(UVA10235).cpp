/*
½d¨Ò¿é¤J #1
17
18
19
179
199
131
½d¨Ò¿é¥X #1
17 is emirp.
18 is not prime.
19 is prime.
179 is emirp.
199 is emirp.
131 is prime.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, rev_N;
    bool flag1, flag2;
    int i;

    while(scanf("%d", &N) != EOF){

        printf("%d ", N);

        flag1 = true;
        flag2 = true;
        rev_N = 0;

        for(i = 2; i <= sqrt((double)N); i++){
            if(N % i == 0){
                flag1 = false;
                break;
            }
        }

        if(flag1){

            int temp = N;

            while(temp > 0){
                rev_N = rev_N * 10 + temp % 10;
                temp = temp / 10;
            }

            if(rev_N == N){
                flag2 = false;
            }
            else{
                for(i = 2; i <= sqrt((double)rev_N); i++){
                    if(rev_N % i == 0){
                        flag2 = false;
                        break;
                    }
                }
            }
        }

        if(flag1 && flag2){
            printf("is emirp.\n");
        }
        else if(flag1){
            printf("is prime.\n");
        }
        else{
            printf("is not prime.\n");
        }
    }

    return 0;
}
