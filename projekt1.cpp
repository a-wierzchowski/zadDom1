#include <iostream>

using namespace std;

int silnia (int n){
	if(n < 1)
		return false;
	int result = 1;
	while(n != 0){
		result *= n;
		n--;
	}
	return result;	
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
