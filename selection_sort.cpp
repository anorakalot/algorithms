#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>


void fill_vect (std::vector<int> &vect){
  int vect_size;
  int min;
  int max;
  std::cout << "What size vector do you want?" <<std:: endl;
  std::cin >> vect_size;
  std::cout << "What is the min?" << std::endl;
  std::cin >> min;
  std::cout << "what is the max!" << std::endl;
  std::cin >> max;
  vect.resize(vect_size);

  for (int x = 0; x < vect.size(); ++x){
      vect.at(x) = min+(rand()%(max-min+1));
  }
}





int main(){
  srand(time(0));
  std::vector<int> vect;
  int temp;
  fill_vect(vect);

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
  std::cout << std::endl;

}
