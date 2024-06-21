#include <iostream>

using namespace std;

bool czyPierwsza(int n){
	if(n < 2)
		return false;
	for(int i=2; i*i<=n; i++){
		if(n%i == 0)
			return false;
	}
	return true;
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
