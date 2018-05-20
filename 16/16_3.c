struct complex{
    double real, imaginary;
};

struct complex c1,c2,c3;

struct complex make_complex(double real, double imaginary){
    struct complex tmp = {real, imaginary};
    return tmp;
}

struct complex add_complex(struct complex a, struct complex b){
    struct complex tmp = {a.real + b.real, a.imaginary + b.imaginary};
    return tmp;
}