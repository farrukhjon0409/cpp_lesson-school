#include <iostream>

using namespace std;
int main() {
   int a;
   cout << "sonni kiriting: ";
    cin >> a;
    if(a > 0 )cout << "son musbat ";
    else if(a == 0) cout << "son nolga teng";
    else cout << "son manfiy ";

// int a;
// cout << "sonni kiriting ";
// cin >> a;
// if(a%2 == 0) cout << "son juft";
// else cout << "SON toq";

// int a;
// cout << "sonni kiriting ";
// cin >> a;
// if(a%3 == 0 && a%5 == 0) cout << "son 3 ga va 5 ga bo'linadi";
//     else if(a%3 == 0) cout << "son 3 ga bo'linadi";
//     else if(a%5 == 0) cout << "son 5 ga bo'linadi";
//     else cout << "son 3 ga va 5 ga ham bo'linmaydi";

// int year;
// cout << "yilni kiritng: ";
// cin >> year;
// if(year%4 == 0 && (year%100 != 0 || year%400 == 0)) cout << "yil kabisa";
//     else cout << "bu yil kabisa emas";

    return 0;
}