#include "SFML/Graphics.hpp"
#include "iostream"

using namespace std;
using namespace sf;

//TRANSPARENCIAS/////////////////////////////////////////////////////////////////////////////////


int main() {
	RenderWindow ventana(VideoMode(800, 600), "Transparencias");
	Texture texture_punto;
	texture_punto.loadFromFile("circle.png");
	Texture punto_azul;
	punto_azul.loadFromFile("punto_azul.png");
	
	Sprite punto1, punto2, punto3, punto4, punto5;
	punto1.setTexture(texture_punto);
	punto2.setTexture(texture_punto);
	punto3.setTexture(texture_punto);
	punto4.setTexture(texture_punto);
	punto5.setTexture(punto_azul);
	
	punto1.setPosition(Vector2f(0, 0));
	punto2.setPosition(Vector2f(670, 0));
	punto3.setPosition(Vector2f(0, 470));
	punto4.setPosition(Vector2f(670, 470));
	punto5.setOrigin(128.f,128.f);
	punto5.setPosition(Vector2f(ventana.getSize().x/2,ventana.getSize().y/2));
	
	
	while(ventana.isOpen()) {
		ventana.clear(Color::Black);
		ventana.draw(punto1);
		ventana.draw(punto2);
		ventana.draw(punto3);
		ventana.draw(punto4);
		ventana.draw(punto5);
		
		ventana.display();
		
	}
}