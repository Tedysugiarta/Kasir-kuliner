/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

    int kode,pri,jml,tot,byr,kbl;
    char mad;
    do
    {
    cout<<"           '' warung kuliner Tedy ''           "<<endl;
    cout<<"          Kuliner Bikin Ketagihan Nikmat      "<<endl;
    cout<<"        Chef nya sangat tamvan dan Ramah      "<<endl;
    cout<<"          Jl. Sangeh No.33 Badung. Bali       "<<endl;
    cout<<"  ============================================"<<endl;
    cout<<""<<endl;
    cout<<"Menu Makanan              Harga"<<endl;
    cout<<"1. AYAM GORENG + NASI     Rp. 15.000"<<endl;
    cout<<"2. NASI GORENG            Rp. 10.000"<<endl;
    cout<<"3. NASI BABI GULING       Rp. 15.000"<<endl;
    cout<<"4. MIE GORENG SPESIAL     Rp.  8.000"<<endl;
    cout<<"5. NASI CAMPUR            Rp. 10.000"<<endl;
    cout<<"6. ES JERUK               Rp.  5.000"<<endl;
    cout<<"7. ES TEH                 Rp.  5.000"<<endl;
    cout<<'\n'<<"MASUKKAN PILIHAN ANDA :";
    cin>>kode;
    switch (kode){
    case 1:
        cout<<'\n'<<"AYAM GORENG + NASI"<<endl;
        pri=15000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 2:
        cout<<'\n'<<"NASI GORENG"<<endl;
            pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 3:
        cout<<'\n'<<"NASI BABI GULING"<<endl;
            pri=15000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 4:
        cout<<'\n'<<"MIE GORENG SPESIAL"<<endl;
            pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 5:
        cout<<'\n'<<"NASI CAMPUR"<<endl;
            pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 6:
        cout<<'\n'<<"ES JERUK"<<endl;
            pri=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 7:
        cout<<'\n'<<"ES TEH"<<endl;
            pri=5000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    default:
    cout<<"Kode yang anda masukkan tidak ada";
    
    }
    }
    while (mad/='Y');
    cout<<endl;
    cout<<"=======================================";
    cout<<endl;
    cout<<"Terimah Kasih Atas Kunjungan Anda di warung Tedy yang Tamvan\n";
    cout<<"=======================================\n";
    cout<<"           SEMOGA ANDA PUAS     ";
    return 0;
}
