typedef struct {
    double real, imaginary;
} Complex;

Complex c1,c2,c3;

Complex make_complex(double real, double imaginary){
    Complex tmp = {real, imaginary};
    return tmp;
}

Complex add_complex(Complex a, Complex b){
    Complex tmp = {a.real + b.real, a.imaginary + b.imaginary};
    return tmp;
}