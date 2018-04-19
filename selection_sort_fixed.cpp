#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>
void fill_vect (std::vector<int> &vect);

void selection_sort(std::vector<int> &vect);


void display_vect(std::vector<int> &vect);


int main(){
  srand(time(0));
  std::vector<int> vect;

  fill_vect(vect);

  std::cout << "unsorted list " << std::endl;
  display_vect(vect);
  selection_sort(vect);


  std::cout << "sorted list " << std::endl;
  display_vect(vect);


}

void fill_vect (std::vector<int> &vect){
  int vect_size;
  int min;
  int max;
  int temp;
  std::cout << "What size vector do you want?" <<std:: endl;
  std::cin >> vect_size;
  std::cout << "What is the min?" << std::endl;
  std::cin >> min;
  std::cout << "what is the max!" << std::endl;
  std::cin >> max;

  //error handling
  if (min > max){
    temp = min;
    min = max;
    max = temp;
  }
  if (vect_size <0){
    vect_size = abs(vect_size);
  }
  vect.resize(vect_size);

  for (int x = 0; x < vect.size(); ++x){
      vect.at(x) = min+(rand()%(max-min+1));
  }
}

void selection_sort(std::vector<int> &vect){
  int temp;
  int tracker;
    for(int x = 0; x <vect.size(); ++x){
       int min = vect.at(x);
        tracker = x;
      for (int y = x + 1; y < vect.size(); ++y){
          if (min > vect.at(y)){
            min = vect.at(y);
            tracker = y;
        }
      }
          if (min != vect.at(x)){
          temp = vect.at(x);
          vect.at(x) = vect.at(tracker);
          vect.at(tracker) = temp;

          }
      }

}


void display_vect(std::vector<int> &vect){
  for (int x = 0; x < vect.size(); ++x){
    std::cout << vect.at(x) << " ";
  }
  std::cout << std::endl;

}
