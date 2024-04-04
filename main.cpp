#include <iostream>
#include <vector>

#include "Interface/Estudiante.h"
#include "Interface/Trabajador.h"
#include "Interface/Secretaria.h"

using namespace std;

int main() {

    Secretaria s = *new Secretaria();

    s+=*new Estudiante("10", "Joel Alexander", "MFC ", "Cibernetica ", 2);
    s+=*new Estudiante("11", "Jose Manuel", "MFC ", "Cibernetica ", 3);
    s+=*new Estudiante("12", "Jose Ramon", "MFC ", "Cibernetica ", 2);
    s+=*new Estudiante("13", "Osbel Duardo", "MFC ", "Cibernetica ", 3);
    s+=*new Estudiante("14", "Noel Alejandro", "MFC ", "Cibernetica ", 1);

    s.addProfesor(*new Profesor("20", "Sespon", "MFC", "Ayudante de guia", 5000, "Discreta"));
    s.addProfesor(*new Profesor("21", "Beatris", "MFC", "Guia", 5500, "Base de Datos"));

    s.addTrabajador(*new Trabajador("30", "Gloria", "MFC", "Pantriz", 2100));
    s.addTrabajador(*new Trabajador("31", "Maria", "MFC", "Ausiliar de Limpieza", 2000));



    while (true){

        cout<<"1 - Estudiantes \n";
        cout<<"2 - Trabajadores \n";
        cout<<"3 - Salir \n";

        int opcion; cin>>opcion;

        if(opcion == 1){

            while(true){
                cout<<"\n";
                cout<<"1 - Agregar un Estudiante \n";
                cout<<"2 - Eliminar un Estudiante \n";
                cout<<"3 - Buscar Estudiante \n";
                cout<<"4 - Atras \n";

                cin>>opcion;

                string id;
                string nomb;
                string fac;
                string carr;
                int a;


                if(opcion == 1){

                    cout<<"Ingrese el Id Estudiante: ";
                    cin>>id;

                    cout<<"\n";

                    cout<<"Nombre: ";
                    cin>>nomb;

                    cout<<"\n";

                    cout<<"Facultad: ";
                    cin>>fac;

                    cout<<"\n";

                    cout<<"Carrera: ";
                    cin>>carr;

                    cout<<"\n";

                    cout<<"Año: ";
                    cin>>a;

                    cout<<"\n";

                    Estudiante e = *new Estudiante(id, nomb, fac, carr, a);
                    s.addEstudiante(e);
                    cout<<"El estudiante "<<e.getNombre()<< " ha sido agregado a la secretaria. \n";

                    for (int i = 0; i <s.getListaEstudiantes().size(); ++i) {
                        s.getListaEstudiantes().at(i).datos();
                    }
                }

                if(opcion == 2) {
                    cout << "Ingrese el id: ";
                    cin >> id;

                    int j = s.removeEstudiante(id);

                    if(j == -1){

                        cout<<"No existe un estudiante con ese id. \n";

                    }else{

                        for (int i = 0; i <s.getListaEstudiantes().size(); ++i) {
                            s.getListaEstudiantes().at(i).datos();
                        }

                    }

                }


                if (opcion == 3){
                    cout << "Ingrese el id: ";
                    cin >> id;

                    int i = s.buscarEstudiante(id);

                    if(i == -1){
                        cout<<"No existe un estudiante con ese id. \n";
                    }else{
                        s.getListaEstudiantes()[i].datos();
                    }

                }

                if (opcion == 4){
                    break;
                }
            }
        }

            if(opcion == 2){

                while(true){
                    cout<<"\n";
                    cout<<"1 - Agregar Trabajador\n";
                    cout<<"2 - Agregar Profesor\n";

                    cout<<"3 - Eliminar Trabajador\n";
                    cout<<"4 - Eliminar Profesor\n";

                    cout<<"5 - Buscar Trabador\n";
                    cout<<"6 - Buscar Profesor\n";

                    cout<<"7 - Atras \n";

                    cin>>opcion;

                    string id;
                    string nomb;
                    string fac;
                    string car;
                    double sa;
                    string asig;

                    if(opcion == 1){

                        cout<<"Ingrese el Id Trabajador: ";
                        cin>>id;

                        cout<<"\n";

                        cout<<"Nombre: ";
                        cin>>nomb;

                        cout<<"\n";

                        cout<<"Facultad: ";
                        cin>>fac;

                        cout<<"\n";

                        cout<<"Cargo: ";
                        cin>>car;

                        cout<<"\n";

                        cout<<"Salario: ";
                        cin>>sa;

                        cout<<"\n";

                        Trabajador t = *new Trabajador(id, nomb, fac, car, sa);
                        s.addTrabajador(t);

                        cout<<"El trabajador "<<t.getNombre()<< " ha sido agregado a la secretaria. \n";

                        for (int i = 0; i <s.getListaTrabajadores().size(); ++i) {
                            s.getListaTrabajadores().at(i).datos();
                        }
                    }

                    if(opcion == 2){

                        cout<<"Ingrese el Id Profesor: ";
                        cin>>id;

                        cout<<"\n";

                        cout<<"Nombre: ";
                        cin>>nomb;

                        cout<<"\n";

                        cout<<"Facultad: ";
                        cin>>fac;

                        cout<<"\n";

                        cout<<"Cargo: ";
                        cin>>car;

                        cout<<"\n";

                        cout<<"Salario: ";
                        cin>>sa;

                        cout<<"\n";

                        cout<<"Asignatura ";
                        cin>>asig;

                        cout<<"\n";

                        Profesor p = *new Profesor(id, nomb, fac, car, sa, asig);
                        s.addProfesor(p);

                        cout<<"El profesor "<<p.getNombre()<< " ha sido agregado a la secretaria. \n";

                        for (int i = 0; i <s.getListaProfesor().size(); ++i) {
                            s.getListaProfesor().at(i).datos();
                        }
                    }

                    if(opcion == 3) {
                        cout << "Ingrese el id: ";
                        cin >> id;

                        int j = s.removeTrabajador(id);

                        if(j == -1){

                            cout<<"No existe un trabajador con ese id. \n";

                        } else{

                            for (int i = 0; i <s.getListaTrabajadores().size(); ++i) {
                                s.getListaTrabajadores().at(i).datos();
                            }

                        }

                    }
                    if(opcion == 4) {
                        cout << "Ingrese el id: ";
                        cin >> id;

                        int j = s.removeProfesor(id);

                        if(j == -1){

                            cout<<"No existe un profesor con ese id. \n";

                        }else{

                            for (int i = 0; i <s.getListaProfesor().size(); ++i) {
                                s.getListaProfesor().at(i).datos();
                            }

                        }

                    }

                    if (opcion == 5){
                        cout << "Ingrese el id: ";
                        cin >> id;

                        int j = s.buscarTrabajador(id);

                        if(j == -1){

                            cout<<"No existe un trabajador con ese id. \n";

                        }else{

                            s.getListaTrabajadores()[j].datos();

                        }

                    }
                    if (opcion == 6) {
                        cout << "Ingrese el id: ";
                        cin >> id;

                        int j = s.buscarProfesor(id);

                        if(j == -1){

                            cout<<"No existe un profesor con ese id. \n";

                        }else{

                            s.getListaProfesor()[j].datos();

                        }

                    }

                    if (opcion == 7){
                        break;
                    }
                }
            }
        if(opcion == 3)break;

    }

    return 0;
}
