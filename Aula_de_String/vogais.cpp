#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase;
    string vogais = "aeiou";
    int vetor[5] = {0};
    int maior = vetor[0];
    
    cout << "Digite a frase:";
    getline(cin, frase);
    
    for(unsigned int i = 0; i < frase.size(); i++){
        if(frase[i] == vogais[0]){
            vetor[0]++;
        }
        else if (frase[i] == vogais[1]){
            vetor[1]++;
        }
        else if (frase[i] == vogais[2]){
            vetor[2]++;
        }
        else if (frase[i] == vogais[3]){
            vetor[3]++;
        }
        else if (frase[i] == vogais[4]){
            vetor[4]++;
        }
    }
    for(int i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    
    cout << "A:" << vetor[0] << "\nE:" << vetor[1] << "\nI:" << vetor[2] << "\nO:" << vetor[3] << "\nU:" << vetor[4] << "\nMaior:" << maior;
}