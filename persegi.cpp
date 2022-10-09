#include <iostream>

using namespace std;


int solve (int arr[][4] , int n){
    int persegi[n][2]; // (p,l), (p,l) , (p,l)

    int panjang = 0;
    int lebar = 0;
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < 4; j++){
            if(j == 0 ){
                panjang = arr[i][j];
            }
            else if(j == 1){
                lebar = arr[i][j];
            }
            else if(j == 2){
                panjang = arr[i][j] - panjang;
                persegi[i][0] = panjang;
            }
            else if(j == 3){
                lebar = arr[i][j] - lebar;
                persegi[i][1] = lebar;
            }
        }
    }
    // cout << endl;
    int luas[n];

    for (int i = 0; i < n; i++){
        luas[i] = persegi[i][0] * persegi[i][1];
    }
    int tidak_komparabel = 0;
    for (int i = 0; i< n; i++){
        for(int j = i+1; j < n; j++){
            if(luas[j] < luas[i]){
                tidak_komparabel += 1;
            }
        }
    }

    return tidak_komparabel;
}


int main(int argc, char const *argv[])
{
    
    int n ;
    cin >> n;
    int arr[n][4];

    for (int i = 0 ; i < n ; i++){
        for (int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    cout << solve (arr, n);
    // cout << endl;
    return 0;
}
