#include <iostream>
using namespace std;
#include <vector>
int main() 
{
    int n, i;
    string nazmin, nomin;
    float min;
    cout << "quanti atleti ci sono?" << endl;
    cin>>n;
    vector<string>nomi(n);
    vector<string>nazionali(n);
    vector<float>tempi(n);
    i=0;
    min=0;
    while (i<n)
    {
        cout << "come si chiama l'atleta" <<endl;
        cin >> nomi[i];
        cout << "quale nazionale rappresenta" << endl;
        cin >> nazionali[i];
        cout << "qual è il suo tempo?" << endl;
        cin >> tempi[i];
        if ( tempi[min]<tempi[i])
        {

        }
        else
        {
            tempi[min] = tempi[i];
            nazmin = nazionali[i];
            nomin = nomi[i];
        }
        i=i+1;
    }
    i=0;
    while (i<n)
    {
        cout << "l'atleta " << nomi[i] << " rappresenta la nazionale " << nazionali[i] << " e ha un tempo di " << tempi[i] << " secondi." << endl;
        i=i+1;
    }
    cout << "il vincitore è " << nomin << ", rappresentante della nazione " << nazmin << ", con un tempo di " << tempi[min] << " secondi." << endl;
}


//LEGGERE LE ISTRUZIONI NEL FILE README.md
