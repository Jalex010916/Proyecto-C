//
// Created by Joel Alexander on 3/31/2024.
//

#ifndef FACULTAD_PROFESOR_H
#define FACULTAD_PROFESOR_H

#include "Trabajador.h"
#include <string>
using namespace std;

class Profesor : public Trabajador {
private:
    string asignatura;

public:
    Profesor( string id,  string nombre,  string facultad,  string cargo, double salario,
              string asignatura);

    ~Profesor();

     string &getAsignatura() ;

    void setAsignatura( string &asignatura);

    void datos();
};


#endif //FACULTAD_PROFESOR_H
