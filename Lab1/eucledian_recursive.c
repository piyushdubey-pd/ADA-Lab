#include <stdio.h>

int GCD(int m, int n){
    if(n>m){
        int t=n;
        n=m;
        m=t;
    }
    if(n==0)
    return m;
    else 
    return GCD(n, m%n);
}


int main(){
    int x,y;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&x,&y);
    printf("GCD of the numbers: %d",GCD(x,y));
    return 0;
}