#include<stdio.h>
#include<iostream>

//  class Parent {
//     public:
//     Parent(){
//         std::cout<<"Parent constructor\n";

//     }
//     public: int a, b;
//     public: void show(){
//         std::cout<<"The Value of a is = " <<a<< " and b is = " <<b;
//     }
// };


class Parent_A{
    public:
    Parent_A(){
        std::cout<<"Parent A constructor\n";
    }
    ~Parent_A(){
        std::cout<<"Destructor of A \n";
    }

    
};

class B : public Parent_A{
    public:
    B(){
        std::cout<<"Child B of Parent A\n";
    }
    
    
};

class C : public Parent_A{
    public:
    C(){
        std::cout<<"Child C of Parent A\n";
    }
};

class D : public B{
    public:
    D(){
        std::cout<<"Child D of Parent B\n";
    }
};

class E : public B{
    public:
    E(){
        std::cout<<"Child E of Parent B\n";
    }
};

class F : public C{
    public:
    F(){
        std::cout<<"Child F of Parent C\n";
    }
};

class G : public C{
    public:
    G(){
        std::cout<<"Child G of Parent C\n";
    }
};

class H : public D, public E{
    public:
    H(){
        std::cout<<"Child H of Parent D & Parent E \n";
    }
};

class I : public F, public G{
    public:
    I(){
        std::cout<<"Child I of Parent F & Parent G \n";
    }
};

class J : public H, public I{
    public:
    J(){
        std::cout<<"Child J of Parent H & Parent I \n";
    }
};

int main(){

    // Parent_A a;
    // B b;
    // C c;
    J Obj;





    // Parent obj;
    // obj.a = 10;
    // obj.b = 20;

    // obj.show();
    // std::cout<<"\nFirst Assignment";
}