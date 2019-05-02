#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int rozmiar=0;
	float suma = 0;
	float wynik = 0;
	
	do {
	cout << "Podaj liczbe cyfr, z ktorych chcesz policzyc srednia: " << endl;
	cin >> rozmiar; 
	
	int *srednia = new int[rozmiar]; 
	
	for(int i=0; i<rozmiar; i++){
		cout << "Podaj " << i+1 << ". liczbe: ";
		cin >> srednia[i];
		suma = suma + srednia[i];
	}
	
	if(rozmiar>0)
	{	wynik = suma/rozmiar;
		cout << "Srednia z podanych liczb wynosi: " << wynik;
	}
	else
	cout << "Musisz podac liczbe wieksza niz zero, by obliczyc srednia";
	}
 	while(rozmiar==0 & rozmiar<0);
		
	return 0;
}
