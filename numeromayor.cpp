#include <iostream>
using namespace std;

int mayor(int a,int b,int c){
if(a>b&&a>c){
    return a;
}
else if(b>a&&b>c){
return b;
}
else {
    return c;
    
}
}

int main(){
    int a,b,c;
cout<<"ingrese numero a:";
cin>>a;
cout<<"ingrese numero b:";
cin>>b;
cout<<"ingrese numero c:";
cin>>c;
cout<<"el mayor es"<<mayor(a,b,c);
return 0;
}