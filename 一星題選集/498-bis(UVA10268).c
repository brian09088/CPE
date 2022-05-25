/*
½d¨Ò¿é¤J #1
7
1 -1
2
1 1 1
½d¨Ò¿é¥X #1
1
5
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,y,x;
    int a[50000];
    while(scanf("%d",&x)!=EOF){
        for(n=0;;n++){
            scanf("%d",&a[n]);
            if (getchar()=='\n'){
                break;
            }
        }
        y=a[0]*n;
        for(int i=1;i<n;i++){
            y=y*x+a[i]*(n-i);
        }
        printf("%d\n",y);
    }
    return 0;
}
