#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cout <<"Masukan Code Jurusan"; cin >> x;

    if (x == 1){
        cout << "Jurusan Anda adalah Teknik informatika" <<endl;
    }
    if (x==2){
        cout << "Jurusan Anda adalah Sistem informatika" <<endl;
    }
    if (x==3){
        cout << "Jurusan Anda adalah Desain Komunikasi Visual" <<endl;
    }

    cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" <<endl;
    cout << "Masukan Semester";cin >> y;

    if (y == 1||y == 2) {
        cout << "Anda Dalam Kategori Freshman" << endl;
    }
    if (y == 3||y == 4) {
        cout << "Anda Dalam Kategori Sophomore" << endl;
    }
    if (y == 5||y == 6) {
        cout << "Anda Dalam Kategori Junior" << endl;
    }
    if (y == 7||y == 8){
        cout << "Anda Dalam Kategori Senior" << endl;
    }
    return 0;
}
