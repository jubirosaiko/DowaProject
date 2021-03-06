
#pragma once

#include "../../../object/Object.hpp"

#include "cinder/gl/Texture.h"

class Apple : public Object
{
  ci::gl::Texture mApple;
  
  bool mFallFlag, mFloorHitFlag;
  
  float mGravityPower;
  float mAcceleration;
  
public:
  
  Apple(const ci::Vec3f&, const ci::Vec3f&);
  
  void setup();
  void update();
  void draw();
  
  void onCollisionUpdate(const std::shared_ptr<Object>&);
  
};
