#include <iostream>
using namespace std;

int main() {
    int mainIn = 0;
    
    cout << "Count to > ";
    cin >> mainIn;
    
    for(int i = 0; i <= mainIn; ++i){
        cout << i << " ";
    }
}
