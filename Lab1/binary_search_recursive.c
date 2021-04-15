#include <stdio.h>

int arr[10];

int binary_search(int lb, int ub, int n){
    if(lb>ub)
    return -1;
    
    int p=(lb+ub)/2;
    if(arr[p]==n)
    return p;
    if(arr[p]>n)
    return binary_search(lb, p, n);
    if(arr[p]<n)
    return binary_search(p, ub, n);
}
int main(){
    int n;
    printf("Enter array elements in sorted order\n");
    for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);
    printf("Enter key element: ");
    scanf("%d",&n);
    int z=binary_search(0,9,n);
    if(z==-1)
    printf("Search unsuccessful\n");
    else
    printf("Element found at %d\n",z+1);
}