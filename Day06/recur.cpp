#include <iostream>
using namespace std;

void printN(int n) {
    if (n == 0) return;     
    cout << n << endl;      
    printN(n - 1);          
}

int main() {
    int number = 10;                       
    cout << "My number is n = " << number << endl;
    printN(number);
    return 0;
}
