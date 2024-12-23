#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //bool1
    // int a;
    // bool x;
    // cout << "A sonini kiriting: ";
    // cin >> a;
    // x = (a>0); 
    // cout << "natija: " << x << endl;

    // //bool2
    // int a;
    // bool x;
    // cout << "A sonini kiriting: ";
    // cin >> a;
    // x = (a%2 == 1); 
    // cout << "natija: " << x << endl;

    //bool4
    // int a,b;
    // bool x;
    // cout << "a sonini kirit: ";
    // cin >> a;
    // cout << "b sonini kirit: ";
    // cin >> b;
    // x = ( a > 2 && b <= 3 );
    // cout <<"Natija: " << x << endl;

    //bool13
    // int a,b,c;
    // bool x;
    // cout << "a sonini kirit: ";
    // cin >> a;
    // cout << "b sonini kirit: ";
    // cin >> b;
    // cout << "c sonini kirit: ";
    // cin >> c;
    // x = ( a>0 || b<0 || c<0 );
    // cout <<"Natija: " << x << endl;

    //bool20
    int a,x,y,z;
    bool k;
    cout << "Uch xonali son kiriting: ";
    cin >> a;   // a=357                           
    x = a/100;  //   xyz
    y = (a/10)%10;
    z = a%10;
    k = (x==y && y==z);
    cout << "natija: " << k << endl;

    


    return 0;

}