#include<stdio.h>
int main(){
    //Check if two arrays are same
    int arr1[]={5,2,3,4,1};
    int arr2[]={1,3,5,2,4};
    
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if (arr1[i]>arr1[j]){
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
      for (int i=0;i<5;i++){
        //printf("%d",arr1[i]);
    }
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if (arr2[i]>arr2[j]){
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
       // printf("%d",arr2[i]);
    }
    int flag=0;
    
    for(int i=0;i<5;i++){
        if (arr1[i]!=arr2[i]){
           flag=1;
           break;
        }
    }
    if (flag){
        printf("No");
    }
    else{
        printf("Yes");
    }

}