//
// Created by Joel Alexander on 4/1/2024.
//

#include "Interface/Secretaria.h"


Secretaria::Secretaria() = default;
Secretaria::~Secretaria() = default;

//Gets y Sets de los vectores atributos de la clase
vector<Estudiante> &Secretaria::getListaEstudiantes()  {
    return listaEstudiantes;
}
 vector<Trabajador> &Secretaria::getListaTrabajadores()  {
    return listaTrabajadores;
}
vector<Profesor> &Secretaria::getListaProfesor() {
    return ListaProfesor;
}


void Secretaria::setListaEstudiantes( vector<Estudiante> &listaEstudiantes) {
    Secretaria::listaEstudiantes = listaEstudiantes;
}
void Secretaria::setListaTrabajadores( vector<Trabajador> &listaTrabajadores) {
    Secretaria::listaTrabajadores = listaTrabajadores;
}
void Secretaria::setListaProfesor(vector<Profesor> &listaProfesor) {
    Secretaria::ListaProfesor = listaProfesor;
}


Trabajador Secretaria::getTrabajador(int index){
    return listaTrabajadores[index];
}
 Estudiante Secretaria::getEstudiante(int index){
    return listaEstudiantes[index];
}
Profesor Secretaria::getProfesor(int index) {
    return ListaProfesor[index];
}

//Metodos para añadir objetos a cada uno de los vectores
void Secretaria::addTrabajador(Trabajador newT){
    listaTrabajadores.push_back(newT);
}
void Secretaria::addEstudiante(Estudiante newE){
    listaEstudiantes.push_back(newE);
}
void Secretaria::addProfesor(Profesor newE){
    ListaProfesor.push_back(newE);
}


/*
 * Los metodos remove resiven como parametro un id de tipo String,
 * recorren el vector correspondiente, en caso de que encuentren el
 * id eliminan el objeto del vector e imprimen un mensaje en consola
 * que confirma que fue removido y luego retornan el indice de la posicion
 * donde se encontraba, en caso de no ser encontrado retornan -1
 * */
int Secretaria::removeEstudiante(string id) {

    for (int i = 0; i < listaEstudiantes.size(); ++i) {

        if(listaEstudiantes[i].getID() == id){

            cout << "El estudiante " << getListaEstudiantes()[i].getNombre()
                 << " ha sido eliminado de la secretaria \n";

            listaEstudiantes.erase(listaEstudiantes.begin() + i);
            return i;

        }

    }

    return -1;

}

int Secretaria::removeTrabajador(string id) {

    for (int i = 0; i < listaTrabajadores.size(); ++i) {

        if(listaTrabajadores[i].getId() == id){

            cout << "El trabajador " << getListaTrabajadores()[i].getNombre()
                 << " ha sido eliminado de la secretaria \n";

            listaTrabajadores.erase(listaTrabajadores.begin() + i);
            return i;

        }

    }

    return -1;

}

int Secretaria::removeProfesor(string id) {

    for (int i = 0; i < ListaProfesor.size(); ++i) {

        if(ListaProfesor[i].getId() == id){

            cout << "El profesor " << getListaProfesor()[i].getNombre()
                 << " ha sido eliminado de la secretaria \n";

            ListaProfesor.erase(ListaProfesor.begin() + i);
            return i;

        }

    }

    return -1;

}

void Secretaria::listaEstudiante() {

    for (Estudiante e: listaEstudiantes) {
        e.datos();
    }

}

void Secretaria::listaTrabajador() {

    for (Trabajador t: listaTrabajadores) {
        t.datos();
    }

}

int Secretaria::buscarEstudiante(string id) {

    for(int i = 0; i < listaEstudiantes.size(); ++i){

        if(listaEstudiantes[i].getID() == id)
            return i;
    }

    return -1;
}

int Secretaria::buscarTrabajador(string id) {
    for (int i = 0; i < listaTrabajadores.size(); ++i) {

        if (listaTrabajadores[i].getId() == id)
            return i;
    }
    return -1;
}

int Secretaria::buscarProfesor(string id) {
    for (int i = 0; i < ListaProfesor.size(); ++i) {

        if (ListaProfesor[i].getId() == id)
            return i;
    }

    return -1;
}

void Secretaria::operator+=(Estudiante e) {
    Secretaria::addEstudiante(e);
}








