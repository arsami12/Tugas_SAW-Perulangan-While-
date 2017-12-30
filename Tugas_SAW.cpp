#include <iostream>
using namespace std;

int main(){
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
	double a1c[5]={4,4,5,3,3};
	double a2c[5]={3,3,4,2,3};
	double a3c[5]={5,4,2,2,2};
	
	// Menampilkan Matriks X !
	
	cout << "MATRIKS X :"<<endl;
	int i=0;
		do {
			cout << a1c[i] << " | ";
			i++;
		}while(i<5);cout<<endl;
	int j=0;
		do {
			cout << a2c[j] << " | ";
			j++;
		}while(j<5);cout<<endl;
	int k=0;
		do {
			cout << a3c[k] << " | ";
			k++;
		}while(k<5);cout<<endl;		
	
}
