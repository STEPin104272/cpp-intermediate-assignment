ifndef __COMPLEX_H
#define __COMPLEX_H

class Complex {
  int m_real;
  int m_imag;
  public:
  Complex::Complex(int real,int imag):m-real(0),m_imag(0);
  {
  }
  Complex::Complex(int):m_real(0),m_imag(0);
  {
  }
  Complex::Complex:: operator+(constant Complex& ref)
  {
    return Complex(this->m_real+ref.m_real, his->m_imag+ref.m_imag);
  }
  Complex::Complex:: operator+(constant Complex& ref)
  {
    return Complex(this->m_real-ref.m_real,this->m_imag-ref.m_imag);
  }
   Complex::Complex operator*(const Complex& C);
  {
   }
   Complex& Complex::operator++()
   {
   this->m_real++;
   this->m_imag++;
   return this;
   }
   Complex Complex::operator++(int)
   {
   }
   bool Complex::operator==(const Complex&)
   {
   
  
