#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
    cout << "Podaj wyraz: ";
    cin >> str;
    
    int len = str.length();

    for(int i=0; i<len; i++)
      if(i%2==1)
        str[i] = 'x';
  
    cout << "Wyraz po zmianie: " << str << endl;
    
    return 0;
}
