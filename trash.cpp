#include <iostream>
using namespace std;

int square_digits(int num);

int main(){
  int num;
  cout<<"Hellow World!";
  cout << "Enter num" << endl;
  cin >> num;
  cout << "result is " << square_digits(num) << endl;
  return 0;
}


int comp(int a[] ,int b[]){
  int flag = 0;
  for(int i : a){
    i *= i;
    for(int j :b){
      if(j == i){
        break;
      }
      flag = 1;
    }
  }
}
