#include <iostream>
#include<math.h>
#define _USE_MATH_DEFINES

#include"Ray.h"

using namespace std;

Ray::Ray()
{
	start = Vector2(0, 0);
	increaseIncrement = Vector2(0, 0);
}

Ray::Ray(Vector2 startPos_)
{
	start = startPos_;
	increaseIncrement = Vector2(0, 0);
}

Ray::Ray(Vector2 startPos_, Vector2 increaseIncrement_)
{
	start = startPos_;
	increaseIncrement = increaseIncrement_;
}

bool Ray::CheckCollide(Vector2 point, Vector2 lineMap[][2])
{
	
	return false;
}

void Ray::CastUntilHits()
{

}

void Ray::setStart(Vector2 startPos_)
{
	start = startPos_;
}

void Ray::setIncreaseIncrement(Vector2 increaseIncrement_)
{
	increaseIncrement = increaseIncrement_;
}

Vector2 Ray::getVectorAtAngle(float angle)
{
	double radians = angle * 3.1415926535 / 180.0;
	return Vector2((float) cos(radians), (float) sin(radians));
}