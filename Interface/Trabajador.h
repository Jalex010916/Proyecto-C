//
// Created by Joel Alexander on 3/31/2024.
//

#ifndef FACULTAD_TRABAJADOR_H
#define FACULTAD_TRABAJADOR_H

#include <string>
#include <iostream>
using namespace std;

class Trabajador {
protected:
    string id;
    string nombre;
    string facultad;
    string cargo;
    double salario;

public:
    Trabajador( string id,  string nombre,  string facultad,  string cargo, double salario);
    ~Trabajador();

     string &getId() ;

    void setId( string &id);

     string &getNombre() ;

    void setNombre( string &nombre);

     string &getFacultad() ;

    void setFacultad( string &facultad);

     string &getCargo() ;

    void setCargo( string &cargo);

    double getSalario() ;

    void setSalario(double salario);


    void datos();
};


#endif //FACULTAD_TRABAJADOR_H
