#include <iostream>
using namespace std ;
int sumar(int a,int b);
int main(){
    int a,b;
    while(cin >> a >> b){
        cout<< " " << sumar(a,b) << endl;

    }
    
    return 0;
}

int sumar(int a,int b){
    return ( a + b );
}