#include <stdio.h>
#include <string.h>
#include <alloc.h>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <bios.h>
#include <math.h>
#include <dos.h>
 
void draw_pixelbackground()
{
      int i;
      int xpos, ypos, color;
      int xmax = getmaxx();
      int ymax = getmaxy();
 
      setbkcolor(BLUE);
      setcolor(WHITE);
      rectangle(0,0,xmax, ymax);
 
      for(i = 0; i < 5000; i++)
      {
            xpos = rand() % xmax;
            ypos = rand() % ymax;
            color = rand() % 12;
            putpixel(xpos, ypos, color);
      }
}
 
void draw_object(int left, int top, int right, int bottom)
{
      rectangle(left, top, right, bottom);
      line(left, top, right, bottom);
      line(left, bottom, right, top);
}
 
void move_object(int left, int top, int right, int bottom,int destx, int desty)
{
      int i,j;
      int width = right - left;
      int height = bottom - top;
      long size = imagesize(left, top, right, bottom);
      void far *buffer1 = farmalloc(size);
      void far *buffer2 = farmalloc(size);
      getimage(left, top, right, bottom, buffer1);
 
      for(i = left; i <= destx; i += 10)
      {
            getimage(i, top, i + width, top + height, buffer2);
            putimage(i, top, buffer1, COPY_PUT);
            delay(100);
            if(i > left)
            {
                  putimage(i, top, buffer2, COPY_PUT);
                  delay(10);
            }
 
      }
 
      for(j = top; j <= desty; j += 10)
      {
            getimage(destx, j, destx + width, j + height, buffer2);
            putimage(destx, j, buffer1, COPY_PUT);
            delay(100);
            if(j > top && j < desty)
            {
                  putimage(destx, j, buffer2, COPY_PUT);
                  delay(10);
            }
      }
 
      {
      // Move Again back to original position
      for(i = destx; i >= left; i -= 10)
      {
            getimage(i, desty, i + width, desty + height, buffer2);
            putimage(i, desty, buffer1, COPY_PUT);
            delay(100);
            if(i > left)
            {
                  putimage(i, desty, buffer2, COPY_PUT);
                  delay(10);
            }
 
      }
 
      for(j = desty; j > top; j -= 10)
      {
            getimage(left, j, left + width, j + height, buffer2);
            putimage(left, j, buffer1, COPY_PUT);
            delay(100);
            if(j > top && j < desty)
            {
                  putimage(left, j, buffer2, COPY_PUT);
                  delay(10);
            }
      }
      }
}
 
 
void main()
{
      int grd, grm;
      detectgraph(&grd,&grm);
      initgraph(&grd, &grm, "");
 
      draw_pixelbackground();
 
      draw_object(10,30,100, 70);
      move_object(10,30,100, 70, 530, 430);
 
      getch();
      closegraph();
}