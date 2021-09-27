#include "RGB.h"

//void lectura_matrix(list<list<int> > matrix);
int main()
{
    string filename = "../Parcial2_info/1/codigo/bandera.jpg" ; //ubicacion del archivo
    //Tenga en cuenta que el usuario indicará la ubicación del archivo de imagen

    //con Qimage se carga la imagen al programa
    RGB matrix; //clase
    QImage imagen (filename.c_str());
    list<int> to_Tinkercad;
    matrix.capturaRGB(imagen);
    matrix.lectura_matrix(matrix.RGB_lista);
    to_Tinkercad = matrix.subMostreo(4,4,matrix.RGB_lista);
    matrix.escribir_Archivo("archivo.txt",to_Tinkercad);

    return 0;
}

