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
        printf("%d \n",a[i]);
    }

    int si;
    for (int i=0;i<size-1;i++)
    {
        si=i;
        for (int j=i+1;j<size;j++)
        {
            if (dec==0){
                if (a[j]<a[si])
                    {
                        si=j;
                    }
            }
            else{
                    if (a[j]>a[si])
                    {
                        si=j;
                    }
            }
        }

        if (si!= i)
        {
            int temp = a[i];
            a[i]=a[si];
            a[si]=temp;
        }
    }
    for (int i=0;i<size;i++){
        printf("a[%d]= %d \n",i,a[i]);
    }

}
