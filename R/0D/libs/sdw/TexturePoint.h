#include <iostream>

class TexturePoint
{
  public:
    float x;
    float y;

    TexturePoint()
    {
    }

    TexturePoint(float xPos, float yPos)
    {
      x = xPos;
      y = yPos;
    }

    void print()
    {
    }
    TexturePoint operator-(const TexturePoint& t){
      return TexturePoint(this->x-t.x, this->y-t.y);
    }

    TexturePoint operator+(const TexturePoint& t){
      return TexturePoint(this->x+t.x, this->y+t.y);
    }
    TexturePoint operator/(const float f){
      return TexturePoint(this->x/f,this->y/f);
    }
};

std::ostream& operator<<(std::ostream& os, const TexturePoint& point)
{
    os << "(" << point.x << ", " << point.y << ")" << std::endl;
    return os;
}
TexturePoint operator*(float f, TexturePoint t){
  return TexturePoint(t.x * f, t.y*f);
}