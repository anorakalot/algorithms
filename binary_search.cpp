#include <iostream>
#include <vector>



void binary_search(std::vector<int> param){
  int search_for;
  std::cout << "Value to search for in vector" << std::endl;
  std::cin >> search_for;
  int left = 0;
  int right = param.size()-1;
  while(left<=right) {
    int middle = (left+right) /2;
    if (param.at(middle) == search_for){
      std::cout << "value found at index " << middle << std::endl;
      return;
    }
    else if (param.at(middle) < search_for){
      left = middle + 1;
    }
    else if (param.at(middle) > search_for){
      right = middle - 1;
    }

    // end of while loop
  }

std::cout << "value " << search_for<< " was not found in array" << std::endl;

}



int main(){
  //std::vector<int> list {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  std::vector<int> list {-1, 5, 6, 18, 19, 25, 46, 78, 102, 114};
  binary_search(list);




  return 0;
}









/*

void binary_search(std::vector<int> param){
  int search;
  std::cout << "Which do you want to search for " << std::endl;
  std::cin >> search;
  bool not_found = true;
  while (not_found){
    int middle = param.size()/2;
    //in case value not found
    if (param.size() == 0){
      std::cout << "Search values not found in vector " << std::endl;
      return;
      //middle = 0;
      //return middle;
    }

    else if (param.at(middle) == search){
      std::cout << "Your search was found at index " << middle << std::endl;
      return;
    }
    else if (param.at(middle) > search){
      param.erase(param.begin() + middle,param.end());
      std::cout << "middle bigger than search value" << std::endl;
    }
    else if (param.at(middle) < search){
      param.erase(param.begin(),param.begin() + middle);
      std::cout << "middle less than search values" << std::endl;
    }

    //end of while loop
  }
//enf of binary_search function
}

int main(){
  int result;
  std::vector<int> list {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

  //std::cout << list.at(0) << std::endl;
  binary_search(list);




  return 0;
}
*/
