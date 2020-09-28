#include <iostream>
//WIELKI POWROT ARMII POLCYN
using namespace std;
int main()
{
    int wiersze,kolumny,iloscpar;
    cin >> wiersze >> kolumny;
    int obraz[700][700]={};
    int pary[5000]={};
    for (int i=0;i<wiersze;i++)
    {
        for (int j=0;j<kolumny;j++)
        {
            cin >> obraz[i][j];
        }
    }
    cin >> iloscpar;
    for (int i=0;i<(iloscpar*2);i++)
    {
        cin >> pary[i];
    }

    for (int i=0;i<(iloscpar*2);i+=2)
    {
        int pierwszy=pary[i];
        int drugi=pary[i+1];
        int suma=0;
        for (int j=0;j<=pierwszy;j++)
        {
            for (int k=0;k<=drugi;k++)
            {
                suma+=obraz[j][k];
            }
        }
        cout << suma << " ";
    }
    return 0;
}
