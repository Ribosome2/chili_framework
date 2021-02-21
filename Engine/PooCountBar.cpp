#include "PooCountBar.h"
#include "Colors.h"
void PooCountBar::Draw(Graphics& gfx) const
{
	gfx.DrawRect(posX, posY, width, height, Colors::Blue);
}

void PooCountBar::AddWidth(int n)
{
	width += n;
}
