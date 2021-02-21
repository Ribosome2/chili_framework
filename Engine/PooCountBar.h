#pragma once
#include "Graphics.h"
class PooCountBar
{
public:
	void Draw(Graphics& gfx) const;
	void AddWidth(int n);
private:
	int posX = 10;
	int posY = 10;
	int width=10;
	static  constexpr  int height = 50;
};

