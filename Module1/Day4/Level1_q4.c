#include<stdio.h>
int diff_EvenandOdd(int *arr,int size){
    int evn_sum=0;
    int odd_sum=0;
    int diff;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evn_sum+=arr[i];
        }
        else{
            odd_sum+=arr[i];
        }
    }
    diff=(evn_sum>odd_sum)?(evn_sum-odd_sum):(odd_sum-evn_sum);
    return diff;
}
int main(){
    int size;
    printf("enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements into array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int result=diff_EvenandOdd(arr,size);
    printf("Difference between even and odd elements of an array is:%d\n",result);
    return 0;
}