#include <iostream>
using namespace std;

int main(){
    
    const double midValue {35.5};
    const double highValue {55.3};
    const int iva {21};
    const int validate {30};

    int midUser;
    int highUser;
    double totalUser;
    double totalIVA;

    cout << "Cuantos metros calidad media quieres instalar?: " << endl;
    cin >> midUser;

    cout << "Cuantos metros calidad alta quieres instalar?: " << endl;
    cin >> highUser;

    totalUser = (midUser*midValue) + (highUser*highValue);
    totalIVA = totalUser * iva / 100;
    
    cout << "El total de los M de calidad media es " << midUser*midValue << " . Y el total de M de calidad alta es " << highUser*highValue << endl;
    cout << "El total a pagar (SIN IVA) es: " << totalUser << endl;
    cout << "El total de IVA a pagar es: " << totalIVA << endl;
    cout << "El total mas IVA es: " << totalUser + totalIVA << endl;
    cout << "El presupuesto es valido durante " << validate << " dias.";

}
