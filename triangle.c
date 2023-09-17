#include<stdio.h>
int main(){
    int x, y, z;
    printf("Enter sides of traingle: ");
    scanf("%d %d %d", &x, &y ,&z);
    if(x==y && y==z&& x==z){
        printf("Equilateral");
    }else if((x==y && x!=z) || (y==z && x!=z) || (x==z && x!=y)){
        printf("Isoceles");
    }else{
        printf("Scalene");
    }
    return 0;
}
