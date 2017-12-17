#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main(){
  srand(time(0));

  int vector_size;
  vector_size = 20;
  std::vector <int> vect(vector_size);
  int temp;

  for (int x = 0; x < vect.size(); ++x){
    vect.at(x) = 10 + (rand()% (10-0+1));
  }

  std::cout << "unsorted list " << std::endl;
  for (int x = 0; x < vect.size(); ++x){
    std::cout << vect.at(x) << " ";
  }
  std::cout << std::endl;

  for(int x = 0; x <vect.size(); ++x){
    for (int y = x + 1; y < vect.size(); ++y){
      if (vect.at(x) > vect.at(y)){
        temp = vect.at(x);
        vect.at(x) = vect.at(y);
        vect.at(y) = temp;
      }
    }
  }

  std::cout << "sorted list " << std::endl;
  for (int x = 0; x < vect.size(); ++x){
    std::cout << vect.at(x) << " ";
  }

}
