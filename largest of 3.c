#include<stdio.h>
int main(){
    int x, y, z;
    printf("Enter  any 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if(x>y){
        if(y>z){
            printf("%d\n", x);
        }else{
            printf("%d\n", z);
        }
    }else{
        if(y>z){
            printf("%d\n", y);
        }else{
            printf("%d\n", z);
        }
    }
}
