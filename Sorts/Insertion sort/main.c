#include <stdio.h>
void main(){
    int size;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    int a[size];
     for (int i=0;i<size;i++){
        printf("Enter list of numbers that you want to sort: %d: ", i+1);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<size;i++){
        printf("%d \n",a[i]);
    }
    for(int i=1;i<size;i++){
        int temp=a[i];
        int j =i-1;
        for (j=i-1;j>=0 && a[j]>temp;j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    for (int i=0;i<size;i++){
        printf("a[%d]= %d \n",i+1,a[i]);
    }
}
