#include<stdio.h>

int BinarySearch(int array[],int n,int key){
    int s=0,e=n-1;

    while(s<=e){
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
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

    int p= BinarySearch(array,n,key);
    
    if(p!=-1){
        printf("Key index number in Array: %d",p);
    }
    else{
        printf("Key not Found");
    }
    return 0;
}