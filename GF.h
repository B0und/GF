#ifndef GF_H
#define GF_H

template <unsigned const P>
class GF
{
    public:
        GF() : element(0) //default ctor
        {}
        GF(unsigned var); // ctor with bound checking


        bool operator== (const GF<P>& var);
        GF<P> operator+ (const GF<P>& var);
        GF<P> operator- (const GF<P>& var);
        GF<P> operator* (const GF<P>& var);
        GF<P> operator/ (const GF<P>& var);


        void show_order() const {std::cout << P << "\n";}
        void show()       const {std::cout << element << "\n";}

    private:
        unsigned element;
};
#include "GF.cpp"
#endif // GF_H
