#include<stdio.h>

int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(int i=1;i<n;i++){
        int current=array[i];
         int j=i-1;
         while(array[j]>current && j>=0){
            array[j+1]=array[j];
            j--;
         }
          array[j+1]=current;
    }
    for(int i=0;i<n;i++){
        printf("%d  ",array[i]);
    }
   
    return 0;
}