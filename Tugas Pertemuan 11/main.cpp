#include <iostream>

using namespace std;

int main()
{
    int n = 11;
    int var;
    int var1;
    int var2;

    cout << "Deret Fibonacci Kurang Dari 100" << endl;

    var1=1;
    var2=0;
    var = var1 + var2;
    cout << var << endl;
    for (int i=1; i < n; i++){
        var  = var1 + var2;
        var2 = var1;
        var1 = var;
        cout << var << endl;
    }
    return 0;
}
