#include<stdio.h>

int LinearSearch(int array[],int n,int key){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            printf("Key Index NUmber:");
            return i;
        }
    }
    return -1;
}

int main(){
    int n,key;
    printf("Enter Array Size:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter The Key value:");
    scanf("%d",&key);

    printf("%d",LinearSearch(array,n,key));
    
    return 0;
}