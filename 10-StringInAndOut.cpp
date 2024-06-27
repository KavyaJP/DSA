#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter String Without Space : ";
    cin >> s1;
    cin.ignore();
    cout << "Enter String With Space : ";
    getline(cin, s2);
    cout << s1 << endl
         << s2 << endl;
    return 0;
}