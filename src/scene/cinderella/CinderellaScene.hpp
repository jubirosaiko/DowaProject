
#pragma once

#include "camera/Camera.hpp"
#include "cinder/gl/Texture.h"
#include <memory>

#include "ball/Ball.hpp"

#include "../Scene.hpp"
#include "../../resource/Resource.hpp"


class CinderellaScene : public Scene
{
  
  std::shared_ptr<Ball> mBall;

  float mDeviceWindowHeight, mDeviceWindowWidth;
  
  ci::Vec3f mCameraPos;
  dowa::Camera camera;
  
  Audio mTown;
  Audio mCastle;
  
public:
  
  Audio mHouse;
  
  CinderellaScene();
  ~CinderellaScene();
  
  void update();
  void draw();
};
