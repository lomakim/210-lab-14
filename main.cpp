// COMSC-210 | Lab 14 | Loma Kim
#include <iostream>
using namespace std;

class Color{
    private:
    int red, green, blue;

    public:
    //MUTATORS
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    //ACCESSORS
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    void print() const;
};

int main() {



    return 0;
}

void Color::print(){
    cout << 
}