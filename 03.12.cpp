#include "SFML/Graphics.hpp"
#include <ctime>

using namespace sf;
const float batWidth = 20.f;
const float batHeight = 80.f;
const float bat0ffset = 50.f;
const Vector2f batSize(20.f, 80.f);

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(800, 600), "SFML Works!");
	RectangleShape rect(Vector2f(20, 80));
	RectangleShape rect1(Vector2f(20, 80));
	rect.setPosition(50, 260);
	rect.setFillColor(Color::Blue);
	rect1.setPosition(720, 260);
	rect1.setFillColor(Color::Red);
	//создание объектов игры 
	RectangleShape leftBat, rightBat;

	leftBat.setSize
	


	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна 
		window.clear()
	//отрисовка объектов в памяти
	}

	return 0;
}