
//Single Element
#include <iostream>
using namespace std;

struct rectangle{
  float height;
  float width;
};


void setLengthWidth(rectangle r[],int n){
for(int i = 0; i<n; ++i){
r[i].height = 5.0;
r[i].width=4.0;
}
}

void getArea(rectangle r[], int n) {
for(int i=0; i<n; ++i){
cout<<r[i].height*r[i].width<<endl;}
}
int main(){

  rectangle r[3];

  setLengthWidth(r,3);
  
  getArea(r,3);

  return 0;
}

