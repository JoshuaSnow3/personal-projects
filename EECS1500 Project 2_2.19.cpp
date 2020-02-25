// EECS1500 Project 2 2.19
// Joshua Snow

//Enter X and Y coordinates of each point of a triangle to compute the area

#include <iostream>
using namespace std;

int main()
{
	double x1, x2, x3, y1, y2, y3;

		cout << "This program is used to find the area of a circle from 3 sets of X and Y coordinates" << endl;
		cout << "Please enter your your first x y coordinate, only putting a space between the x and y" << endl;
		cin >> x1 >> y1;
		cout << "Please enter your your second x y coordinate, only putting a space between the x and y" << endl;
		cin >> x2 >> y2;
		cout << "Please enter your your third x y coordinate, only putting a space between the x and y" << endl;
		cin >> x3 >> y3;
		cout << " " << endl;

			double side1 = sqrt(abs(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
			double side2 = sqrt(abs(pow((x3 - x2), 2) + pow((y3 - y2), 2)));
			double side3 = sqrt(abs(pow((x1 - x3), 2) + pow((y1 - y3), 2)));

				double semiPerimeter = ((side1 + side2 + side3) / 2);
				double area = sqrt(semiPerimeter*((semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3)));
		
		cout << "side 1: " << side1 << " side 2: " << side2 << " side 3: " << side3 << endl;
		cout << endl;
		cout << "The area of the triangle is " << area << endl;
	
}
