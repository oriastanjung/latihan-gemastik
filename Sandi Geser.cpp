#include <iostream>

using namespace std;

void solve(string input, int key)
{
    int temp;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
        {
            continue;
        }
        if ((int(input[i]) >= 0 && input[i] <= '@') || (int(input[i]) >= 123 && int(input[i]) <= 127))
        {
            continue;
        }
        else if (int(input[i]) >= 41 && int(input[i]) <= 90)
        {
            temp = int(input[i]);
            if (temp + key > 90)
            {
                input[i] = char(key - (90 - temp) + 40);
            }
            else
            {
                input[i] = char(temp + key);
            }
        }
        else if (int(input[i]) >= 97 && int(input[i]) <= 122)
        {
            temp = int(input[i]);
            if (temp + key > 122)
            {
                input[i] = char(key - (122 - temp) + 96);
            }
            else
            {
                input[i] = char(temp + key);
            }
        }
    }

    cout << input << endl;
}
int main(int argc, char const *argv[])
{
    string input;
    int key;
    getline(cin, input);

    cin >> key;
    cin.ignore();

    solve(input, key);
    return 0;
}
