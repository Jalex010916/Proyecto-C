//
// Created by Joel Alexander on 3/30/2024.
//

#ifndef FACULTAD_ESTUDIANTE_H
#define FACULTAD_ESTUDIANTE_H

#include <string>
#include <iostream>
using namespace std;

class Estudiante {
private:
    string id;
    string nombre;
    string facultad;
    string carrera;
    int anno;

public:
    Estudiante(string, string, string, string, int);
    ~Estudiante();

    string getID();
    string getNombre();
    string getFacultad();
    string getCarrera();
    int getAnno();
    void setID(string);
    void setNombre(string);
    void setFacultad(string);
    void setCarrera(string);
    void setAnno(int);

    void datos();
};


#endif //FACULTAD_ESTUDIANTE_H
