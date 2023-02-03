#include <stdio.h>
int main() {
    int row  =6;
    for (int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2!=0){
                   printf("0 ");
                }
                else{
                    printf("%d ",j);
                }
            }
            else{
                if(j%2==0){
                    printf("0 ");
                }
                else{
                   printf("%d ",j);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
