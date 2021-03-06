#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

struct brg{
	int kode;
	char nama[20];
	int stock;
};

class sorting {
	public :
		void input();
		void proses();
		void output();
	
	private :
		int n,i,b, cari, ada;
		brg barang[5];
		brg temp;
};

void sorting::input() {
	cout<<"=================================================================================="<<endl;
	cout<<"|                   		        TOKO MUNDUR JAYA ABADI                          |"<<endl;
	cout<<"=================================================================================="<<endl;
	cout<<"Masukan banyak data = ";
	cin>>n;

 	for(i=0;i<n;i++){
		cout<<endl;
		cout<<"Data ke-"<<(i+1)<<":"<<endl;
		cout<<"Input Kode Barang : ";cin>>barang[i].kode;
		cout<<"Input Nama Barang: ";cin>>gets(barang[i].nama);
		cout<<"Input Stock Barang : ";cin>>barang[i].stock;
		cout<<endl;
	 }
		cout<<"Data Barang Anda"<<endl;
		cout<<"================================================="<<endl;
		cout<<"|   Kode Barang  |  Nama Barang  | Stock Barang |"<<endl;
		cout<<"================================================="<<endl;
		for(i=0;i<n;i++){
        cout<<"|       "<<barang[i].kode<<"\t\t"<<barang[i].nama<<"\t\t "<<barang[i].stock<<"     |"<<endl;

        }
        cout<<endl;
		cout<<"===================================================="<<endl;
}

void sorting::proses() {
	for(i=0;i<n;i++){
        for(b=0;b<n-1;b++){
			if(barang[b].stock < barang[b+1].stock){
                temp.kode=barang[b].kode;
                barang[b].kode=barang[b+1].kode;
                barang[b+1].kode=temp.kode;

                strcpy(temp.nama,barang[b].nama);
                strcpy(barang[b].nama,barang[b+1].nama);
                strcpy(barang[b+1].nama,temp.nama);

                temp.stock=barang[b].stock;
                barang[b].stock=barang[b+1].stock;
                barang[b+1].stock=temp.stock;
        	}
        }
        cout<<endl;
	}
}

void sorting::output() {
		cout<<"Setelah data diurutkan berdasarkan stok terbesar : "<<endl;
        cout<<"================================================="<<endl;
		cout<<"|   Kode Barang  |  Nama Barang  | Stock Barang |"<<endl;
		cout<<"================================================="<<endl;

        for(b=0;b<n;b++){
        	cout<<"|      "<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t"<<barang[b].stock<<"       |"<<endl;
        }

        cout<<"=================================================="<<endl;
        cout<<endl;
        cout<<"Masukan Kode Barang Untuk Mencari : ";
        cin>>cari;
        ada = 0;
        for(b=0;b<n;b++)
            {
            if(barang[b].kode==cari)
                {
                    ada=1;
					cout<<"================================================="<<endl;
					cout<<"|   Kode Barang  |  Nama Barang  | Stock Barang |"<<endl;
					cout<<"================================================="<<endl;
                    cout<<"|      "<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t"<<barang[b].stock<<"       |"<<endl;
                }
            }
                    cout<<"==================================================="<<endl;

        if (ada == 0) {
            cout<<"Data Tidak ditemukan"<<endl;
        }
}

int main() {
	sorting out;
	out.input();
	out.proses();
	out.output();
	
	getch();
}
