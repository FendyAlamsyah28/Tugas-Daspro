#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     /*  Soal 1
    int j = 100;
    for (int i=0 ; i<=100 ;i++ , j-- ){
        cout << "i= " << i << " Dan j= " << j << endl;
    } */


  /*     Soal 2
    for (int i=1 ; i<=100 ; i++){
        if (i%2 == 1){
         continue;
        }
      cout << "nilai genap adalah " << i <<  endl;
    }*/


    /*   Soal 3
    for ( int i=100; i >=1; i--){
        if (i < 55){
            break;
        }
        cout << i << endl;
    }*/


    /*   Soal 4
    float total = 0;
    for(int i = 1; i<=20; i++){
        int hasil = i;
        total+=hasil;
        cout <<i<<endl;
    }
        cout << endl;
        cout << "Total= "<< total << endl;
        cout << "rata rata= "<< total/20<<endl;
    */


    /*   Soal 5
    int x;
    cout <<"masukan angka= ";
    cin >> x;
    while (x!=-99){
        cout << "masukan angka= ";
        cin >> x;
    }*/


     /*   Soal 6
    int x ;
    int max;
    int min;
    cout << "masukan angka= ";
    cin >> x;
        min = 99999999;
        max = -99999999;
        while (x != -99){
            if (x < min ){
                min = x;
            }
            if (x > max ){
                max = x;
            }
            cout << "masukan angka= ";
            cin >> x;
        }
        cout<<"Min = "<<min<<endl;
        cout<<"max = "<<max<<endl;
 */


      /*  Soal 7

     int main()
{
        int sum=0;
        int x;
        cout<<"Input Bilangan = ";
        cin >>x;

        while (x != 9999){
            cout<<x<<endl;
            sum+=x;
            cout<<"Input Bilangan = ";
            cin >>x;

        }
        cout<<"Jumlah Angka = "<<sum<<endl;

}*/

         /*Soal 8

    int main()
{
      int sum=0;
      int x;
      cout<<"Input Bilangan = ";
      cin >>x;

         while (x != 9999){
             cout<<x<<endl;
             sum+=1;
             cout<<"Input Bilangan = ";
             cin >>x;

         }
         cout<<"Jumlah Angka = "<<sum<<endl;

}*/



         /* Soal 9

      int main()
{
        int sum=0;
        int cacah=0;
        int x;
      cout<<"Input Bilangan = ";
      cin >>x;

          while (x != 9999){
             cout<<x<<endl;
             sum+=x;
             cacah+=1;
             cout<<"Input Bilangan = ";
             cin >>x;

        }
        cout<<"Jumlah Angka = "<<sum<<endl;
        cout<<"Jumlah Cacah Angka = "<<cacah<<endl;

}*/



          /* Soal 10


     using namespace std;

       int main()
{
         for(int x=1;x<=7;x++){

            cout<<endl;
            cout<<"Looping Yang Ke-"<<x<<endl;

         for(int y=1;y<=10;y++){
         }
          cout<<"-Angka "<<y<<"-"<<endl;

    }

}*/


         /*   Soal 11


      int main()
{
         int kali;

             cout<<"Input : ";
             cin>>kali;
           for(int x = 1 ; x <= 10 ; x++ ){
       }
        cout<<x<<" x "<<kali<<" = "<<x*kali<<endl;
    } */



        /* Soal 12

{   cout<<"|  Celcius  |  Fahrenheit |"<<endl;
    cout<<"|-------------------------|"<<endl;
    for(float x = 0.00 ; x <= 100 ; x++ ){

        cout << fixed << setprecision(0) << "|    " <<x<< "     |      "
        << setprecision(1)<< x*1.8 + 32 << "    |" <<endl;
    }
      */

    return 0;

}

