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
    list<int> to_Tinkercad;


    // *************************************** Código para TinkerCad **********************************************
    /*
    IDEAS:  1. Diseñar la matriz
            2. Diseñar función para escribir en un archivo .txt*/

/*
    list<list<int>> pruebA =  {{{184,19,175, 184,19,175, 184,19,175, 184,19,175, 184,19,175, 184,19,175, 184,19,175, 184,19,175}},

                              {{160,27,25, 160,27,25, 160,27,25, 160,27,25}},

                              {{8, 126,24, 8, 126,24, 8, 126,24, 8, 126,24}}
                              };*/
    list<list<int>> pruebA =  {{{184,19,175,184,19,175, 184,19,175, 184,19,175, 184,19,175,184}},

                              {{160,27,25, 160,27,25, 160,27,25, 160,27,25, 160,27,25,160}},

                              {{8, 126,24, 8, 126,24, 8, 126,24, 8, 126,24, 8, 126,24,8}},

                              {{8, 126,24, 8, 126,24, 8, 126,24, 8, 126,24, 8, 126,24,8}}
                              };



    /*
    int suma;
    suma = ((184+19+175)*4)+184;
    int fin;
    fin = (suma)/(4*4);
    cout << fin << endl;*/

     //                         R,G,B
    /*int pruebaB[3][3][3] = {{{1,2,3}},
                         {{4,5,6}},
                         {{7,8,9}}};*/
    //lectura_matrix(pruebA);
    //matrix.lectura_matrix(pruebA);
    to_Tinkercad=matrix.subMostreo(4,4, pruebA);
    matrix.escribir_Archivo("archivo.txt",to_Tinkercad);
    return 0;
}

