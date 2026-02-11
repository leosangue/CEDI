#pragma once
#include<iostream>
#include<string>
#include "videojuego.hpp"
#include<vector>
using namespace std;

float calcularVentaTotal(vector<Videojuego> a);
void mostrarJuegosDeGenero(vector<Videojuego> a, string b);
vector<Videojuego> aplicarDescuentoGeneral(vector<Videojuego> &a,float b);
