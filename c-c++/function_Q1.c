#include <stdio.h>
int function (int a , int b , int c){
    int avg = (a + b + c)/3;
    return avg;  
}

int main (){
    int c = function(2,4,8);
    printf("%d",c);
    return 0 ;
}
