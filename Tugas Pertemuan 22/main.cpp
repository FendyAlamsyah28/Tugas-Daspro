#include <iostream>

using namespace std;

int main()
{
   int x = 0, y = 1, w= 0, xy = 2;
   int z [3][2][2];
   float rata_rata;

   for(int o = 0; o < 3; o++){

     for(int k = 0; k < 2; k++){

        for(int e = 0; e < 2; e++){

            z[o][k][e] = xy;

            xy += 2;

            cout << xy << "";

            w += xy;

            x += xy;

            rata_rata = (float)w / x;
        }
     }
   }
   cout << "\n";

   cout << "sum kelipatan 4 = " << w << endl;

   cout << "rata-rata sum kelipatan 4 = " << rata_rata << endl;

    return 0;
}
