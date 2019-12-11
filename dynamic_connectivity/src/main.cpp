#include <iostream>
#include <vector>

using namespace std;

class dynamic_connectivity{

  public:
    vector<int> connected_list = vector<int>(10);

    dynamic_connectivity(){
      for (unsigned int ii; ii <  connected_list.size(); ii++){
        connected_list[ii] = ii;
      }
    }

    void merge(int var1, int var2){
     unsigned int var1_id = connected_list[var1];
     connected_list[var2] = var1_id;
    }

    bool connected(int var1, int var2){
       if (connected_list[var1] == connected_list[var2]){
          return true;
       } else {
          return false;
       }
    }
};

int main(){
  dynamic_connectivity dynamic_connectivity_obj = dynamic_connectivity();
  dynamic_connectivity_obj.merge(2,3);
  dynamic_connectivity_obj.merge(3,4);
  dynamic_connectivity_obj.merge(2,9);
  cout << boolalpha << dynamic_connectivity_obj.connected(1,3) << endl;
  cout << boolalpha << dynamic_connectivity_obj.connected(3,9) << endl;
  cout << boolalpha << dynamic_connectivity_obj.connected(4,3) << endl;
}
