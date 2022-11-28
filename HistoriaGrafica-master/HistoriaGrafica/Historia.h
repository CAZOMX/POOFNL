#pragma once
#include <iostream>
#include <algorithm>
#include <list>
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "Node.h"
using namespace std;
using namespace sf;

class Historia{
public:
	Historia(int width, int height, string title);
	void Mostrar();
	void Llenar_Ma();
	void Loop();
	Node* Examen = new Node("Examen");
	Node* Grande = new Node("1.Grande");//pasar
	Node* Pequena = new Node("2.Pequena");//reprobar
	Node* Publico = new Node("4.Publico");
	Node* Propio = new Node("3.Propio");
	Node* Renunciar = new Node("6.Renunciar");
	Node* Seguir = new Node("5.Seguir");
	Node* Fin = new Node("0.Fin");
private:
	RenderWindow* ventana;
	int fps;
};

