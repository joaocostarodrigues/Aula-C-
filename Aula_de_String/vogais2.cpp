#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    string b;
    char vogais[5] = {'a','e','i','o','u'};
    
    do{
    cout << "Escreva uma palavra:";
    getline(cin, a);
        
    }while(a.empty());
    
    for(int i = 0; i < a.size(); i++){
        
        for(int j = 0; j > 5; j++){
            
            if(tolower(a[i]) == vogais[j]){
                
                b += a[i];
                
            }else{
                
                
                
            }
        
        
    }
        
}
}