#include <iostream>

using namespace std;

int drone[4][4];
int jalur;

void periksa(int dronesekarang, int droneasal, int dronetujuan, int makslangkah, int jumlahlangkah)
{
    int i;
    int jumlahtujuan = 0;
    int status = 0;
    if (jumlahlangkah == makslangkah)
    {
        return;
    }
    else
    {
        if (jumlahlangkah < makslangkah)
        {
            jumlahlangkah++;

            for (i = 0; i < 4; i++)
            {
                if (drone[dronesekarang][i] == 1)
                {
                    jumlahtujuan++;
                    periksa(i, droneasal, dronetujuan, makslangkah, jumlahlangkah);
                    if (jumlahtujuan > 1)
                        jalur++;
                }
            }
        }
        // return status;
    }
}

int main()
{
    int i, j, m, a, b;
    cin >> i >> j;
    cin >> m;
    for (a = 0; a < 4; a++)
        cin >> drone[a][0] >> drone[a][1] >> drone[a][2] >> drone[a][3];
    jalur = 1;
    periksa(i, i, j, m, 0);
    cout << jalur << endl;
    return 0;
}
