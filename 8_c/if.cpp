#include <iostream>    
using namespace std;   
int main() { 
        //if1         
    // int a; 
    // cout << "Sonni kiriting: ";
    // cin >> a;
    // if(a > 0){
    //     cout << "a=" << 1+a;
    // } else{
    //     cout << "a=" << a;
    // }
        //if3
    // int a; 
    // cout << "Sonni kiriting: ";
    // cin >> a;
    // if(a > 0){
    //     cout << "a=" << 1+a;}
    // if(a < 0){
    //     cout << "a=" << a-2;}
    // if(a == 0){
    //     cout << "a=" << 10;}

        //if7
    // int a,b;
    // cout << " a ni kirgazing: "; cin >> a;
    // cout << " b ni kirgazing: "; cin >> b;
    // if(a<b){ cout << 1; } 
    // else{ cout <<2; }

    //if10
    int a,b;
    cout << "sonlarni kiriting: ";
    cin >> a >> b;
    if(a != b) cout << "a=" << a+b << " b=" << a+b;
        else  cout << "a=" << 0 << " b=" << 0;
    
        //if12  eng kattasi
    int a,b,c;
    cout << "sonlarni kiriting: ";
    cin >> a >> b >> c;   
    if(a>b){
        if(a>c) cout << a;
        else cout << c;
    } else{
        if(b>c) cout << b;
        else cout << c;
    }
    // if(a>b && a>c) cout << a;
    //     else if(b>a && b>c) cout << b;
    //         else cout << c;

    return 0;
}
