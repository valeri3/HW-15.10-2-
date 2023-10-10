#include <iostream>
using namespace std;

class Circle 
{
    double diametr;

public:
    Circle() = default;
    Circle(double diam) : diametr(diam) {}

    void Input()
    {
        cout << "Enter circle diametr: ";
        cin >> diametr;
    }
    void Print() const 
    {
        cout << "Circle diametr: " << diametr << endl;
    }
    int getDiametr() const 
    {
        return diametr;
    }
    void setDiametr(double di) 
    {
        if (di > 0.0) 
        {
            diametr = di;
        }
    }
};

class Square
{
    double side;

public:
    Square() = default;
    Square(double s) : side(s) {}

    void Input()
    {
        cout << "Enter square side: ";
        cin >> side;
    }

    void Print() const
    {
        cout << "Square: " << side << endl;
    }

    int getSide() const
    {
        return side;
    }

    void setSide(double si)
    {
        if (si > 0.0) 
        {
            side = si;
        }
    }
};

class CircleInSquare : public Square, public Circle 
{
public:
    CircleInSquare() = default;
    CircleInSquare(double d, double s) : Circle(d), Square(s) {}

    void fitsOrNot()
    {
        if (getDiametr() <= getSide()) 
        {
            cout << "Circle fits" << endl;
        }
        else 
        {
            cout << "The circle does NOT fit" << endl;
        }
    }
    void Input() 
    {
        Circle::Input();
        Square::Input();
    }
    void Print() const 
    {
        Circle::Print();
        Square::Print();
    }
};

int main() 
{
    CircleInSquare a;
    a.Input();
    a.Print();
    a.fitsOrNot();
}