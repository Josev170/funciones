#include <iostream> 
using namespace std;

void mostrarparidad(int numero){
    if(numero%2==0){
    cout<<"su numero es par";
    }
    else {
        cout<<"su numero es impar";
    }
}


int main (){
     int numero; 
     cout<<"ingrese el numero:";
     cin>>numero;
     mostrarparidad(numero);
    return 0;
}