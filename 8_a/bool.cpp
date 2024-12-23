#include <iostream>    // yoki (or) ||    toq son bu (a % 2 == 1)
using namespace std;   // va (and)  &&   juft son bu (a % 2 == 0)
int main() {            //  {-2>0<4}  true - 1  <> false - 0
    //bool1
    // int a; 
    // bool x;      
    // cout << "a sonini kirit: "; 
    // cin >> a;
    // x = (a>0);
    // cout << "Natija: " << x << endl;

    //bool2
    // int a; 
    // bool x;      
    // cout << "a sonini kirit: "; 
    // cin >> a;
    // x = (a%2 == 1);
    // cout << "Natija: " << x << endl;
        //bool5
    // int a,b;
    // bool x;
    // cout << "a ni kiriting: ";
    // cin >> a;
    // cout << "b ni kiriting: ";
    // cin >> b;
    // x = (a >= 0 || b < -2);
    // cout << "natija: " << x;

        //bool20    
    // int a,x,y,z;  bool m;        //xyz
    // cout << "Sonni kiriting: ";  //345
    // cin >> a;
    // x = a/100;
    // y = (a/10)%10;
    // z = a%10; 
    // m = ((x != y) && (y != z) && (x != z));
    // cout << "Natija: " << m <<  endl;

        //bool14
    int a,b,c;
    bool x;
    cout << "a ni kiriting: ";
    cin >> a;
    cout << "b ni kiriting: ";
    cin >> b;
    cout << "c ni kiriting: ";
    cin >> c;

    x = (a>0 && b<0 && c<0) || (a<0  && b>0 && c<0) || (a<0 && b<0 && c>0);
    cout <<"natija: " << x << endl;
    farux ustoz n1
    

    return 0;
}