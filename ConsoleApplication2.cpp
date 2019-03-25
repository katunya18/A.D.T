#include "pch.h"
#include <iostream>
using namespace std;

class Shape
{;
	public:
		virtual int getArea() = 0;
		virtual int getEdge() = 0;
		virtual void Draw() = 0;
		};

class Rect :public Shape
{
private:
	int height, width;

public:
	Rect(int initWidth, int  initHeight)
	{
		height = initHeight;
		width = initWidth;
	}
	~Rect();
	int getArea() { return height * width; }
	int getEdge() { return(2 * height) + (2 * width); }

	void Draw()
	{
		for (int i = 0; i < width;i++)
		{
			cout << endl;

			for (int j = 0; j < height; j++)
			{
				cout << "x ";
			}
		}
	}
};

	int main()
{
		Shape* pQuad = new Rect(3, 7);
		Shape* pSquare = new Rect(5, 5);

		pQuad->Draw();
		cout << endl << "Area is " << pQuad->getArea() << endl;
		cout << "Perimetr is " << pQuad->getEdge() << endl;

		pSquare->Draw();
		cout << endl << "Area is " << pSquare->getArea() << endl;
		cout << "Perimetr is " << pSquare->getEdge() << endl;
		
		
		return 0;
}
