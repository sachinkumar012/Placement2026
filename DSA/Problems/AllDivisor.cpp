#include <bits/stdc++.h>
using namespace std;

void divisor(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    divisor(n);
}