#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    cout << "Podaj wyraz: ";
    cin >> str;
    
    int len = str.length();
  
    cout << "Pierwszy znak: " << str[0] << endl;
    cout << "Ostatni znak: " << str[len-1];
    
    return 0;
}
