#include<stdio.h>
void cu(int arr[], int n, int count){
    if(n==1){
        printf("the number of iterations to reach the base condition: %d ",count);
    }
    else{
    int h=n/2;
    int a[h];
    for(int i=0; i<h; i++){
        a[h]=arr[i];
    }
    count++;
    cu(a,h,count);
    }
}
int main()
{
    int n;
    printf("enter ar : ");
    scanf("%d",&n);
    int count=0;
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        
    }
    cu(arr,n,count);
    return 0;
}