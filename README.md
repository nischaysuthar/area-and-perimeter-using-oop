#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};

class Triangle : public Shape {
private:
    double base;
    double height;
    double side1;
    double side2;
    double side3;

public:
    Triangle(double base, double height, double side1, double side2, double side3)
        : base(base), height(height), side1(side1), side2(side2), side3(side3) {}

    double calculateArea() override {
        return 0.5 * base * height;
    }

    double calculatePerimeter() override {
        return side1 + side2 + side3;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double calculateArea() override {
        return length * width;
    }

    double calculatePerimeter() override {
        return 2 * (length + width);
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double calculateArea() override {
        return M_PI * radius * radius;
    }

    double calculatePerimeter() override {
        return 2 * M_PI * radius;
    }
};

int main() {
    Triangle triangle(6.0, 4.0, 3.0, 4.0, 5.0);
    Rectangle rectangle(5.0, 3.0);
    Circle circle(4.0);

    std::cout << "Triangle Area: " << triangle.calculateArea() << std::endl;
    std::cout << "Triangle Perimeter: " << triangle.calculatePerimeter() << std::endl;

    std::cout << "Rectangle Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    std::cout << "Circle Area: " << circle.calculateArea() << std::endl;
    std::cout << "Circle Perimeter: " << circle.calculatePerimeter() << std::endl;

    return 0;
}# area-and-perimeter-using-oop
