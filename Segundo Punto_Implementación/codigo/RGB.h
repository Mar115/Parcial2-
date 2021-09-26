#ifndef RGB_H
#define RGB_H
#include <iostream>
#include <QImage>
#include <list>
#include <fstream>

using namespace std;

class RGB
{

public:
    RGB();
    void capturaRGB(QImage imagen);
    list<int> lectura_matrix(list<list<int>> matrix);
    void crear_txt(string name);
    void escribir_Archivo(string nombre,list<list<int> > matrix );



private:
    int Red, Blue,Green;
    list<list<int>> RGB_lista[3];
    list<int> lista;
    string filename;
};


#endif // RGB_H
