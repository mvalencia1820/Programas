/*
 * GLCD.h
 *
 *  Created on: ago 18, 2014
 *      Author: Mart
 */

#ifndef GLCD_H_
#define GLCD_H_


#define GLCD_WIDTH   128
#define GLCD_E       1   // Enable
#define GLCD_CS1     2   // Chip Selection 1
#define GLCD_CS2     3   // Chip Selection 2
#define GLCD_DI      4   // Data or Instruction input

#define GLCD_LEFT    0
#define GLCD_RIGHT   1

#define ON           1
#define OFF          0

/////////////////////////////////////////////////////////////////////////
////                           HDM64GS12.c                           ////
////                                                                 ////
/////////////////////////////////////////////////////////////////////////
void glcd_init(int mode);
void glcd_pixel(int x, int y, int color);
void glcd_fillScreen(int color);
void glcd_writeByte(int side,int data);
void glcd_update();
void wait_secons(float32 time);
void glcd_text57(int x, int y, char* textptr, int size, int color);
void glcd_3Dbox(int x,int y,int width, int height, int depth, int color);

void output_dato(int variable);
void glcd_fillScreen(int color);
void glcd_circle(int x, int y, int radius, int fill, int color);
void glcd_circle_seg(int x, int y, int radius, int angle_start, int angle_end, int color);
void glcd_line(int x1, int y1, int x2, int y2, int color);
void glcd_rect(int x1, int y1, int x2, int y2, int fill, int color);
//void glcd_image_xy(int x, int y, int inverse);

void glcd_image(int inverse);
void glcd_image1(int inverse);

/////////////////////////////////////////////////////////////////////////




#endif /* GLCD_H_ */
