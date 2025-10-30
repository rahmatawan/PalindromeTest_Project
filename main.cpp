#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() 
{
    string teks;
    bool palindrom = true;

    whlie (true)
    {
        cout << "enter teks: ";
        getline(cin, teks);
        int n = teks.length();

        for (int i = 0; i < n / 2; i++) {
            for (int j = n - 1 - i; j < n; j++) {
                if (isalnum(teks[i] && teks[j])) {
                    if (tolower(teks[i]) != tolower(teks[j])) {
                        palindrom = false;
                        break;
                    }
                }
            }
        }

        if (!palindrom)
            cout << "\"" << teks << "\"" << " is not palindrome." << endl;
        else
             cout << "\"" << teks << "\"" << " is palindrome." << endl;
    }
    
        system("pause");
        return 0;
}

