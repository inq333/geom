#include <iostream>
#include "torus.h"
#include <string>
#include <fstream>
using namespace std;


int main()
{
    string name;
    cout << "Which object to create? (torus, ball, cylinder, cone)\n";
    cin >> name;
    if (name == "torus")
    {
        ofstream out("../storage/item.txt");
        out << '1'; // torus key
        out.close();
        Torus tor;
        double temp;
        cout << "Radius: " << endl;
        cin >> temp;
        tor.set_radius(temp);
        cout << "Minor radius: " << endl;
        cin >> temp;
        tor.set_distance(temp);
        ofstream out("../storage/torus.txt", ios::binary | ios::out);
        if (out)
        {
            out.write((char*)&tor, sizeof(tor));
        }
    }
    if (name == "ball")
    {
        ofstream out("../storage/item.txt");
        out << '2'; // ball key
        out.close();
        Ball
    }
    return 0;
}