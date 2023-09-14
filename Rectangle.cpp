/**
 * @file rectangle.cpp
 * @brief This file contains the implementation of the Rectangle class.
 */

#include <iostream>

/**
 * @class Rectangle
 * @brief Represents a rectangle with width and height.
 */
class Rectangle 
{
	private:
    	double width;  /**< Width of the rectangle. */
    	double height; /**< Height of the rectangle. */

	public:
	    /**
	     * @brief Constructor for the Rectangle class.
	     * @param w Width of the rectangle.
	     * @param h Height of the rectangle.
	     */
	    Rectangle(double w, double h) : width(w), height(h) { }
	
	    /**
	     * @brief Calculate the area of the rectangle.
	     * @return Area of the rectangle.
	     */
	    double calculateArea() const 
	    {
	        return width * height;
	    }
	
	    /**
	     * @brief Calculate the perimeter of the rectangle.
	     * @return Perimeter of the rectangle.
	     */
	    double calculatePerimeter() const 
	    {
	        return 2 * (width + height);	
	    }
};
	
int main() 
{
    double width, height;
    std::cout << "Enter the width and height of the rectangle: ";
    std::cin >> width >> height;

    Rectangle rect(width, height);

    double area = rect.calculateArea();
    double perimeter = rect.calculatePerimeter();

    std::cout << "Rectangle Area: " << area << std::endl;
    std::cout << "Rectangle Perimeter: " << perimeter << std::endl;

    return 0;
}

