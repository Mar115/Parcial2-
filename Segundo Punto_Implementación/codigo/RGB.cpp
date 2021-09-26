#include "RGB.h"

RGB::RGB()
{
}

void RGB::capturaRGB(QImage imagen)
{

    for (int indx=0;indx<imagen.width(); ++indx){
       for (int indy=0;indy<imagen.height(); ++indy){
           Red= imagen.pixelColor(indx, indy).red();
           Green= imagen.pixelColor(indx, indy).green();
           Blue= imagen.pixelColor(indx, indy).blue();
           lista.push_back(Red);
           RGB_lista[0].push_back(lista);
           lista.clear();
           lista.push_back(Green);
           RGB_lista[1].push_back(lista);
           lista.clear();
           lista.push_back(Blue);
           RGB_lista[2].push_back(lista);
           lista.clear();
       }
    }
}

list<int> RGB::lectura_matrix(list<list<int> > matrix)
{
    list<int> capturaAll;
    //list<int> end;

    for(list<list<int>>::iterator itPrueba = matrix.begin(); itPrueba!=matrix.end();++itPrueba){
        for(list<int>::iterator cap=itPrueba->begin();cap!=itPrueba->end();++cap){
            capturaAll.push_back(*cap);
        }
    }
    return capturaAll;
}
void RGB:: crear_txt(string name){
    fstream text (name,fstream::out); //abre modo escritura, si no exite  lo crea
    text.close();
}

void RGB::escribir_Archivo(string nombre,list<list<int> > matrix )
{
    list<int> data;
    list<int> capturaAll_;
    fstream text (nombre, fstream::out);
    capturaAll_=lectura_matrix(matrix);
    for(list<int>::iterator values = capturaAll_.begin(); values!=capturaAll_.end();++values){
        text << *values << ',';
        cout << *values << ',';
        //text<<&capturaAll_;
    }
    text.close();
}

/*void RGB::escribir_Archivo(RGB datos)
{
    fstream matriz;
    string nombre = "Archivo.txt";
    matriz.open(nombre, fstream::out);
    matriz<<&datos;
    //matriz.write(datos, tamanio);
    matriz.close();
}*/
