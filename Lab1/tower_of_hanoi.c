#include <stdio.h>
#include <stdlib.h>

void towerofhanoi(int n, char from_rod, char to_rod, char temp_rod){
    if (n==1)
    {
        printf("\nMove disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerofhanoi(n-1, from_rod, temp_rod, to_rod);
    printf("\nMove disk %d from rod %c to rod %c",n, from_rod, to_rod);
    towerofhanoi(n-1,temp_rod,to_rod,from_rod);
}

int main(){
    int n;
    printf("Enter number of disks\n");
    scanf("%d",&n);
    towerofhanoi(n,'A','C','B');
    return 0;
}