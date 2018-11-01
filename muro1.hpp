#include <iostream>
#include <vector>
using namespace std;
#pragma once

class muro{

private:
  int h_;
  int l_;
  vector<vector<int>> sol;
  vector<vector<int>> wall_;
  vector<vector<int>> muro_;
  vector<vector<bool>> vis;


public:

  // muro(void){};

  ~muro(void){};

  muro(int h, int l):  h_(h), l_(l){
    std::vector<int> aux;
    generate(aux);
    ok();
    std::vector<int> a;
    create_wall();
  };

  void generate(void);
  void generate(vector<int>& wall, int v=0);

  void ok(void);

  bool full();

  // int pos(int i, int j) const;
  bool ladrillos(vector<int>& wall);
  void save(vector<int>&  wall);
  void create_wall(void);
  void create_wall(vector<int>& a, int i, int height=0);
  void finish(void);

  // void write(void);

  void write(vector<int>& wall);


};
