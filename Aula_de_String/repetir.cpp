#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;
    int n;
    
    cout << "Palavra:";
    getline(cin, A);
    
    cout << "Digite o numero de vezes";
    cin >> n;
    
    A == B;
    
    for(unsigned int i = 1 ; i < n; i++){
        
        B += " " + A;
    }
    
    cout << A << B ;
    
}