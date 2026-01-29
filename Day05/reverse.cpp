// Reverse a string using manual swaps (no std::reverse)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "helllo";
    int i = 0, j = (int)s.length() - 1;
    while (i < j) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        ++i; --j;
    }
    cout << s << '\n';
    return 0;
}