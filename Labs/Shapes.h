// COP3503C: Lab 6 (Shapes.h)
// last edited: 11/8/22

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
#pragma once

// Base Class - SHAPE
class Shape {

public:

    virtual void Scale(float scaleFactor) = 0;
    virtual void Display() const = 0;
    virtual ~Shape() {};

};




// Derived Class - 2D SHAPE
class Shape2D : virtual public Shape {

public:

    virtual float Area() const = 0;
    void ShowArea() const;
    virtual string GetName2D() const = 0;

    bool operator>(const Shape2D &rhs) const;
    bool operator<(const Shape2D &rhs) const;
    bool operator==(const Shape2D &rhs) const;

};

// Derived-Derived Class - Square
class Square : public Shape2D {
    float side;
public:
    Square();
    Square(float _side);

    string GetName2D() const;
    float Area() const;
    void Scale(float scaleFactor);
    void Display() const;
};

// Derived-Derived Class - Triangle
class Triangle : public Shape2D {
    float base;
    float height;
public:
    Triangle();
    Triangle(float _base, float _height);

    string GetName2D() const;
    float Area() const;
    void Scale(float scaleFactor);
    void Display() const;
};

// Derived-Derived Class - Circle
class Circle : public Shape2D {
    float radius;
public:
    Circle();
    Circle(float _radius);

    string GetName2D() const;
    float Area() const;
    void Scale(float scaleFactor);
    void Display() const;
};




// Derived Class - 3D SHAPE
class Shape3D : virtual public Shape {

public:

    virtual float Volume() const = 0;
    void ShowVolume() const;
    virtual string GetName3D() const = 0;

    bool operator>(const Shape3D &rhs) const;
    bool operator<(const Shape3D &rhs) const;
    bool operator==(const Shape3D &rhs) const;

};

// Derived-Derived Class - Triangular Pyramid
class TriangularPyramid : public Shape3D, private Triangle {
    float pyramid_height;
    float base;
    float height;
public:
    TriangularPyramid();
    TriangularPyramid(float _pyramid_height, float _base, float _height);

    float Volume() const;
    string GetName3D() const;
    void Scale(float scaleFactor);
    void Display() const;
};

// Derived-Derived Class - Cylinder
class Cylinder : public Shape3D, private Circle {
    float height;
    float radius;
public:
    Cylinder();
    Cylinder(float _height, float _radius);

    float Volume() const;
    string GetName3D() const;
    void Scale(float scaleFactor);
    void Display() const;
};

// Derived-Derived Class - Sphere
class Sphere : public Shape3D, private Circle {
    float radius;
public:
    Sphere();
    Sphere(float _radius);

    float Volume() const;
    string GetName3D() const;
    void Scale(float scaleFactor);
    void Display() const;
};