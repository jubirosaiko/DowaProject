
#pragma once
#include "../Scene.hpp"
#include <thread>


class TitleLoad : public Scene {
private:
  std::thread mLoad;
  bool isFin;
  void load();
  
  float angle;
  
public:
  TitleLoad();

  void update();
  void draw();
};