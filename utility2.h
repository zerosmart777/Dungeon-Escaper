#pragma once
#include <stdio.h>

void Enemygotoxy(int x, int y)
{
	printf("%c[%d;%df", 0x1B, y, x);
}