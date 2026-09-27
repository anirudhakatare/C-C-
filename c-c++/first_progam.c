#include<stdio.h>

int main(){
    char name ;
    int price ;
    printf("ENTER YOUR product\n");
    scanf("%c", &name);
    printf("ENTER YOUR product price\n");
    scanf("%d", &price);
    printf("YOUR product IN\n%c",name);
    printf("YOUR price IN\n%d",price);
    
    return 0;
}