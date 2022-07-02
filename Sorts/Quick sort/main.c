#include <stdio.h>
#define size 10
int arr[size];
void swap(int*x,int*y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    }
int set_pivot(int L,int R){
    int p_i=(L+R)/2;
    int pivot=arr[p_i];
    while(L<R){
        if(pivot>arr[R]){
            swap(&pivot,&arr[R]);
            p_i=R;
        }
        else{
            R--;
        }
        if(pivot<arr[L]){
            swap(&pivot,&arr[L]);
            p_i=L;
        }
         else{
            L++;
        }
        if(L==R){
            break;
        }
    }

    return p_i;
    }
void quickSort(int L,int R){

    if(L<R){
        int p_i=set_pivot(L,R);
        quickSort(L,p_i-1);
        quickSort(p_i+1,R);

    }}
 void main(){
 int L,R,i;
 L=0;
 R=size-1;
 for(i=0;i<size;i++){
        printf("Enter value at index %d : ",i);
        scanf("%d",&arr[i]);
     }
 quickSort(L,R);
 for(i=0;i<size;i++){
    printf("%d \t",arr[i]);
 }
 }
