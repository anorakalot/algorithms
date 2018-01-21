#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
  srand(time(0));
  vector<int> vect(10);


  for(int x = 0; x < vect.size(); ++x){
    vect.at(x) = 0 + rand()% (10-0+1);
  }
  cout << "before sorted " << endl;
  for(int x = 0; x < vect.size(); ++x){
    cout << vect.at(x) << " " ;
  }
  cout << endl;



  int y = 0;
  int key = 0;

  for(int x = 1; x < vect.size(); ++x){
    key = vect.at(x);

    y = x-1;

    while((y>=0)&&(vect.at(y) > key))
    {
      vect.at(y+1)=vect.at(y);
      y-=1;
    }
    vect.at(y+1) = key;
  }













  cout << "after sorted " << endl;
  for(int x = 0; x < vect.size(); ++x){
    cout << vect.at(x) << " " ;
  }
  cout << endl;
return 0;
}
