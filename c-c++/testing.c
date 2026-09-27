#include <stdio.h>
int main(){
    int len = 80;
    int brt = 65;
    int area = len * brt;
    if(area>=600){
        printf("area is so big");
    }
else if (area>=500)
{
    printf("area is mid");
}

else{
    printf("area is small");
}

    return 0;
}