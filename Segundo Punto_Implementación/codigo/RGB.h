#ifndef RGB_H
#define RGB_H
#include <iostream>
#include <QImage>
#include <list>
#include <fstream>
#include <vector>

using namespace std;

class RGB
{

public:
    RGB();
    void capturaRGB(QImage imagen);
    vector<int> lectura_matrix(list<list<int>> matrix);
    list<int> subMostreo(int tamX, int tamY, list<list<int> > matrix);
    void crear_txt(string name);
    void escribir_Archivo(string nombre, list<int> capturaAll_ );



private:
    int Red, Blue,Green;
    list<list<int>> RGB_lista[3];
    list<int> lista;
    string filename;
};


#endif // RGB_H
