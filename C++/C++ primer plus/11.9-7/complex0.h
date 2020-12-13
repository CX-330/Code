#ifndef _COMPLEX0_
#define _COMPLEX0_
#include <iostream>
using std::istream;
using std::ostream;
class complex {
    double real;
    double imagin;
public:
    complex(double x = 0, double y = 0);
    ~complex() {};
    void reset(double x, double y);
    complex operator+(const complex &m);   //�������
    complex operator-(const complex &m);   //�������
    complex operator*(const complex &m);   //�������
    complex operator*(double n);    //������double���
    friend complex operator*(double n, complex & m);  //double��������
    complex operator~();    //����
    friend ostream& operator<<(ostream& os, const complex& m);  //�����<<������
    friend istream& operator>>(istream& is, complex& m);        //������>>������
};


#endif // !_COMPLEX0_