/// new program to edit 
#include<stdio.h>
int main(){
int incom;
printf("enter your income\n");
scanf("%d",&incom);
if (incom>=250000 && incom<500000 ){
    printf("your incom tax is%d",(5 * incom-250000)/100);}
else if (incom>=500000 && incom<1000000 ){
    printf("your tax is %d",(20*incom)/100);
}
else if (incom<250000){
    printf("your tax is zero");
}

else if(incom>=1000000){
    printf("your tax is %d",(30*incom)/100);
}
else{
    printf("enter valid value");}
    return 0;

}