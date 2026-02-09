#pragma once
#include <string>
#include<iostream>
#include<vector>
#include "libro.hpp"
using namespace std;

float calcularValorTotal(vector<Libro> b);
void mostrarLibrosDeAutor(vector<Libro> b,string c);
vector<Libro> ajustarPreciosPorInflacion(vector<Libro> b, float c);