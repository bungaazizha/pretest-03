/*
Author		: Bunga Azizha N
NPM			: 140810180016
Kelas		: B
Tanggal		: Rabu, 13 Maret 2019
Deskripsi	: 
*/
//pretest-03

#include <iostream>
using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float IPK;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n){
	cout<<"Masukkan banyak data : ";cin>>n;
};

void inputMhs(larikMhs& mhs, int n){
	for (int i=0; i<n; i++){
		cout<<"Masukkan Nama Mahasiswa : ";
		cin.ignore(100,'\n');
		cin.getline(r_mhs[i],nama[40]);
		cout<<"Masukkan NPM Mahasiswa : ";cin>>r_mhs[i].NPM;
		cout<<"Masukkan IPK : ";cin>>r_mhs[i].IPK;
	}
};

void cetakMhs(larikMhs& mhs, int n){
	cout<<"\t\t\tDATA MAHASISWA"<<endl;
	cout<<"=========================="<<endl;
	cout<<"No	NPM			Nama			IPK"<<endl;
	for(int i=0; i<n; i++){
		cout<< i+1 <<"	"
	}
};

void sortNama(larikMhs& mhs, int n){
	for(i=o; i<n; i++){
		
	}
};

int main(){
	larikMhs mhs;
	
	
	
}
