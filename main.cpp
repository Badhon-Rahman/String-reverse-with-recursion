#include <iostream>

using namespace std;

void StringReverseRecursion(string str, int strSize){
          if(strSize < 0){
            cout << endl;
          }
          else{
            cout << str[strSize - 1];
            StringReverseRecursion(str, strSize - 1);
        }
}

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    int strSize = str.length();
    StringReverseRecursion(str, strSize);
    return 0;
}
