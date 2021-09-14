#include <stdio.h>
#include <graphics.h>

void main(void){
	int driver = DETECT, modo;
	initgraph(&driver, &modo, "c:\\TC20\\BIN");

	cleardevice();

	closegraph();
}