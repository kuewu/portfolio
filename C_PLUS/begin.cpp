#include <iostream>
using namespace std;

// beginning the c++
int name = 5, x = 3, y = 8;
cout << name;
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // int x,y,z;
    // x = 4;
    // y = 4;
    // z = 89;
    // cout << x+y+z  << endl;
    int name;
    cout << "type a number: ";
    cin >> name;
    cout << " your num is " << name;
    // another input style
    int x, y;
    int sum;
    cout << "type a number: ";
    cin >> x;
    cout << "type a number again: ";

    cin >> y;
    sum = x + y;
    cout << " your num is " << sum << endl;
    cout << (x < 5 && x > 5);
    // leys concatenate strings
    string first_name;
    string second_name;

    cout << "enter your first name: " << endl;
    cin >> first_name;

    cout << "enter your second name: " << endl;
    cin >> second_name;

    string full_name = first_name + " " + second_name;
    cout << full_name << endl;

    string ful_name = first_name.append(second_name);
    cout << ful_name << endl;

    // lets check the string length
    string nam = "eycgwafcisfffs";
    cout << nam.length();
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // int x,y,z;
    // x = 4;
    // y = 4;
    // z = 89;
    // cout << x+y+z  << endl;
    int name;
    cout << "type a number: ";
    cin >> name;
    cout << " your num is " << name;
    // another input style
    int x, y;
    int sum;
    cout << "type a number: ";
    cin >> x;
    cout << "type a number again: ";

    cin >> y;
    sum = x + y;
    cout << " your num is " << sum << endl;
    cout << (x < 5 && x > 5);
    // leys concatenate strings
    string first_name;
    string second_name;

    cout << "enter your first name: " << endl;
    cin >> first_name;

    cout << "enter your second name: " << endl;
    cin >> second_name;

    string full_name = first_name + " " + second_name;
    cout << full_name << endl;

    string ful_name = first_name.append(second_name);
    cout << ful_name << endl;

    // lets check the string length
    string nam = "eycgwafcisfffs";
    cout << nam.length();
    return 0;
}
