#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("color c");
    int x,jih_anak;
    cout<< "masukan jumlah bola dalam keranjang :";
    cin>>jih_anak;
    cout<<"Mari kita ambil bola sambil berhitung mulai dari "<<jih_anak<<endl;

    for (x=jih_anak;x>0;x--)
    {
        if (x>1)
        cout<<"jumlah bola ada "<<x<<" diambil satu tinggal "<<x-1<<endl;
        else if (x=1)
        cout<<"jumlah bola ada 1 diambil satu tinggal keranjangnya"<<endl;

    }
    getch();
    return 0;
}
