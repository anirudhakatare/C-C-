// #include <iostream>
// using namespace std;

// int main() {
//     int i, j;
//     cout << "Prime numbers between 1 and 100 using for loop:\n";

//     for (i = 2; i <= 100; i++) {
//         bool isPrime = true;
//         for (j = 2; j <= i / 2; j++) {
//             if (i % j == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime)
//             cout << i << " ";
//     }

//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int i = 2;
    cout << "Prime numbers between 1 and 100 using while loop:\n";

    while (i <= 100) {
        int j = 2;
        bool isPrime = true;

        while (j <= i / 2) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
            j++;
        }

        if (isPrime)
            cout << i << " ";

        i++;
    }

    cout << endl;
    return 0;
}
