#include "iostream" 
#include "iomanip"
using namespace std ;
int main(){
    double nota,total;
    int x;
    int n = 1,nn;
    while(n == 1){
        x = 0;
        total=0;
        while (cin >> nota){
            if(nota  > 10.0 || nota < 0){
                cout << "nota invalida" << endl ;
            }else{
                x++;
                total=total+nota;
                if(x == 2){
                    break;
                }
                
            }
        }
        double promedio = total / 2.0 ;
        cout << fixed << setprecision(2) << "media = "<< promedio << endl;
        cout << "novo calculo (1-sim 2-nao)" << endl ;
        while(cin >> nn){
            if(nn == 2){
                n = nn ;
                break;
            }else{
                if (nn == 1)
                {
                    n = nn;
                    break;
                }
                else{
                    cout << "novo calculo (1-sim 2-nao)" << endl ;
                }
                
            }
        }

    }
    
    
}
