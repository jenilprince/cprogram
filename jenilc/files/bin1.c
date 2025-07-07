#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    FILE *fil = fopen("bin1.dat","wb");
    fwrite(&arr,sizeof(arr),1,fil);
    fclose(fil);
    FILE *file = fopen("bin1.dat","rb");
    fread(&arr,sizeof(arr),1,file);
    for (int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    fclose(file);
}