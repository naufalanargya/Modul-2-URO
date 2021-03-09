#include <iostream>
#include <cmath>

using namespace std;

float pangkat(float a, int b){ 
    int hasil = 1;
    while (b != 0){
        hasil *= a;
        --b;
    };
    
    return hasil;
}

float f(float x){
    return (x*x);
}

int main()
{
    int opt;
    cout << "Pilih Mode kalkulator\n";
    cout << "1. Basic Math\n";
    cout << "2. Integration\n";
    cin  >> opt;
    
    if(opt == 1){
        float num1,num2 ;
        int opt2;
        cout << "Pilih Operasi yang Diinginkan\n";
        cout << "1. Penjumlahan\n";
        cout << "2. Pengurangan\n";
        cout << "3. Perkalian\n";
        cout << "4. Pembagian\n";
        cout << "5. Perpangkatan\n";
        cin >> opt2;
        if(opt2 == 1){
          cout << "Masukkan angka pertama = ";
          cin >> num1;
          cout << "Masukan angka kedua = ";
          cin >> num2;
          cout << num1 + num2;
        }
        else if (opt2 == 2){
          cout << "Masukkan angka pertama = ";
          cin >> num1;
          cout << "Masukan angka kedua = ";
          cin >> num2;
          cout << num1 - num2;
        }
        else if (opt2 == 3){
          cout << "Masukkan angka pertama = ";
          cin >> num1;
          cout << "Masukan angka kedua = ";
          cin >> num2;
          cout << num1 * num2;
        }
        else if (opt2 == 4){
          cout << "Masukkan angka pertama = ";
          cin >> num1;
          cout << "Masukan angka kedua = ";
          cin >> num2;
          cout <<  num1 / num2;
        }
        else if (opt2 == 5){
          cout << "Masukkan angka pertama = ";
          cin >> num1;
          cout << "Masukan angka kedua = ";
          cin >> num2;
          cout <<  pangkat(num1,num2);
        }
        else {
          cout << "Input Tidak Tersedia";
        } 
    } else if (opt == 2){
            int i,N;
            float tinggi,bawah,atas,x1,x2,y1,y2,total=0;
            cout << "Masukkan batas atas = "; 
            cin >> atas;
            cout << "Masukkan batas bawah = "; 
            cin >> bawah;
            cout << "Masukkan banyak Interval = "; 
            cin >> N;
            
            tinggi=(atas-bawah)/N;
             // misalkan fungsinya x^2
            x1= bawah;
            x2=bawah+tinggi;
            y1 = f(x1);
            y2 = f(x2);
           
            for (int i=0;i<N;i++)
        {
            total+=(y1+y2)*tinggi/2;
            x1+=tinggi;
            x2+=tinggi;
            y1=f(x1);
            y2=f(x2);
        }
        cout << total;
        } else {
            cout << "input salah";
        }
        
        // return 0;
        
    }
    
