#include <iostream>

using namespace std;

#define TAM 41

int main()
{
    int aux, num , b[TAM];
    
    cout<<"Número decimal: ";
    cin>>num;
    cout<<num;
    cout<<" <--------- DECIMAL";
    
    for(aux=TAM-1;aux>=0;aux--){
        b[aux] = (num%2)==0 ? 0 : 1;
        num/=2; // num = num / 2;
    }
    
    cout<<endl;
    for(aux=1;aux<TAM;aux++){
        cout<<b[aux];
        if((aux%4)==0)
        cout<<" ";
    }
    
    cout<<"<-------- BINÁRIO";

    return 0;
}