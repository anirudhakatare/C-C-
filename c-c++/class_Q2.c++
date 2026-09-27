#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check last bit using bitwise AND with 1
    if (num & 1) {
        cout << num << " is Odd." << endl; // odd numer finder 
    } else {
        cout << num << " is Even." << endl;// even numrr  vindr and tr kl dof kl jf gn ks ak  
    }

    return 0;
}
