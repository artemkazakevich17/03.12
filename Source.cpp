#include "SFML/Graphics.hpp"
#include <ctime>

using namespace sf;
const float batWidth = 20.f;
const float batHeight = 80.f;
const float bat0ffset = 50.f;
const Vector2f batSize(20.f, 80.f);

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(800, 600), "SFML Works!");
	RectangleShape rect(Vector2f(20, 80));
	RectangleShape rect1(Vector2f(20, 80));
	rect.setPosition(50, 260);
	rect.setFillColor(Color::Blue);
	rect1.setPosition(720, 260);
	rect1.setFillColor(Color::Red);
	//�������� �������� ���� 
	RectangleShape leftBat, rightBat;

	leftBat.setSize
	


	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		// ��������� ���� 
		window.clear()
	//��������� �������� � ������
	}

	return 0;
}