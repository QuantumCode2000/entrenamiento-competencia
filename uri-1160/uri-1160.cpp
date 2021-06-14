#include "iostream"
using namespace std ;
int main(){
    long long pob_a,pob_b;
    double por_a,por_b;
    long long it,n,s;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >>  pob_a  >> pob_b >> por_a >> por_b;
        it = 0;
        s = 0;
        while (pob_a <= pob_b){
            pob_a = pob_a + (por_a * (float(pob_a))/100.0); 
            pob_b = pob_b + (por_b * (float(pob_b))/100.0);
            it++;
            if(it>100){
                s=1;
                break;
            }
        }       
        if (s != 1)
        {
            cout << it << " anos." << endl ;
        }else{
            cout << "Mais de 1 seculo." << endl;
        }
        
        
    }
}