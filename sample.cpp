#include<iostream>
using namespace std;
 int main(){
  int A, B;
  string op;
  //「3 * 4」のように，（整数）[スペース]（演算子）[スペース]（整数）の形で入力
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }else if(op == "*") {
        cout<< A * B << endl;
  }else if (op=="-"){
      cout <<A - B <<endl;
  }else if(op == "/"){
      cout<<A / B<<endl; 
  }


  return 0;
}