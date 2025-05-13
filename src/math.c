#include "math.h"

float clamp(float x, float upper, float lower) {
	const float t = x < lower ? lower : x;
	return t > upper ? upper : t;
}
