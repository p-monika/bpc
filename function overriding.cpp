#include <iostream>

using namespace std;


class Shape {
   public:
      virtual void draw() {
         cout << "Drawing a Shape" << endl;
      }
};


class Rectangle : public Shape {
   public:
      void draw() {
         cout << "Drawing a Rectangle" << endl;
      }
};

int main() {
   Shape s;
   Rectangle r;

   s = r;


   s.draw();

   return 0;
}

//output
Drawing a Shape
