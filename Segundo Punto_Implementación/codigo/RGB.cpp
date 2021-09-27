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
//Se lleva toda la información de la imagen a una lista
vector<int> RGB::lectura_matrix(list<list<int> > matrix)
{
    vector<int> capturaAll;
    //list<int> end;

    for(list<list<int>>::iterator itPrueba = matrix.begin(); itPrueba!=matrix.end();++itPrueba){
        for(list<int>::iterator cap=itPrueba->begin();cap!=itPrueba->end();++cap){
            capturaAll.push_back(*cap);
        }
    }
    return capturaAll;
}

void RGB::sobreMostreo(int tamX, int tamY, list<list<int> > matrix)
{
    vector<int> matriz;
    matriz = lectura_matrix(matrix);
    int LEDS = 4;
    int bloquesX = tamX/LEDS, bloquesY = tamY/LEDS;
    int matRed[LEDS][LEDS];
    int matGreen[LEDS][LEDS];
    int matBlue[LEDS][LEDS];


    int condicion = 16;
    for(int filas=0; filas < LEDS; filas++){
        for(int columnas=0, vecInterno=0; columnas < LEDS; columnas++, vecInterno++){
            matRed[filas][columnas] = matriz[vecInterno];
            //matGreen[filas+1][columnas+condicion] = matriz[vecInterno+condicion];
            //matBlue[filas+2][columnas+(condicion*2)] = matriz[vecInterno+(condicion*2)];
        for(int columnas=0, vecInterno=0; columnas < LEDS; columnas++, vecInterno++){
            matGreen[filas][columnas] = matriz[vecInterno];}
            /*else if(filas<condicion*2 && filas<condicion){
                matGreen[filas][columnas] = *cap;
            }*/
            /*else if((filas%2==1 && filas<bloquesX)){

            }*/
            //vector<int>::iterator cap=matriz.begin();cap!=matriz.end();++cap
            /*
            matRed[externo][interno] = (*cap);
            cout << matRed[externo][interno]<< endl;
            interno++;*/
           // promedio+= (matRed[externo][interno]);
        }


        //promedio = (1/LEDS*LEDS);
    }

    //Matriz Red:

    //Matriz Green:
    //Matriz Blue:
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
    //capturaAll_=lectura_matrix(matrix);
    for(list<int>::iterator values = capturaAll_.begin(); values!=capturaAll_.end();++values){
        text << *values << ',';
        //cout << *values << ',';

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

//vector<int>::iterator cap=matriz.begin();cap!=matriz.end();++cap
