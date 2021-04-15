#include <stdio.h>
int main(){
    int x,y;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&x,&y);
    if(x<y){
    int t=x;
    x=y;
    y=t;
    }
    while(y!=0){
        int t=x%y;
        x=y;
        y=t;
    }
    printf("GCD of the numbers: %d",x);
    return 0;
}