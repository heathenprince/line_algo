#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  int x = x0;
  int y = y0;
	
  int A = abs(y0 - y1);
  int B = abs(x0 - x1) * -1;

  int d = (2 * A) + B;

  A *= 2;
  B *= 2; //all added values will be double henceforth; might as well do the calculations here
  
  while( x <= x1 ) {
    plot(s,c,x,y);
    if( d > 0 ) { 
      y++;
      d += B;
    }
    x++;
    d += A;
	}

}
