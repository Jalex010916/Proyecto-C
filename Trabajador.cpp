//
// Created by Joel Alexander on 3/31/2024.
//

#include "Interface/Trabajador.h"

Trabajador::Trabajador( string id,  string nombre,  string facultad,  string cargo,
                       double salario) : id(id), nombre(nombre), facultad(facultad), cargo(cargo), salario(salario) {}

Trabajador::~Trabajador() {

}

 string &Trabajador::getId()  {
    return id;
}

void Trabajador::setId( string &id) {
    Trabajador::id = id;
}

 string &Trabajador::getNombre()  {
    return nombre;
}

void Trabajador::setNombre( string &nombre) {
    Trabajador::nombre = nombre;
}

 string &Trabajador::getFacultad()  {
    return facultad;
}

void Trabajador::setFacultad( string &facultad) {
    Trabajador::facultad = facultad;
}

 string &Trabajador::getCargo()  {
    return cargo;
}

void Trabajador::setCargo( string &cargo) {
    Trabajador::cargo = cargo;
}

double Trabajador::getSalario()  {
    return salario;
}

void Trabajador::setSalario(double salario) {
    Trabajador::salario = salario;
}

void Trabajador::datos() {
    cout<<"Trabajador: " << nombre << " Carnet: "<< id +" Facultad: " <<
           facultad << " Cargo: " << cargo << " Salario: " << to_string(salario)<<" \n" ;
}
