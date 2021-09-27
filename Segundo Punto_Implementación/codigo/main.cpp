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


    list<list<int>> pruebA =  {{{184,19,175, 184,19,175, 184,19,175, 184,19,175, 184,19,175, 184,19,175, 184,19,175, 184,19,175}},

                              {{160,27,25, 160,27,25, 160,27,25, 160,27,25}},

                              {{8, 126,24, 8, 126,24, 8, 126,24, 8, 126,24}}
                              };

     //                         R,G,B
    /*int pruebaB[3][3][3] = {{{1,2,3}},
                         {{4,5,6}},
                         {{7,8,9}}};*/
    //lectura_matrix(pruebA);
    //matrix.lectura_matrix(pruebA);
    matrix.sobreMostreo(12,12, pruebA);
    matrix.escribir_Archivo("archivo.txt",pruebA);
    return 0;
}

