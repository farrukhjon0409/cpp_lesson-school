#include<iostream>
#include<cmath>

using namespace std;
int main(){
    //int1
    // int l,s,q;
    // cout << "santimetrda kiriting: ";
    // cin >> l;
    // s = l / 100;
    // q = l % 100;
    // cout << "Metrlarda: " << s << " m " << q << " sm" << endl;

    // int4
    // int A,B,c;
    // cout << "Kesmalarni kiriting: " ;
    // cin >> A;
    // cin >> B;
    // c = A / B;
    // cout << c << "  ta joylashtirish mumkin" << endl;

    // int7
    // int a,x,y;
    // cout << "Sonni kiriting:";
    // cin >> a;
    // x = a/10;
    // y = a%10;
    // cout << "Raqamlar yig'indisi: " << x + y << endl;

    //int9
    // int a, x ;
    // cout << "Uch xonali son kiriting: ";
    // cin >> a;
    // x = a / 100;
    // cout << "yuzlar xonasidagi son: " << x << endl;
    
    // int11
    int a,x,y,z;
    cout << "Uch xonali son kiriting: ";
    cin >> a;                                   // 123
    x = a/100;
    y = (a/10)%10;
    z = a%10;
    cout << "Yig'indisi: " << x + y + z << endl;

    return 0;
}