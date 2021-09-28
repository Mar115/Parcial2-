#include "RGB.h"

//void lectura_matrix(list<list<int> > matrix);
int main()
{
    string filename;    cout<<"Ingrese la ubicacion de la imagen: " << endl;
    cin>>filename;
    //string filename = "../Parcial2_info/1/codigo/bandera.jpg" ; //ubicacion del archivo
    //con Qimage se carga la imagen al programa
    RGB matrix; //clase
    QImage imagen (filename.c_str());
    list<int> to_Tinkercad;
    matrix.capturaRGB(imagen);
    matrix.lectura_matrix(matrix.RGB_lista);
    to_Tinkercad = matrix.subMostreo(imagen.width(),imagen.height(),matrix.RGB_lista);
    matrix.escribir_Archivo("archivo.txt",to_Tinkercad);
    return 0;
}

