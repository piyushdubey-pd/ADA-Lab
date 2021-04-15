#include <stdio.h>
int arr[10];

int lsearch(int n, int s){
    if(s==-1)
    return s;

    if(arr[s]==n)
    return s;
    return lsearch(n,s-1);
} 

int main(){
    int n;
    printf("Enter values in array: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter key element: ");
    scanf("%d",&n);
    int z=lsearch(n, 9);
    if(z==-1)
    printf("Search unsuccesful\n");
    else
    printf("Element found at posititon %d\n",z+1);
}