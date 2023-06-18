#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main(){
    int num;
    printf("Enter no.of elements:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter elements into array:");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr, num, sizeof(int), cmpfunc);
    printf("Minimum value of array is %d\n",arr[0]);
    printf("Minimum value of array is %d\n",arr[num-1]);
    return 0;
}