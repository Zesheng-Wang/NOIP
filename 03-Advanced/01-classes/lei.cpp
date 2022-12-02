#include <iostream>
using namespace std;
class Complex
{
    private:
       int real;
       int imag;
    public:
       Complex(): real(0), imag(0) { }
       void readData()
        {
           cout << "分别输入实数和虚数："<<endl;
           cin >> real >> imag;
        }
        Complex addComplexNumbers(Complex comp2)
        {
            Complex temp;

            //real表示对象c3的实际数据，因为使用代码c3.add（c1，c2）;可以调用此函数；
            temp.real = real+comp2.real;

            //imag代表对象c3的imag数据，因为使用代码c3.add（c1，c2）;可以调用此函数
            temp.imag = imag+comp2.imag;
            return temp;
        }
        void displayData()
        {
            cout << "Sum = " << real << "+" << imag << "i";
        }
};

int main()
{
    Complex c1, c2, c3;

    c1.readData();
    c2.readData();

    c3 = c1.addComplexNumbers(c2);

    c3.displayData();
    
    return 0;
}