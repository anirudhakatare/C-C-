#include <iostream>
using namespace std;
int main(){
    int a ;
    cout<< "ENTER YOUR NUMBER\n";
    cin>> a;
 int even = (a%2);
 int div = (a%4);

 if (even == 0 && div == 0){
    cout<< " EVEN AND DIVISIBLE BY 4 ";
 } 
else if (even == 0 && div !=0 ){
    cout<< "EVEN BUT NOT DIVISIBLE BY 4";
}
else if (even !=0)
{
 cout<<"ITS AN ODD NUMBER";  
}
else {
    cout<< "enter valid value";
}
return 0;

}