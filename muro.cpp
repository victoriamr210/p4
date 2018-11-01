#include <iostream>
#include "muro.hpp"


void muro::generate(vector<int>& wall, int v){
  if(v>=l_){
    if(l_==v){
      sol.push_back(wall);
      write(wall);
    }
  }else{
    wall.push_back(2);
    generate(wall, v+=2);
    wall.pop_back();
    v-=2;
    wall.push_back(3);
    generate(wall, v+=3);
    wall.pop_back();
    v-=3;
  }
}

  void muro::write(vector<int>& wall){
     for (int i = 0; i < wall.size(); i++) {
        cout << wall[i] << " ";
     }
    cout << endl;
  }

void muro::ok(){
  int a=0;
  int b=0;
  wall_.resize(sol.size());

  for(int i=0; i<sol.size(); i++){
    for(int j=0; j<sol.size(); j++){
      for(int k=0; k<min(sol[i].size(), sol[j].size()) -1; k++){
        a+=sol[i][k];
        b+=sol[j][k];
        if(a==b) break;
      }
      if(a!=b) wall_[i].push_back(j);
      a=b=0;
    }
  }

  for(int i=0; i<wall_.size(); i++){
    cout << i << ": ";
    write(wall_[i]);
  }

}

void muro::create_wall(void){
  std::vector<int> a;
  for(int i=0; i<wall_.size(); i++){
      create_wall(a,i);
  }
  for(int i=0; i<muro_.size(); i++){
    for(int j=0; j<muro_[i].size(); j++){
      cout << muro_[i][j] << " ";
    }
    cout << endl;
  }
}

void muro::create_wall(vector<int>& a, int i, int height){
    if(height==h_){

      // write(a);
      muro_.push_back(a);
      a.clear();
    }else{
      a.push_back(i);
      height++;
      for(int j=0; j<wall_[i].size(); j++){
        create_wall(a, wall_[i][j], height);
      }
  }

}


