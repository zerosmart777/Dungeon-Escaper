#pragma once
#include <stdio.h>

void Itemgotoxy(int x, int y)
{
	printf("%c[%d;%df", 0x1B, y, x);
}