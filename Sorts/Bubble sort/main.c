#include <stdio.h>
void main(){
    int size,dec;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    int a[size];
    printf("Do you want to sort in ascending or descending order? \n for ascending order press '0'\n for descending order press '1' \n");
    scanf("%d",&dec);
     for (int i=0;i<size;i++){
        printf("Enter list of numbers that you want to sort: %d: ", i+1);
        scanf("%d",&a[i]);

    }
    for (int i=0;i<size;i++){
        printf("%d \t",a[i]);
    }
    printf("\n");
    if (dec==0){
        for(int i=0;i<size-1;i++){
            for (int j=0;j<size-i-1;j++){

                    if(a[j]>a[j+1]){
                        int temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                      }

            }

        }
    }
    else{
            for(int i=0;i<size-1;i++){
                for (int j=0;j<size-i-1;j++){

                        if(a[j]<a[j+1]){
                            int temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                          }

                }

            }
}


    for (int i=0;i<size;i++){
        printf("a[%d]= %d \n",i+1,a[i]);
    }

}
