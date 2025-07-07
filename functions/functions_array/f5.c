#include <stdio.h>
#include<string.h>
void rev(int array[5]){
    for (int i=4;i>=0;i--){
        printf("%d\t",array[i]);
    }
}
int main(){
    int array[5]={1,2,3,45,6};
    rev(array);

}