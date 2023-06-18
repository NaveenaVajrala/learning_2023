#include<stdio.h>
void revArr(int *arr,int size){
    int revarr[size];
    int i,j=0;
    for(i=size-1;i>=0;i--){
        revarr[j]=arr[i];
        j++;
    }
    printf("Reversed array is:");
    for(i=0;i<size;i++){
        printf("%d\t",revarr[i]);
    }
    printf("\n");
}
int main(){
    int size;
    printf("enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements into array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    revArr(arr,size);
    return 0;
}