#include <iostream>

using namespace std;

int main()
{
    int a=5000;
    int p;

    cout << "masukkan harga permen";
    cin  >> p;
    if (p==500){
        cout << "jumlah permen yang di dapat = 5";
    }else if (p==1000){
        cout << "jumlah permen yang di dapat = " << a/p;
    }else {
        cout << "jumlah permen yang di dapat = " << a/300;
    }

    return 0;
}
