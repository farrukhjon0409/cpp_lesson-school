#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // santimetrdan metrga o'tish
    // int smetr,result;
    // cout << " malumot kiriting: ";
    // cin >> smetr;
    // result = smetr/100;
    // cout <<"Metr " << result << " santimeri: " << smetr-(result*100)<< endl;

    // int son, a, b ;
    // cout << "son kirit:";
    // cin >> son;
    // a = son/10;
    // b = a%10;
    // cout << "o'nliklar xonasi: " << b << endl;
    int a,b,c;
    cout << "Sonni kirgazing:";
    cin >> a;
    b = a /10;
    c = a% 10;
    cout << "Raqamlar yig'indisi: " << b + c << endl;
    return 0;
}