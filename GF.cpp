
template <unsigned const P>
GF<P>::GF(unsigned var)
{
    if (var > P-1)
    {
        element = var % P;
    }
    else element = var;
}

template <unsigned const P>
bool GF<P>::operator== (const GF<P>& var)
{
    return (element == var.element) ? true : false;
}

template <unsigned const P>
GF<P> GF<P>::operator+ (const GF<P>& var)
{
    GF<P> temp(element+var.element);
    return temp;
}

template <unsigned const P>
GF<P> GF<P>::operator- (const GF<P>& var)
{
    auto uVar = (element > var.element) ? (element-var.element)
                                        : (element+P-var.element);
    GF<P> temp(uVar);
    return temp;
}

template <unsigned const P>
GF<P> GF<P>::operator* (const GF<P>& var)
{
    GF<P> temp(element*var.element); // using ctor for multiplication?
    return temp; // GF(36) == GF(6)*GF(6) ?
}

template <unsigned const P>
GF<P> GF<P>::operator/ (const GF<P>& var)
{
    for (unsigned i = 0; i < P; ++i){
            GF<P> temp(i);
        if ((temp * var) == *this) return temp;
    }
    std::cerr << "ERROR IN DIVISION !\n"; // should never print
}

