#include <iostream>
using namespace std;

int main() {
    
    //int4
    // int a, b, x;
    // cout <<"a ni kiriting: ";
    // cin >> a;
    // cout <<"b ni kiriting: ";
    // cin >> b;
    // x = a%b;
    // cout << "Qolgani: " << x << endl;

    //int678
    // int a, x, y;
    // cout <<"sonni kiriting: ";   //xy
    // cin >> a;                    //23
    // x = a/10;
    // y = a%10;
    // cout << "yig'indisi: " << y << x << endl;

    //int678
    // int a, x, y, z;
    // cout <<"sonni kiriting: ";   //xyz   zyx  yxz
    // cin >> a;                    //235   532  325
    // x = a/100;
    // y = (a/10)%10;
    // z = a%10;
    // cout << "yig'indisi: " << y << x << z << endl;

    //862751 shundan 7 olish uchun nima qilish kerak (/ va %)
    //int17-18
    // int a, x;
    // cout <<"a ni kiriting: ";
    // cin >> a;
    // x = (a/100)%10;
    // cout << "yuzlar xonasi: " << x << endl;

    //int21
    // int s, m , ss;   //400 sekund berildi.
    // cout <<"s ni kiriting: ";
    // cin >> s;
    // m = s/60;
    // ss = s%60;
    // cout << m <<" minut " << ss << " sekund."<< endl;

        //1
    // int a;  bool m;
    // cout << "Sonni kiriting: ";
    // cin >> a;
    // m = (a>0);
    // cout << "Result: " << m << endl;

        //2
    // int a;  bool m;
    // cout << "Sonni kiriting: ";
    // cin >> a;
    // m = (a%2 == 1);
    // cout << "Result: " << m << endl;

        //4
    // int a,b;  bool m;
    // cout << "a sonni kiriting: ";
    // cin >> a;
    // cout << "b sonni kiriting: ";
    // cin >> b;
    // m = (a>2 && b<=3);
    // cout << "Natija: " << m ;

        //6
    int a,b,c;  bool m;
    cout << "a sonni kiriting: ";
    cin >> a;
    cout << "b sonni kiriting: ";
    cin >> b;
    cout << "c sonni kiriting: ";
    cin >> c;
    m = (a<b && b<c);
    cout << "Natija: " << m ;


    return 0;
}