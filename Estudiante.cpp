//
// Created by Joel Alexander on 3/30/2024.
//

#include "Interface/Estudiante.h"

Estudiante::Estudiante(string id, string nombre, string facultad, string carrera, int anno) {

    this->id = id;
    this->nombre = nombre;
    this->facultad = facultad;
    this->carrera = carrera;
    this->anno = anno;

}
Estudiante::~Estudiante() {}

string Estudiante::getID() {
    return this->id;
}

string Estudiante::getNombre() {
    return this->nombre;
}

string Estudiante::getFacultad() {
    return this->facultad;
}

string Estudiante::getCarrera() {
    return this->carrera;
}

int Estudiante::getAnno() {
    return this->anno;
}


void Estudiante::setID(string id) {
    this->id = id;
}
void Estudiante::setNombre(string)  {
    this->nombre = nombre;
}
void Estudiante::setFacultad(string facultad) {
    this->facultad = facultad;
}

void Estudiante::setCarrera(string carrera) {
    this->carrera = carrera;
}

void Estudiante::setAnno(int anno) {
    this->anno = anno;
}

void Estudiante::datos() {
    cout<<"Estudiante: " <<nombre<< " Carnet: "<<id<<" Facultad: " <<facultad<<" Carrera: "<<carrera<< " anno: " <<anno<<"\n";
}
