#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <vector>

#include "Carrera.h"

void participantes();
void LlenarDatos(Carrera []);
std::vector<int> obtenerlinea(std::string fila);
float Ponderacion(Carrera, std::vector<int>);
/**
 * Funcion de Ordenamiento
*/
void quicksort(Carrera *,int,int);
void entraste(Carrera [], std::vector<Postulante>);
Postulante llenarPostulante(std::vector<int>);
void SetPond(Postulante *, float );
std::vector<int> vectorint(Postulante);
bool ValidarRut(std::string rut);

void probando(Carrera []);

#endif