#include <Iostream>
using namespace std;
int f,c;
float celsiusfahrenheit(float celsius){
 return celsius*9/5+32;

}



int main() {
float temperatura;
cout<<"ingrese temperatura";
cin>>temperatura;
cout<<"su temperatura en fahrenheit es :"<<celsiusfahrenheit(temperatura);
return 0;
}