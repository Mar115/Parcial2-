#include "RGB.h"

void lectura_matrix(list<list<int> > matrix);

int main()

//ImageRead e ImageWrite desarrollado en Qt para que pueda entender como es el proceso de cargar una imagen desde su directorio de trabajo y cómo generarla.

{
    string filename = "../parcial2:info2/1/imagen/bandera.jpg"; //ubicacion del archivo
    //Tenga en cuenta que el usuario indicará la ubicación del archivo de imagen

    //con Qimage se carga la imagen al programa
    RGB matrix; //clase
    QImage imagen (filename.c_str());
    matrix.capturaRGB(imagen);

    // *************************************** Código para TinkerCad **********************************************
    /*
    IDEAS:  1. Diseñar la matriz
            2. Diseñar función para escribir en un archivo .txt

    */
    list<list<int>> pruebA = {{{1,2,3}},
                              {{4,5,6}},
                              {{7,8,9}}};
    lectura_matrix(pruebA);
    return 0;
}

void lectura_matrix(list<list<int>> matrix){
    list<int> cap;
    int capturaRed, capturaGreen, capturaBlue;

    int i = 0;

    for( list<list<int>>::iterator it=matrix.begin(); it != matrix.end(); ++it ){ //apuntador a la primera posición de la lista
        //de dimension 3
        cap = *it;

        for( list<int>::iterator indx=it->begin(); indx!=it->end(); ++indx ){//apuntador que apunta a la primera dirección
            //del primer apuntador

            capturaRed = *indx;
            cout << capturaRed << endl;
            //PARA RED:
            //Necesito la primera posición de "cap" y el primer valor de "capturaRed"

            //PARA GREEN:
            //Necesito la segunda posición de "cap" y el segundo valor de "capturaGreen"

            //PARA BLUE:
            //Necesito la tercera posición de "cap" y el primer valor de "capturaBlue"
        }
        //leds.setPixelColor(i, capturaRed[0], capturaGreen[0], capturaBlue[0]);
        //NO OLVIDAR AUMENTAR i
    }
}
