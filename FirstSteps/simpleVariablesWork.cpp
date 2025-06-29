#include <iostream> //Directiva, la cual nos incluye las bibliotecas basicas de C++. 
using namespace std; //Declaracion de espacio de nombre. 

int main(){

    const string name = "Jose";
    int age {21};
    double salary;

    cout << "Introduce el salario del empleado: ";
    cin >> salary;

    cout << "Introduce la edad del empleado: ";
    cin >> age;

    cout << "----------------------------------- " << endl;

    cout << "Datos empleado: " << endl;
    cout << "Nombre: " << name << ", Edad: " << age << ", Salario: " << salary;

}
