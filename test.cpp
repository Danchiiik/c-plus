#include <iostream>
#include <cstdlib>
using namespace std;



int main() { int a, k, b; char l(50);

while (true)
{
    cout << "Do you want to play? y/n" << endl;
    cin >> l;

    if (l=='y')
    {
        cout << "Hello, its randomizer game" << endl;
        cout << "Enter the max value of randomizer: ";
        cin >> a;
        k = (rand() %a) + 1;
        cout << "Choose one number: ";
        cin >> b;
        
        while (b > a)
        {
            cout << "Its bigger than you entered at first" << endl;
            cout << "Choose one number: ";
            cin >> b;
        }
        if (k == b)
        {
            cout << "Congratulations, you won" << endl;
        }
        else
            cout << "Sorry, but you lost. Right answer was " << k << endl;
        }
        
    else if (l=='n')
    {
    cout << "Ok, good bye!" << endl;
    break;
    }
}
}


