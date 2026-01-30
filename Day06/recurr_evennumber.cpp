#include <iostream>
using namespace std;    
void printEven(int n) {
    if (n<0)    
    return ;
    cout << n << " ";
    printEven(n-2);  

}
int main() {
   int num=20;
    printEven(num);
    cout<<'\n';
    return 0;
}                   ;
