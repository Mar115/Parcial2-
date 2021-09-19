#include <iostream>
#include <QImage>

using namespace std;

int main()
{
    string filename = "../parcial2-info2/imagen/imagen.jpg"; //ubicacin del archivo,Tenga en cuenta que el usuario indicará la ubicación del archivo de imagen
    QImage imagen (filename.c_str());

    unsigned int pixel_x =200;//ubicacion en x y
    unsigned int pixel_y =200;//retorna el color del pixel
    cout<<imagen.pixelColor(pixel_x, pixel_y).red()<<endl;
    cout<<imagen.pixelColor(pixel_x, pixel_y).green()<<endl;
    cout<<imagen.pixelColor(pixel_x, pixel_y).blue()<<endl;

   for (int indx=0;indx<imagen.width(); ++indx)
       for (int indy=0;indy<imagen.height(); ++indy)
           cout<< indx <<" , " <<indy<<" , " << imagen.pixelColor(indx, indy).red()<<endl;




    return 0;
}

//con qimage se carga la imagen al prorama
