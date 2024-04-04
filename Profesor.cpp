//
// Created by Joel Alexander on 3/31/2024.
//

#include "Interface/Profesor.h"

Profesor::Profesor( string id,  string nombre,  string facultad,  string cargo, double salario,
                    string asignatura) : Trabajador(id, nombre, facultad, cargo, salario),
                                               asignatura(asignatura) {}

Profesor::~Profesor() {

}

 string &Profesor::getAsignatura()  {
    return asignatura;
}

void Profesor::setAsignatura( string &asignatura) {
    Profesor::asignatura = asignatura;
}

void Profesor::datos() {
    cout<<"Trabajador: " << nombre << " Carnet: "<< id <<" Facultad: " +
           facultad << " Cargo: " << cargo << "Asignatura: " << asignatura + " Salario: " << to_string(salario) << "\n";
}