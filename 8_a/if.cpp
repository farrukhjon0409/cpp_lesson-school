#include <iostream>
using namespace std;
int main() {
    // int num;
    // cout << "sonni kirgazing: ";
    // cin >> num;
    // if(num > 0) { cout << " bu son musbat.";}
    //     else { cout << "bu son manfiy ekan.";}

    // int num;
    // cout << "sonni kirgazing: ";
    // cin >> num;
    // if(num > 0) { cout << " bu son musbat.";}
    //     else if(num<0) { cout << "bu son manfiy ekan.";}
    //         else { cout << " bu son nolga teng ekan.";}

    // int age;
    // cout <<"Yoshingizni kiririting: ";
    // cin >> age;
    // if(age >= 18) { cout << "siz kattasiz!";}
    //     else { cout << "siz kichiksiz!";}

    // int baho;
    // cout << "talabaning bahosini kiriting: ";
    // cin >> baho;
    // if(baho >= 90){ cout << "bahoyingiz 5!";}
    //     else if(baho >= 70 && baho < 90) { cout << "bahoyingiz 4 ekan!";}
    //         else {cout << "bahoyingiz 3 ekan!";}

    // int y;
    // cout << "yilni kiriting: ";
    // cin >> y;
    // if(y%4 == 0 && (y%100 != 0 || y%400 == 0)){ cout << "bu yil kabisa ekan!";}
    //     else { cout << " bu oddiy yil ekan!";}

    //if2
    int son;
    cout << "sonni kiriting: ";
    cin >> son;
    if(son%4==0 && (son%100!=0 || son%400==0)){
        cout << " bu kabisa yili ekan.";
    } else{
        cout << " bu oddiy yil ekan.";
    }
    return 0;
}

