#include "../Maths/math.hpp"
#include "../Maths/vector.hpp"

float AddThree(float a, float b, float c)
{
	return Add(a, Add(b, c));
}

bool IsOrthogonal(float aX, float aY, float bX, float bY)
{
	return Dot(aX, aY, bX, bY) == 0.0f;
}
