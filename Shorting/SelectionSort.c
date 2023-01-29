#include<stdio.h>

void SelectionShort(int array[],int size){
    int temp;

    for( int i=0;i<size-1;i++){
        for( int j=i+1;j<size;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;

            }
        }
    }
}

int main(){
    int size;
    printf("Enter Array Size:");
    scanf("%d",&size);

    int array[size];
    printf("Enter %d Array Values:\n",size);

    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    SelectionShort(array,size);

    printf("After Shorting Array: \n");
    for(int j=0;j<size;j++){
        printf("%d ",array[j]);
    }



    return 0;
}
