#include "RGB.h"

//void lectura_matrix(list<list<int> > matrix);
int main()
{
    string filename = "../Parcial2_info/1/codigo/bandera.jpg" ; //ubicacion del archivo
    //Tenga en cuenta que el usuario indicará la ubicación del archivo de imagen

    //con Qimage se carga la imagen al programa
    RGB matrix; //clase
    QImage imagen (filename.c_str());
    matrix.capturaRGB(imagen);


    // *************************************** Código para TinkerCad **********************************************
    /*
    IDEAS:  1. Diseñar la matriz
            2. Diseñar función para escribir en un archivo .txt*/

     //                       R,G,B
    list<list<int>> pruebA = {{{1,2,3}},
                              {{4,5,6}},
                              {{7,8,9}}};
    /*int pruebaB[3][3][3] = {{{1,2,3}},
                         {{4,5,6}},
                         {{7,8,9}}};*/
    //lectura_matrix(pruebA);
    //matrix.lectura_matrix(pruebA);
    matrix.escribir_Archivo("archivo.txt",pruebA);
    return 0;
}

