#pragma once
#include <iostream>
#include <algorithm>
#include <list>
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp" 
using namespace std;
using namespace sf;

class Node{
public:
	Node(string name);
	string GetName();
	Sprite GetScreen();
	void SetScreen(string img);
	list<Node*> matrix;
private:
	string name;
	Texture texture;
	Sprite sprite;
	string img;
};

