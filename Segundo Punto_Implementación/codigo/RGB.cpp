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
    lectura_matrix(RGB_lista);
}
//Se lleva toda la información de la imagen a una lista
vector<int> RGB::lectura_matrix(list<list<int> > matrix[3])
{
    vector<int> capturaAll;
    for(list<list<int>>::iterator itPrueba = matrix->begin(); itPrueba!=matrix->end();++itPrueba){
        for(list<int>::iterator cap=itPrueba->begin();cap!=itPrueba->end();++cap){
            capturaAll.push_back(*cap);
        }
    }
    return capturaAll;
}

list<int> RGB::subMostreo(int tamX, int tamY, list<list<int> > matrix[3])
{
    vector<int> matriz;
    list<int> lista_to_TinkerCad;
    matriz = lectura_matrix(matrix);
    //matriz = lectura_matrix(matrix);
    int LEDS = 2;
    int bloquesX_ = tamX, bloquesY_ = tamY;
    int bloquesX = tamX/LEDS, bloquesY = tamY/LEDS;

    int promAcumuladoRed   = 0;
    int promAcumuladoGreen = 0;
    int promAcumuladoBlue  = 0;

    int acumuladorX=0;
    int acumuladorY=0;

    int condicion = (bloquesX_*bloquesY_);

    int condicional1 = 0, condicional2 = 0;

    int cuadros = 0;

    while(condicional1!=LEDS*LEDS && condicional2!=LEDS*LEDS){
        acumuladorX = 0; acumuladorY = 0;

        for(int filas=0, vecInternoX=0, vecInternoY=3; filas < bloquesY; filas++, vecInternoX+=3, vecInternoY+=3){
            acumuladorX+= matriz[vecInternoX+cuadros*bloquesX];
            acumuladorY+= matriz[vecInternoY+cuadros*bloquesY];

        }

        promAcumuladoRed = (acumuladorX+acumuladorY)/(LEDS*LEDS);
        lista_to_TinkerCad.push_back(promAcumuladoRed);
        acumuladorX = 0; acumuladorY = 0;

        for(int filas=0, vecInternoX=condicion, vecInternoY=condicion+3; filas < bloquesY; filas++, vecInternoX+=3, vecInternoY+=3){
            acumuladorX+= matriz[vecInternoX+cuadros*bloquesX];
            acumuladorY+= matriz[vecInternoY+cuadros*bloquesY];
        }

        promAcumuladoGreen = (acumuladorX+acumuladorY)/(LEDS*LEDS);
        lista_to_TinkerCad.push_back(promAcumuladoGreen);
        acumuladorX = 0; acumuladorY = 0;

        for(int filas=0, vecInternoX=(condicion*2), vecInternoY=(condicion*2)+3; filas < bloquesY; filas++, vecInternoX+=3, vecInternoY+=3){
            acumuladorX+= matriz[vecInternoX+cuadros*bloquesX];
            acumuladorY+= matriz[vecInternoY+cuadros*bloquesY];
        }

        promAcumuladoBlue = (acumuladorX+acumuladorY)/(LEDS*LEDS);
        lista_to_TinkerCad.push_back(promAcumuladoBlue);

        condicional1++;
        condicional2++;
        cuadros+=3;
    }


    /*
    for(int inicio = 0; inicio < bloquesY-1; inicio++){
        for(int final = 0; final < bloquesX-1; final++){
            matRed[inicio][final] = promAcumuladoRed;
        }
    }*/

    //promedio += matriz[vecInterno];

    //matGreen[filas+1][columnas+condicion] = matriz[vecInterno+condicion];
    //matBlue[filas+2][columnas+(condicion*2)] = matriz[vecInterno+(condicion*2)];
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
    /*
    for(int filas=0; filas < LEDS; filas++){
        for(int columnas=0, vecInterno=condicion; columnas < LEDS; columnas++, vecInterno++){
            matGreen[filas][columnas] = matriz[vecInterno+condicion];}}
    for(int filas=0; filas < LEDS; filas++){
        for(int columnas=0, vecInterno=32; columnas < LEDS; columnas++, vecInterno++){
            matBlue[filas][columnas] = matriz[vecInterno];}}*/

    //Matriz Red:

    //Matriz Green:
    //Matriz Blue:
    return lista_to_TinkerCad;
}
void RGB:: crear_txt(string name){
    fstream text (name,fstream::out); //abre modo escritura, si no exite  lo crea
    text.close();
}

void RGB::escribir_Archivo(string nombre,list<int> capturaAll_)
{
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
