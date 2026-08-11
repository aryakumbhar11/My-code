#include<iostream>
using namespace std;

class Complex{

private:
Complex(int r=0,int i=0):real(r),image(i){}
Complex add(const Complex&c){
  return Complex(real+c.real,image+c.image);
}
void display() const{
  cout<<real<<"+i"<<image<<endl;
}
};
int main(){
  Complex c1 (4,5),c2(8,9);
Complex sum=c1.add(c2);
Complex diff=c1.subtract(c2);
cout<<"First Complex Number";c1.display();
cout<<"Second Complex Number";c2.display();
cout<<"Addition:"sum.display();
cout<<"Subtraction:"diff.display();
return 0;
}
