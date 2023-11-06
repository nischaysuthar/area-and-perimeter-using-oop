#include<iostream>
#include<cmath>
const double PI=3.14159;
using namespace std;

class shape{
public:
  double area();
  double perimeter();
};

class circle:public shape{
public:
  double radius;

  double area(double radius){
  return PI*pow(radius,2);
  }

  double perimeter(double radius){
  return 2*PI*radius;
  }
};

class rectangle:public shape{
public:
 double length,height;

 double area(double length, double height){
 return length*height;
 }

 double perimeter(double length, double height){
 return 2*length+2*height;
 }

};

class triangle:public shape{
public:
double s1,s2,s3;

double area(double s1,double s2,double s3){
double s=(s1+s2+s3)/2;
return sqrt(s*(s-s1)*(s-s2)*(s-s3));

}

double perimeter(double s1,double s2,double s3){
return s1+s2+s3;
}
};



int main(){

circle x;
rectangle y;
triangle z;

cout<<"\ncircle";
cout<< x.area(4.0);
cout<< x.perimeter(4.0);

cout<<"\nrectangle";
cout<< y.area(4.0,9.0);
cout<< y.perimeter(4.0,9.0);

cout<<"\ntriangle";
cout<< z.area(2.0,3.0,4.0);
cout<< z.perimeter(2.0,3.0,4.0);
return 0;
}
