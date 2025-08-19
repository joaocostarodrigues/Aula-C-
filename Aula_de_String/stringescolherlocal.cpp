#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int i ;
    int j ;
    
    do{
    cout << "Escreva uma palavra:";
    getline(cin, a);
        
    }while(a.empty());
    
    do{
    cout <<"Escreva o valor inicial:";
    cin >> i;
    cout <<"Escreva o valor final:";
    cin >> j;
    }while(i < 1 and i>=j or j>a.size());
    
    i--;
    
    for(; i < j; i++){
        a[i];
        cout << a[i];
    }
    
}