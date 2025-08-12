
#include<iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string palavra1, palavra2;
    
    cout << "Digite uma palavra:";
    getline(cin, palavra1);
    
    palavra2 = palavra1;
    
    int inicio = 0;
    int fim = palavra2.size() - 1;
    
     while (inicio < fim) {
        char temp = palavra2[inicio];
        palavra2[inicio] = palavra2[fim];
        palavra2[fim] = temp;

        inicio++;
        fim--;
    }
    
    if(palavra1 == palavra2){
        cout << "A palavra é um palindromo.";
    }else{
        cout << "A palavra não é um palindromo.";
    }
}