// COP3503C: Lab 6 (Shapes.cpp)
// Last edited: 11/8/22

#include <iostream>
#include <vector>
#include <math.h>
#include "Shapes.h"
#define PI 3.14159f


// 2D Operator Overloading + Functions
bool Shape2D::operator>(const Shape2D &rhs) const {
    if (this->Area() > rhs.Area()) {
        return true;
    }
    return false;
}
bool Shape2D::operator<(const Shape2D &rhs) const {
    if (this->Area() < rhs.Area()) {
        return true;
    }
    return false;
}
bool Shape2D::operator==(const Shape2D &rhs) const {
    if (this->Area() == rhs.Area()) {
        return true;
    }
    return false;
}

void Shape2D::ShowArea() const {
    cout << "The area of the " << GetName2D() << " is : " << Area() << endl;
}

// 2D Shapes Constructors
Square::Square() {
    side = 0;
}
Square::Square(float _side) {
    side = _side;
}

Triangle::Triangle() {
    base = 0;
    height = 0;
}
Triangle::Triangle(float _base, float _height) {
    base = _base;
    height = _height;
}

Circle::Circle() {
    radius = 0;
}
Circle::Circle(float _radius) {
    radius = _radius;
}

// 2D Shapes Functions
string Square::GetName2D() const {
    return "Square";
}
float Square::Area() const {
    return pow(side, 2);
}
void Square::Scale(float scaleFactor) {
    side *= scaleFactor;
}
void Square::Display() const {
    cout << "The area of the Square is : " << Area() << endl;
    cout << "Length of a side: " << side << endl;
}

string Triangle::GetName2D() const {
    return "Triangle";
}
float Triangle::Area() const {
    return 0.5 * base * height;
}
void Triangle::Scale(float scaleFactor) {
    base *= scaleFactor;
    height *= scaleFactor;
}
void Triangle::Display() const {
    cout << "The area of the Triangle is : " << Area() << endl;
    cout << "Base: " << base << endl;
    cout << "Height: " << height << endl;
}

string Circle::GetName2D() const {
    return "Circle";
}
float Circle::Area() const {
    return PI * pow(radius,2);
}
void Circle::Scale(float scaleFactor) {
    radius *= scaleFactor;
}
void Circle::Display() const {
    cout << "The area of the Circle is : " << Area() << endl;
    cout << "Radius: " << radius << endl;
}




// 3D Operator Overloading + Functions
bool Shape3D::operator>(const Shape3D &rhs) const {
    if (this->Volume() > rhs.Volume()) {
        return true;
    }
    return false;
}
bool Shape3D::operator<(const Shape3D &rhs) const {
    if (this->Volume() < rhs.Volume()) {
        return true;
    }
    return false;
}
bool Shape3D::operator==(const Shape3D &rhs) const {
    if (this->Volume() == rhs.Volume()) {
        return true;
    }
    return false;
}

void Shape3D::ShowVolume() const {
    cout << "The volume of the " << GetName3D() << " is : " << Volume() << endl;
}

// 3D Shapes Constructors
TriangularPyramid::TriangularPyramid() {
    pyramid_height = 0;
    base = 0;
    height = 0;
}
TriangularPyramid::TriangularPyramid(float _pyramid_height, float _base, float _height) : Triangle(_base, _height) {
    pyramid_height = _pyramid_height;
    base = _base;
    height = _height;
}

Cylinder::Cylinder() {
    height = 0;
    radius = 0;
}
Cylinder::Cylinder(float _height, float _radius) : Circle(_radius) {
    height = _height;
    radius = _radius;
}

Sphere::Sphere() {
    radius = 0;
}
Sphere::Sphere(float _radius) : Circle(_radius) {
    radius = _radius;
}

// 3D Shapes Functions
string TriangularPyramid::GetName3D() const {
    return "TriangularPyramid";
}
float TriangularPyramid::Volume() const {
    return Triangle::Area() * pyramid_height / 3;
}
void TriangularPyramid::Scale(float scaleFactor) {
    base *= scaleFactor;
    height *= scaleFactor;
    pyramid_height *= scaleFactor;
    Triangle::Scale(scaleFactor);
}
void TriangularPyramid::Display() const {
    cout << "The volume of the Triangular Pyramid is : " << Volume() << endl;
    cout << "The height is: " << pyramid_height << endl;
    Triangle::Display();
}

string Cylinder::GetName3D() const {
    return "Cylinder";
}
float Cylinder::Volume() const {
    return PI * pow(radius, 2) * height;
}
void Cylinder::Scale(float scaleFactor) {
    height *= scaleFactor;
    radius *= scaleFactor;
    Circle::Scale(scaleFactor);
}
void Cylinder::Display() const {
    cout << "The volume of the Cylinder is : " << Volume() << endl;
    cout << "The height is: " << height << endl;
    Circle::Display();
}

string Sphere::GetName3D() const {
    return "Sphere";
}
float Sphere::Volume() const {
    return 4 * PI * pow(radius, 3) / 3;
}
void Sphere::Scale(float scaleFactor) {
    radius *= scaleFactor;
    Circle::Scale(scaleFactor);
}
void Sphere::Display() const {
    cout << "The volume of the Sphere is : " << Volume() << endl;
    Circle::Display();
}