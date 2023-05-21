#include <iostream>

using namespace std;

int CalcularMax(int a, int b, int c);

int main(){
    int num1, num2, num3;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    cout << "El maximo valor es: " << CalcularMax(num1, num2, num3) << endl;
    return 0;
}

int CalcularMax(int a, int b, int c){
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

