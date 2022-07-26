#pragma once

#include "RectF.h"
#include "Graphics.h"
#include "Colors.h"

class Brick {
private:
	RectF rect;
	Color color;
	bool destroyed = false;
public:
	Brick(RectF& rect_in, Color color_in);
	void Draw(Graphics& gfx);
};