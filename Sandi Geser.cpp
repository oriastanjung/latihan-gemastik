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
        else if (input[i] >= 'A' && input[i] <= 'Z')
        {
            temp = int(input[i]);
            if (temp + key > 90)
            {
                input[i] = char(key - (90 - temp) + 64);
            }
            else if (temp + key < 65)
            {
                input[i] = char(91 + (key - (65 - temp)));
            }
            else
            {
                input[i] = char(temp + key);
            }
        }
        else if (input[i] >= 'a' && input[i] <= 'z')
        {
            temp = int(input[i]);
            if (temp + key > 122)
            {
                input[i] = char(key - (122 - temp) + 96);
            }
            else if (temp + key < 97)
            {
                input[i] = char(123 + (key - (97 - temp)));
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
