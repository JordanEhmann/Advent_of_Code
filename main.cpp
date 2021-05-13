#include <fstream>
#include <iostream>

using namespace std;

int main() {

  int a, b, lst_num, product, sum; 
  int counter = 1, size = 200;
  int num[size];

  
  ifstream fin;
  fin.open("puzzle_input.txt", ios::in);  // Allows me to input numbers from file
  
  for (int i = 1; i <= 200; i++ )
  {
    fin >> num[i];
  }

  for(int i = 1; i <= 200; i++){
    a = num[i];

    for(int y = 1; y <= 200; y++){
    b = num[y];

    sum = a + b;

    if(sum == 2020){

      product = a * b;
      cout << "The missing expense is " << product << endl;
      cout << "The multiples are " << a << " and " << b << endl;
    }
    }
  }  
  return 0;
}
