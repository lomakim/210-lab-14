// COMSC-210 | Lab 14 | Loma Kim
#include <iostream>
#include <iomanip>
using namespace std;

const int WIDTH = 6;

class Color{
    private:
    int red, green, blue;

    public:
    //MUTATORS - set values of each member variable
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    //ACCESSORS - access values of each member value
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    void print() const;     //print function prototype
};

int main() {
    //DECLARATIONS
    Color c1, c2, c3, c4, c5;

    //Set color values
    c1.setRed(51);
    c1.setGreen(115);
    c1.setBlue(87);

    c2.setRed(109);
    c2.setGreen(159);
    c2.setBlue(113);

    c3.setRed(255);
    c3.setGreen(209);
    c3.setBlue(220);

    c4.setRed(234);
    c4.setGreen(154);
    c4.setBlue(178);

    c5.setRed(255);
    c5.setGreen(254);
    c5.setBlue(227);

    //Print banner
    cout << "**** COLOR CLASS PROGRAM ****" << endl;

    //Print RGB values for each color using print function
    cout << "\nRGB Values for color #1: " << endl;
    c1.print();

    cout << "\nRGB Values for color #2: " << endl;
    c2.print();

    cout << "\nRGB Values for color #3: " << endl;
    c3.print();

    cout << "\nRGB Values for color #4: " << endl;
    c4.print();

    cout << "\nRGB Values for color #5: " << endl;
    c5.print();


    return 0;
}

//Print function prints out the values of the color class neatly formatted
void Color::print() const {
    cout << left << "Red:   " << setw(WIDTH) << red;
    cout << "Green: " << setw(WIDTH) << green;
    cout << "Blue:  " << setw(WIDTH) << blue << endl;
}