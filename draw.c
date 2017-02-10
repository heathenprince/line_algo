#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  int x = x0;
  int y = y0;

  int A = y0 - y1;
  while( x <= x1 ) {
    plot(x,y);
    if( d > 0 ) { 
      y++;
      //WHERE ARE A AND B ?????
    
}

