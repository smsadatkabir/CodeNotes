#include<stdio.h>

void BubbleShort(int array[],int size){
    int temp;

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }

        }
    }

}

int main(){
    int size;
    printf("Enter Array Size:");
    scanf("%d",&size);
    int array[size];
    printf("Enter Array Values :\n");

    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    BubbleShort(array,size);

    for(int j=0;j<size;j++){
        printf("%d  ",array[j]);
    }


    return 0;
}