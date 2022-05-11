#include <iostream>
#include "include/Object.hpp"

using namespace std;

int main(){
    //Sólo se construirán Vertex y Face (no utilizar Edge)
    cout << "Cargando... " << endl;
    //Object bunny_1500("models/bunny-1500.ply");
    //Object car("models/car.ply");
    Object golf("models/golf.ply");
    Object putter("models/putter.ply");
    Object flag("models/flag.ply");
    //Object cube("models/cube1x1.ply");
    //Object happyReduced("models/happyReduced.ply"); 
    //Object lamp600("models/lamp600.ply");
    //Object mono("models/mono.ply");
    //Object teapot("models/teapot.ply");
    cout << "Listo" << endl << endl;
    
    //cout << "Bunny 1500" << endl;bunny_1500.print();cout << endl;
    //cout << "Car" << endl;car.print();cout << endl;
    cout << "Golf" << endl;golf.print();cout << endl;
    cout << "Putter" << endl;putter.print();cout << endl;
    cout << "Flag" << endl;flag.print();cout << endl;
    //cout << "Cube" << endl;cube.print();cout << endl;
    //cout << "Happy Reduced" << endl;happyReduced.priputternt();cout << endl;
    //cout << "Lamp 1600" << endl;lamp600.print();cout << endl;
    //cout << "Mono" << endl;mono.print();cout << endl;
    //cout << "Teapot" << endl;teapot.print();cout << endl;
}