#include <stdio.h>

float tem (float a){
    float ans =  (a*9/5)+32;
    return ans ;
}

int main(){
    float a = tem(35.8);
    printf("%f",a);
    return 0 ;
}