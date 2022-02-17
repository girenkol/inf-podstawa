#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    cout << "Podaj wyraz: ";
    cin >> str;
    
    int len = str.length();
    
    cout << "Pierwszy znak: " << str[0] << endl;
    cout << "Ostatni znak: " << str[len-1] << endl;

    if(str[0]!=str[len-1])
      swap(str[0], str[len-1]);
    else
      cout << "pierwszy i ostatni znak wyrazu są takie same";
    cout << "Wyraz po zmianie: " << str << endl;
    
    return 0;
}
