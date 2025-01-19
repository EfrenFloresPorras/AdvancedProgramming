#ifndef MESSAGE_H
#define MESSAGE_H

using namespace std;

string greeting(){
    string name;

    cout << "\nIngrese su nombre: " << endl;
    cin >> name;

    string frase  = "Hola " + name + ", bienvenido al menú";

    return frase;

}

#endif