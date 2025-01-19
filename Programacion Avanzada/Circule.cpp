#include <iostream>
#include "source/circuleArea.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "Spanish");

    float radio, area;

    cout << "Deme el radio del circulo: ";
    cin >> radio;
    
    area = Area(radio);

    cout << "\nEl área del circulo es " << area << "\n";
}