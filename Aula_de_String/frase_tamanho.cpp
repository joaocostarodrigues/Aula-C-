#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase;
    int cont = 0;
    
    cout << "Escreva a frase \n";
    getline (cin, frase);
    
    for(unsigned int i = 0; i < frase.size(); i++){
        if(frase[i] != ' ' && frase[i] != '.'){
            cont++;
            cout << frase[i] ;
        }else{
            cout << ":" << cont << " ";
            cont = 0;
        }
    }
}