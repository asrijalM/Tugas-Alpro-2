#include<iostream>

#include<string.h>

using namespace std;



int main(){

	char kalimat[100];

	int hasil;

	

	cout<<"Masukkan kalimat : ";

	cin.getline(kalimat,100);



	hasil=strlen(kalimat);

	for(int i=hasil-1;i>=0;i--){

		cout<<kalimat[i];

	}

}
