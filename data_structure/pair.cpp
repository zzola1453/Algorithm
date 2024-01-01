//------------------------------ STL pair-----------------------------
#include <algorithm>      //근데 algorithm이랑 vector에도 들어있다.
#include <iostream>
using namespace std;
// pair<type,type> p   : pair클래스의 객체 p를 생성합니다.
// p.first             : p의 첫번째 인자를 반환합니다.
// p.second            : p의 두번째 인자를 반환합니다.
// make_pair(v1,v2)    : 값1, 값2를 한쌍으로 하는 pair를 만들어서 반환합니다.


int main(){
  pair<int,int> p1;       //int타입과 int타입 데이터를 하나로 묶어서 관리하는 p1객체
  pair<int,double> p2;    //int타입과 double타입 데이터를 하나로 묶어서 관리하는 p2객체
  pair<double, char> p3;  //double타입과 char타입 데이터를 하나로 묶어서 관리하는 p3객체

  pair<int,int> a;
  pair<int,int> b;
  
  p2.first = 1;           //p1의 첫번째 인자에 접근
  p2.second = 1.2;         //p1의 두번째 인자에 접근

  cout << p2.first << '\n';
  cout << p2.second << '\n';

//------------------------------ make_pair 사용하기------------------------------
  p1 = make_pair(7,4); //p1.first = 7 p1.second = 4랑 똑같은 의미
  cout << p1.first << '\n';
  cout << p1.second << '\n';
//------------------------------ pair 객체 간의 대소 비교 ------------------------------
  a = make_pair(3, 2);
  b = make_pair(3, 10);

  if(a<b){
    cout << a.second << '\n';
  }
  else{
    cout << b.second << '\n';
  }
}
