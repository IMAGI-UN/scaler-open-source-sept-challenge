#include <iostream>
using namespace std;

int main() {
    
    string str = "Smile:)";
    for (int i = 0; i < str.length(); i++) {
        
        for (int j = 0; j < str.length(); j++) {
            
            for (int k = 0; k < str.length(); k++) {
                
                cout << str[(i + k) % str.length()];
            }
            
            cout << "  ";
        }
        
        cout << "\n";
    }

    return 0;
}
