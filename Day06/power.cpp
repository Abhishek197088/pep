// write a code to calculate power of a number
#include<iostream>
    using namespace std;
    int power(int b,int p){
        if(p==0)
        return 1;
        return b*power(b,p-1);
    }       
    int main (){
        int b,p;
        cout << "Enter base and power: ";
        cin >> b >> p;
        cout << "Result: " << power(b, p) << endl;
        return 0;
    }
