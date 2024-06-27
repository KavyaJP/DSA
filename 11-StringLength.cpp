#include <iostream>
using namespace std;
int main()
{
    char c[50];
    int length = 0;
    cout << "Enter String : ";
    cin >> c;
    for (int i = 0; c[i] != '\0'; i++)
    {
        length++;
    }
    cout << "String " << c << " Length : " << length;
    return 0;
}