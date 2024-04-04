//
// Created by Joel Alexander on 4/1/2024.
//

#ifndef FACULTAD_SECRETARIA_H
#define FACULTAD_SECRETARIA_H

#include <vector>
#include "Estudiante.h"
#include "Trabajador.h"
#include "Profesor.h"


class Secretaria {

private:
    vector<Estudiante> listaEstudiantes;
    vector<Trabajador> listaTrabajadores;
    vector<Profesor> ListaProfesor;


public:
    Secretaria();
    ~Secretaria();

     vector<Estudiante> &getListaEstudiantes() ;
     vector<Trabajador> &getListaTrabajadores() ;
    vector<Profesor> &getListaProfesor() ;


    void setListaEstudiantes( vector<Estudiante> &listaEstudiantes);
    void setListaTrabajadores( vector<Trabajador> &listaTrabajadores);
    void setListaProfesor( vector<Profesor> &listaProfesor);


     Trabajador getTrabajador(int index);
     Estudiante getEstudiante(int index);
     Profesor getProfesor(int index);


    void addTrabajador(Trabajador newT);
    void addEstudiante(Estudiante newE);
    void addProfesor(Profesor newE);


    int removeEstudiante(string id);
    int removeTrabajador(string id);
    int removeProfesor(string id);


    void listaEstudiante();
    void listaTrabajador();

    void operator+=(Estudiante e);

    int buscarEstudiante(string id);
    int buscarTrabajador(string id);
    int buscarProfesor(string id);
};


#endif //FACULTAD_SECRETARIA_H
