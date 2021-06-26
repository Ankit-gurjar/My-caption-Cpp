#include <iostream>
using namespace std;

bool checkPrime(int z);

int main() {
    int z, i;
    bool flag = false;

    cout << "Enter a positive  integer: ";
    cin >> z;

    for(i = 2; i <= z/2; ++i) {
        if (checkPrime(i)) {
            if (checkPrime(z - i)) {
                cout << z << " = " << i << " + " << z-i << endl;
                flag = true;
            }
        }
    }

    if (!flag)
      cout << z << " Can't be expressed as sum of two prime numbers.";

    return 0;
}

// Check prime number
bool checkPrime(int z){
    int i;
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (z == 0 || z == 1) {
        isPrime = false;
        }
        else {
            for(i = 2; i <= z/2; ++i) {
                if(z % i == 0) {
                    isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}
