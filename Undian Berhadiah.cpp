#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void solve(int *arr, int x, int size){

    vector<int> result;
    vector<int> selisih; // antara x dengan arr[i]


    for (int i = 0; i< size; i++){
        selisih.push_back(abs(arr[i] - x));
    }

    int temp = 0;
    temp = selisih[0];

    for (int i = 0; i < size; i++){
        if (temp > selisih[i]){
            temp = selisih[i];
        }
    }
    for (int i = 0; i < size; i++){
        if (abs(arr[i] - x ) == temp){
            result.push_back(arr[i]);
        }
    }

    sort(result.begin(), result.end());

    for (int i = 0; i < result.size(); i++ ){
        cout << result[i] << endl;
    }
}


int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;

    int arr[n];

    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    // cout << endl;
    solve(arr, x, n);

    return 0;
}
