#include <iostream>

using namespace std;

void solve (string input, int xt, int yt){
    int x0, y0;
    int m = 0;
    int n = 0;

    // utara (u) ==> y0 + 1
    // selatan (s) ==> y0 - 1
    // timur (t)  ==> x0 + 1
    // barat (b) ==> x0-1
    for (int i = 0; i < input.length(); i++){
        if (input[i] == 't'){
            m += 1;
        }else if (input[i] == 'b'){
            m -= 1;
        }else if (input[i] == 'u'){
            n += 1;
        }else if (input[i] == 's'){
            n -= 1;
        }
    }

    x0 = xt-m;
    y0 = yt-n;

    cout << x0 << " " << y0;
}


int main()
{
    
    int xt, yt;
    
    string perjalanan;
    cin >> xt >> yt;

    cin.ignore();
    getline(cin, perjalanan);

    solve(perjalanan, xt, yt);

    return 0;
}
