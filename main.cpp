#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";

    int a, b;

    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
<<<<<<< HEAD
         << "A * B = " << a * b << '\n';
         if (a>b)
    {
        cout <<"min="<<a;
    }
    else
    {
        cout <<"min="<<b;
    }

=======
         << "A / B = " << a / b << '\n';
    if (a>b)
    {
        cout <<"max="<<a;
    }
    else
    {
        cout <<"max="<<b;
    }
>>>>>>> f6fb8a8867a48e71544932c0611e564c589f26fd
    return 0;
}
