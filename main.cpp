//		
//		main.cpp
//		SHA3 Project
//		Tien V. Nguyen - 20133954
//		School of Information and Comunication Technology
//


#include <cmath>
#include <string>
#include <fstream>
#include "StateArray.h"
#include "BitString.h"

using namespace std;
 
int main()
{
	char c[60];
	int i, j;

	cout << "Nhap vao chuoi ky tu: " << endl;
	cin.getline(c, 60);
	
	BitString BStr(c);
	
	int choose;
	
	cout << "Xin moi chon ham bam:" << endl;
	cout << "1. SHA3-224" << endl;
	cout << "2. SHA3-256" << endl;
	cout << "3. SHA3-384" << endl;
	cout << "4. SHA3-512" << endl;
	
	cin >> choose;
	
	if(choose == 1) BStr.SHA3_224();
	
	if(choose == 2) BStr.SHA3_256();
	
	if(choose == 3) BStr.SHA3_384();
	
	if(choose == 4) BStr.SHA3_512();
	
	cin.ignore(1); //Sau khi nhap gia tri choose o tren thi mot ky tu "\n" van bi bo lai tren dong cin
	
	char *filename, *ch;
	ifstream f;
	
	filename = new char[60];
	ch = new char[60];
	
	cout << "Nhap ten tep: " << endl;
	cin.get(filename, 50);
	
	f.open(filename, ios::in);
	if(!f.is_open()){
		cout << "Khong the mo file" << endl;
	}else{
		
		f.getline(ch, 60);
		BitString BStr2(ch);
		
		cout << "Xin moi chon ham bam:" << endl;
		cout << "1. SHA3-224" << endl;
		cout << "2. SHA3-256" << endl;
		cout << "3. SHA3-384" << endl;
		cout << "4. SHA3-512" << endl;
		
		cin >> choose;
		
		if(choose == 1) BStr2.SHA3_224();
		
		if(choose == 2) BStr2.SHA3_256();
		
		if(choose == 3) BStr2.SHA3_384();
		
		if(choose == 4) BStr2.SHA3_512();
		}
		
	f.close();				
			
	system("pause");

	return 0; 
}
