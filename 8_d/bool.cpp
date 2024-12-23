#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //bool1
    // int a;
    // bool x;
    // cout << "sonni kiritinga: ";
    // cin >> a;
    // x = (a > 0);
    // cout << "natija: " << x << endl;
    //bool2
    // int a;
    // bool x;
    // cout << "sonnit kiriting: ";
    // cin >> a;
    // x = (a%2 == 1);
    // cout << "natija: " << x << endl;

    //bool7
    // int a, b, c;
    // bool x;
    // cout << "a sonini kiriting: ";
    // cin >> a;
    // cout << "b sonini kiriting: ";
    // cin >> b;
    // cout << "c sonini kiriting: ";
    // cin >> c;
    // x = (a<b && b<c);
    // cout << "Natija:  " << x << endl;

    //bool8
    // int a, b;
    // bool x;
    // cout << "a sonini kiriting: ";
    // cin >> a;
    // cout << "b sonini kiriting: ";
    // cin >> b;
    // x = (a%2 == 1 || b%2 == 1 );
    // cout << "Natija:  " << x << endl;

    //bool12
    // int a, b, c;
    // bool x;
    // cout << "a sonini kiriting: ";
    // cin >> a;
    // cout << "b sonini kiriting: ";
    // cin >> b;
    // cout << "c sonini kiriting: ";
    // cin >> c;
    // x = (a>0 && b>0 && c>0 );
    // cout << "Natija:  " << x << endl;

    //bool16
    // int a; bool x;
    // cout << "a sonini kiriting: "; cin >> a;
    // x = (a%2 == 0 && a>9 && a<100);
    // cout << "natija: " << x << endl;

    //bool17
    // int a;  bool x;
    // cout << "A sonini kiritiing: ";  cin >> a;
    // x = ((a%2 == 1)&& (a > 99) && (a < 1000));
    // cout <<"natija: " << x << endl;

    //bool18  a,b,c   12,13,12     12 <> -12  a == -b 
    // int a,b,c; bool y;
    // cout << "sonlarni kiriting: ";
    // cin >> a >> b >> c;
    // y = ((a == b ) || (a == c) || (b == c));
    // cout <<"natija: " << y << endl;

    //bool20         //122
    int a,x,y,z;     //xyz
    bool m;
    cout << "a sonini kiriting: ";  cin >> a;
    x = a/100;
    y = (a/10)%10;
    z = a%10;
    m = (x != y && y != z);
    cout << "natija: " << m <<endl;
    
    return 0;
}