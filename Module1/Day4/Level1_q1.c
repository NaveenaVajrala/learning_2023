#include<stdio.h>
void sum_avg_Arr(int *arr,int size){
    int sum;
    float avg;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    avg=sum/size;
    printf("sum of array : %d\n",sum);
    printf("Avg of array : %.2f\n",avg);
}
int main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements into array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    sum_avg_Arr(arr,size);

    return 0;
}