#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // int a, b, x;
    // cout <<"a kesmani kiriting: ";
    // cin >> a;
    // cout <<"b kesmani kiriting: ";
    // cin >> b;
    // x = a%b;
    // cout << "natija: " << x << endl;

    // int a, x, y, z;
    // cout <<"a kesmani kiriting: "; //xyz 
    // cin >> a;                      //457 = a
    // x = a/100;
    // y = (a/10)%10;
    // z = a%10;
    // cout << "natija: " << x*y*z << endl;

    // int a, x, y;
    // cout <<"a kesmani kiriting: "; //xy 
    // cin >> a;                      //123 = a
    // x = a/10;
    // y = a%10;
    // cout << "natija: " << x*y << endl;

    // int a, b;
    // cout <<" a ni kiriting: ";
    // cin >> a;
    // cout <<" b ni kiriting: ";
    // cin >> b;
    // cout << "yuzasi: " << a*b << endl;
    // cout << "perimetri: " << 2*(a+b) << endl;

    // int a, b, m;
    // cout <<" a ni kiriting: ";
    // cin >> a;
    // cout <<" b ni kiriting: ";
    // cin >> b;
    // m = sqrt(a*b);
    // cout << "natija: " << m ;

    // int a;
    // bool f;
    // cout <<"sonni kiriting: ";
    // cin >> a;
    // f = ;
    // cout << f << endl;

    // int a, x, y, z;
    // bool k;
    // cout <<"a kesmani kiriting: "; //xyz
    // cin >> a;                      //123
    // x = a/100;
    // y = (a/10)%10;
    // z = a%10;
    // k = (x*y*z == x+y+z);
    // cout << "natija: " << k << endl;

        //if1_2
    // int a;
    // cout << "sonni kirgazing: ";
    // cin >> a;
    // if(a>0) cout << "bu son musbat";
    //     else if(a<0) cout << " bu son manfy ekan";
    //         else cout << "bu son nol ekan";

        //if3
    // int son;
    // cin >> son;
    
    // if(son%3 ==0 && son%5 ==0) cout << "son 3 ga ham 5 ga ham bo'linadi";
    //     else if(son%3 ==0) cout <<" bu son uchga bo'linii";
    //         else if(son%5 == 0) cout << "bu son 5 ga bo'linadi";
    //             else cout << "bu son 3 ga ham 5 ga ham  bo'linmaydi";

        //if4
    int a;
    cout <<"sonni kiriting: ";
    cin >> a;
    if(a%4 == 0 && (a%100 != 0 || a%400 == 0)) cout << "kabisa yli ekan";
        else cout << "oddiy yil ekan";

    return 0;
}