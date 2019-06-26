#include <iostream>
class A {
private:
    int a;
public:
    A() { a=0; }
    void mostrar(){std::cout<<"hola estoy en A"<<a;}
    friend class B;     // Friend Class
};

class B {
private:
    int b;
public:
    B():b(1){}
    void mostrarA(A& x) {
        // Since B is friend of A, it can access
        // private members of A
        std::cout << "A::a=" <<x.a <<'\n';
        std::cout << "B de mi clase " <<b <<'\n';
    }
};

int main(int argc, char **argv) {


   A a;
   B b;

   b.mostrarA(a);
   return 0;
}
