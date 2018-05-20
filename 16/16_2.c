struct{
    double real, imaginary;
} c1 = {0.0, 0.1},c2 = {1.0, 0.0},c3;
int main(){
    c1 = c2;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c1.imaginary;
}