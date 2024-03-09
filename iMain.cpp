#include "iGraphics.h"
#include <string.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
#define MAX_LINES 20
int l=0,m=652,save = 0, rown2 = 0, rown = 0, z = 0, count = 0, x = 1100, y = 700, r = 20, window = 0, p = 57, q = 605, q2, red = 0, green = 0, blue = 0, font = 2, wwindow = 0,ewindow=0,edit=0,flag=0;
char photo[7][20] = {"window0.bmp", "logo.bmp", "window1.bmp", "window2.bmp", "write.bmp", "writee.bmp","rose.bmp"};
char str1[20][53];
char str2[20][53];
char str3[20][53];
char str4[20][53];
char str5[20][53];
char str6[20][53];
char str7[20][53];
char str8[20][53];
char str9[20][53];
char str10[20][53];
int indexNumber = 0;
unsigned char key;
FILE *thriller_book;
FILE *fantasy_book;
FILE *horror_book;
FILE *scifi_book;
FILE *mystery_book;
FILE *poetry_book;
FILE *romance_book;
FILE *biography_book;
FILE *drama_book;
FILE *others_book;
void fonts();
void writingwindow();
void editingwindow();
void save_file(int save);
// void menu();

void writingwindow()
{
	if (wwindow == 1)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Thriller", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (wwindow == 2)
	{
		iShowBMP(0, 0, photo[4]);     
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Fantasy", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (wwindow == 3)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Horror", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (wwindow == 4)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Sci-Fi", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (wwindow == 5)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Mystery", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (wwindow == 6)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Poetry", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (wwindow == 7)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Romance", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (wwindow == 8)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Biography", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (wwindow == 9)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Drama", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (wwindow == 10)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Others", GLUT_BITMAP_TIMES_ROMAN_24);
	}
}
void editingwindow()
{
	if (ewindow == 1)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(800, 30, "Edit", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Thriller", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (ewindow == 2)
	{
		iShowBMP(0, 0, photo[4]);     
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(800, 30, "Edit", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Fantasy", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (ewindow == 3)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(800, 30, "Edit", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Horror", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (ewindow == 4)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(800, 30, "Edit", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Sci-Fi", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (ewindow == 5)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(800, 30, "Edit", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Mystery", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (ewindow == 6)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(800, 30, "Edit", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Poetry", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (ewindow == 7)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(800, 30, "Edit", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Romance", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (ewindow == 8)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(800, 30, "Edit", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Biography", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (ewindow == 9)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(800, 30, "Edit", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Drama", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (ewindow == 10)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iShowBMP(20, 18, photo[5]);
		//fontnameshow();
		iSetColor(red, green, blue);
		fonts();
		iSetColor(0,0,0);
		iText(1005, 30, "Back", GLUT_BITMAP_HELVETICA_18);
		iText(600, 30, "Save", GLUT_BITMAP_HELVETICA_18);
		iText(800, 30, "Edit", GLUT_BITMAP_HELVETICA_18);
		iText(600, 628, "Change Font", GLUT_BITMAP_HELVETICA_18);
		iText(600, 603, "Change Color", GLUT_BITMAP_HELVETICA_18);
		iText(720,603,"RED",GLUT_BITMAP_HELVETICA_18);
		iText(760,603,"GREEN",GLUT_BITMAP_HELVETICA_18);
		iText(830,603,"BLUE",GLUT_BITMAP_HELVETICA_18);
		iText(104, 656, "Category: Others", GLUT_BITMAP_TIMES_ROMAN_24);
	}
}


void fonts()
{
	if(wwindow==1 || ewindow==1)
	{
			if (font == 2)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str1[i], GLUT_BITMAP_9_BY_15);
		}
	}

	else if (font == 3)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str1[i], GLUT_BITMAP_8_BY_13);
		}
	}

	else if (font == 4)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str1[i], GLUT_BITMAP_TIMES_ROMAN_10);
		}
	}

	else if (font == 5)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str1[i], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	else if (font == 6)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str1[i], GLUT_BITMAP_HELVETICA_10);
		}
	}

	else if (font == 7)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str1[i], GLUT_BITMAP_HELVETICA_12);
		}
	}

	else if (font == 8)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str1[i], GLUT_BITMAP_HELVETICA_18);
		}
	}
	else if(font>8)
	{
		font=2;
	}
	}
	if(wwindow==2 || ewindow==2)
	{
	if (font == 2)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str2[i], GLUT_BITMAP_9_BY_15);
		}
	}

	else if (font == 3)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str2[i], GLUT_BITMAP_8_BY_13);
		}
	}

	else if (font == 4)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str2[i], GLUT_BITMAP_TIMES_ROMAN_10);
		}
	}

	else if (font == 5)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str2[i], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	else if (font == 6)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str2[i], GLUT_BITMAP_HELVETICA_10);
		}
	}

	else if (font == 7)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str2[i], GLUT_BITMAP_HELVETICA_12);
		}
	}

	else if (font == 8)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str2[i], GLUT_BITMAP_HELVETICA_18);
		}
	}
	else if(font>8)
	{
		font=2;
	}
	}
	if(wwindow==3 || ewindow==3)
	{
	if (font == 2)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str3[i], GLUT_BITMAP_9_BY_15);
		}
	}

	else if (font == 3)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str3[i], GLUT_BITMAP_8_BY_13);
		}
	}

	else if (font == 4)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str3[i], GLUT_BITMAP_TIMES_ROMAN_10);
		}
	}

	else if (font == 5)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str3[i], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	else if (font == 6)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str3[i], GLUT_BITMAP_HELVETICA_10);
		}
	}

	else if (font == 7)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str3[i], GLUT_BITMAP_HELVETICA_12);
		}
	}

	else if (font == 8)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str3[i], GLUT_BITMAP_HELVETICA_18);
		}
	}
	else if(font>8)
	{
		font=2;
	}
	}
	if(wwindow==4 || ewindow==4)
	{
	if (font == 2)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str4[i], GLUT_BITMAP_9_BY_15);
		}
	}

	else if (font == 3)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str4[i], GLUT_BITMAP_8_BY_13);
		}
	}

	else if (font == 4)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str4[i], GLUT_BITMAP_TIMES_ROMAN_10);
		}
	}

	else if (font == 5)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str4[i], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	else if (font == 6)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str4[i], GLUT_BITMAP_HELVETICA_10);
		}
	}

	else if (font == 7)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str4[i], GLUT_BITMAP_HELVETICA_12);
		}
	}

	else if (font == 8)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str4[i], GLUT_BITMAP_HELVETICA_18);
		}
	}
	else if(font>8)
	{
		font=2;
	}
	}
	if(wwindow==5 || ewindow==5)
	{
	if (font == 2)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str5[i], GLUT_BITMAP_9_BY_15);
		}
	}

	else if (font == 3)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str5[i], GLUT_BITMAP_8_BY_13);
		}
	}

	else if (font == 4)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str5[i], GLUT_BITMAP_TIMES_ROMAN_10);
		}
	}

	else if (font == 5)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str5[i], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	else if (font == 6)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str5[i], GLUT_BITMAP_HELVETICA_10);
		}
	}

	else if (font == 7)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str5[i], GLUT_BITMAP_HELVETICA_12);
		}
	}

	else if (font == 8)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str5[i], GLUT_BITMAP_HELVETICA_18);
		}
	}
	else if(font>8)
	{
		font=2;
	}
	}
	if(wwindow==6 || ewindow==6)
	{
	if (font == 2)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str6[i], GLUT_BITMAP_9_BY_15);
		}
	}

	else if (font == 3)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str6[i], GLUT_BITMAP_8_BY_13);
		}
	}

	else if (font == 4)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str6[i], GLUT_BITMAP_TIMES_ROMAN_10);
		}
	}

	else if (font == 5)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str6[i], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	else if (font == 6)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str6[i], GLUT_BITMAP_HELVETICA_10);
		}
	}

	else if (font == 7)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str6[i], GLUT_BITMAP_HELVETICA_12);
		}
	}

	else if (font == 8)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str6[i], GLUT_BITMAP_HELVETICA_18);
		}
	}
	else if(font>8)
	{
		font=2;
	}
	}
	if(wwindow==7 || ewindow==7)
	{
	if (font == 2)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str7[i], GLUT_BITMAP_9_BY_15);
		}
	}

	else if (font == 3)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str7[i], GLUT_BITMAP_8_BY_13);
		}
	}

	else if (font == 4)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str7[i], GLUT_BITMAP_TIMES_ROMAN_10);
		}
	}

	else if (font == 5)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str7[i], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	else if (font == 6)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str7[i], GLUT_BITMAP_HELVETICA_10);
		}
	}

	else if (font == 7)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str7[i], GLUT_BITMAP_HELVETICA_12);
		}
	}

	else if (font == 8)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str7[i], GLUT_BITMAP_HELVETICA_18);
		}
	}
	else if(font>8)
	{
		font=2;
	}
	}
	if(wwindow==8 || ewindow==8)
	{
	if (font == 2)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str8[i], GLUT_BITMAP_9_BY_15);
		}
	}

	else if (font == 3)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str8[i], GLUT_BITMAP_8_BY_13);
		}
	}

	else if (font == 4)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str8[i], GLUT_BITMAP_TIMES_ROMAN_10);
		}
	}

	else if (font == 5)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str8[i], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	else if (font == 6)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str8[i], GLUT_BITMAP_HELVETICA_10);
		}
	}

	else if (font == 7)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str8[i], GLUT_BITMAP_HELVETICA_12);
		}
	}

	else if (font == 8)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str8[i], GLUT_BITMAP_HELVETICA_18);
		}
	}
	else if(font>8)
	{
		font=2;
	}
	}
	if(wwindow==9 || ewindow==9)
	{
	if (font == 2)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str9[i], GLUT_BITMAP_9_BY_15);
		}
	}

	else if (font == 3)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str9[i], GLUT_BITMAP_8_BY_13);
		}
	}

	else if (font == 4)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str9[i], GLUT_BITMAP_TIMES_ROMAN_10);
		}
	}

	else if (font == 5)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str9[i], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	else if (font == 6)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str9[i], GLUT_BITMAP_HELVETICA_10);
		}
	}

	else if (font == 7)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str9[i], GLUT_BITMAP_HELVETICA_12);
		}
	}

	else if (font == 8)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str9[i], GLUT_BITMAP_HELVETICA_18);
		}
	}
	else if(font>8)
	{
		font=2;
	}
	}
	if(wwindow==10 || ewindow==10)
	{
	if (font == 2)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str10[i], GLUT_BITMAP_9_BY_15);
		}
	}

	else if (font == 3)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str10[i], GLUT_BITMAP_8_BY_13);
		}
	}

	else if (font == 4)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str10[i], GLUT_BITMAP_TIMES_ROMAN_10);
		}
	}

	else if (font == 5)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str10[i], GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}

	else if (font == 6)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str10[i], GLUT_BITMAP_HELVETICA_10);
		}
	}

	else if (font == 7)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str10[i], GLUT_BITMAP_HELVETICA_12);
		}
	}

	else if (font == 8)
	{
		for (int i = 0; i <= rown; i++)
		{
			iText(p, q - i * 30, str10[i], GLUT_BITMAP_HELVETICA_18);
		}
	}
	else if(font>8)
	{
		font=2;
	}
	}
}
void iDraw()
{
	iClear();
	if (window == 0)
	{
		iShowBMP(0, 0, photo[4]);
		iShowBMP(0, 652, photo[1]);
		iSetColor(62, 39, 35);
		iText(483, 450, "Book Creator", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(93, 64, 55);
		iText(428, 413, "Build Your Narrative Universe", GLUT_BITMAP_HELVETICA_18);
		iSetColor(33, 33, 33);
		iText(487, 11, "Click Anywhere", GLUT_BITMAP_9_BY_15);
		iLine(487, 8, 613, 8);
	}
	else if (window == 1)
	{
		iShowBMP(0, 0, photo[2]);
		iShowBMP(0, 652, photo[1]);
		iSetColor(120, 30, 0);
		iFilledCircle(500, 360, 40, 1000);
		iFilledCircle(610, 360, 40, 1000);
		iSetColor(255, 255, 255);
		iFilledRectangle(498, 345, 4, 30);
		iFilledRectangle(485, 358, 30, 4);
		iText(467, 300, "New File", GLUT_BITMAP_HELVETICA_18);
		iRectangle(592, 334, 36, 52);
		iFilledRectangle(597, 343, 26, 34);
		iText(566, 300, "Saved File", GLUT_BITMAP_HELVETICA_18);
		iText(50, 35, "Previous Page", GLUT_BITMAP_HELVETICA_12);
	}

	else if (window == 3 && ewindow==0)
	{
		iShowBMP(0, 0, photo[2]);
		iShowBMP(0, 652, photo[1]);
		iSetColor(224, 224, 224);
		iText(505, 670, "Category", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(120, 30, 0);
		iFilledCircle(122, 355, 30, 1000);
		iFilledCircle(322, 449, 30, 1000);
		iFilledCircle(482, 249, 30, 1000);
		iFilledCircle(880, 367, 30, 1000);
		iFilledCircle(1060, 209, 30, 1000);
		iSetColor(255, 255, 255);
		iText(102, 350, "Thriller", GLUT_BITMAP_HELVETICA_12);
		iText(299, 445, "Fantasy", GLUT_BITMAP_HELVETICA_12);
		iText(464, 245, "Horror", GLUT_BITMAP_HELVETICA_12);
		iText(860, 363, "Sci-Fi", GLUT_BITMAP_HELVETICA_12);
		iText(1038, 206, "Mystery", GLUT_BITMAP_HELVETICA_12);
		iText(995, 35, "Next Page", GLUT_BITMAP_HELVETICA_12);
		iText(50, 35, "Previous Page", GLUT_BITMAP_HELVETICA_12);
	}
	else if (window == 4 && ewindow==0)
	{
		iShowBMP(0, 0, photo[2]);
		iShowBMP(0, 652, photo[1]);
		iSetColor(224, 224, 224);
		iText(505, 670, "Category", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(120, 30, 0);
		iFilledCircle(122, 355, 30, 1000);
		iFilledCircle(322, 449, 31, 1000);
		iFilledCircle(482, 249, 32, 1000);
		iFilledCircle(880, 367, 30, 1000);
		iFilledCircle(1060, 209, 30, 1000);
		iSetColor(255, 255, 255);
		iText(104, 350, "Poetry", GLUT_BITMAP_HELVETICA_12);
		iText(297, 445, "Romance", GLUT_BITMAP_HELVETICA_12);
		iText(454, 245, "Biography", GLUT_BITMAP_HELVETICA_12);
		iText(861, 363, "Drama", GLUT_BITMAP_HELVETICA_12);
		iText(1042, 206, "Others", GLUT_BITMAP_HELVETICA_12);
		iText(50, 35, "Previous Page", GLUT_BITMAP_HELVETICA_12);
	}
	else if (window == 5 && wwindow==0)
	{
		iShowBMP(0, 0, photo[3]);
		iShowBMP(0, 652, photo[1]);
		iSetColor(224, 224, 224);
		iSetColor(120, 30, 0);
		iFilledCircle(122, 355, 30, 1000);
		iFilledCircle(322, 449, 30, 1000);
		iFilledCircle(482, 249, 30, 1000);
		iFilledCircle(880, 367, 30, 1000);
		iFilledCircle(1060, 209, 30, 1000);
		iSetColor(255, 255, 255);
		iText(102, 350, "Thriller", GLUT_BITMAP_HELVETICA_12);
		iText(299, 445, "Fantasy", GLUT_BITMAP_HELVETICA_12);
		iText(464, 245, "Horror", GLUT_BITMAP_HELVETICA_12);
		iText(860, 363, "Sci-Fi", GLUT_BITMAP_HELVETICA_12);
		iText(1038, 206, "Mystery", GLUT_BITMAP_HELVETICA_12);
		iText(1015, 35, "More", GLUT_BITMAP_HELVETICA_12);
		iText(50, 35, "Previous Page", GLUT_BITMAP_HELVETICA_12);
	}
	else if (window == 6 && wwindow==0)
	{
		iShowBMP(0, 0, photo[3]);
		iShowBMP(0, 652, photo[1]);
		iSetColor(224, 224, 224);
		iSetColor(120, 30, 0);
		iFilledCircle(122, 355, 30, 1000);
		iFilledCircle(322, 449, 30, 1000);
		iFilledCircle(482, 249, 30, 1000);
		iFilledCircle(880, 367, 30, 1000);
		iFilledCircle(1060, 209, 30, 1000);
		iSetColor(255, 255, 255);
		iText(104, 350, "Poetry", GLUT_BITMAP_HELVETICA_12);
		iText(297, 445, "Romance", GLUT_BITMAP_HELVETICA_12);
		iText(454, 245, "Biography", GLUT_BITMAP_HELVETICA_12);
		iText(861, 363, "Drama", GLUT_BITMAP_HELVETICA_12);
		iText(1042, 206, "Others", GLUT_BITMAP_HELVETICA_12);
		iText(50, 35, "Previous Page", GLUT_BITMAP_HELVETICA_12);
	}
	// else if(flag==1)
	// {
	// 	iShowBMP(l,m,photo[6]);
	// }
	writingwindow();
	editingwindow();
}

void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (mx >= 0 && mx <= 1100 && mx >= 0 && my <= 700 && window == 0)
		{
			window = 1;
		}
		else if (mx >= 50 && mx <= 132 && my >= 36 && my <= 45 && window == 1)
		{
			window = 0;
		}
		else if (mx >= 460 && mx <= 540 && my >= 320 && my <= 400 && window == 1)
		{
			window = 5;
		}
		else if (mx >= 50 && mx <= 132 && my >= 36 && my <= 45 && window == 5)
		{
			window = 1;
		}
		else if (mx >= 1015 && mx <= 1045 && my >= 36 && my <= 45 && window == 5)
		{
			window = 6;
		}
		else if (mx >= 50 && mx <= 132 && my >= 36 && my <= 45 && window == 6)
		{
			window = 5;
		}
		else if (mx >= 570 && mx <= 650 && my >= 320 && my <= 400 && window == 1)
		{
			window = 3;
		}
		else if (mx >= 50 && mx <= 132 && my >= 36 && my <= 45 && window == 3)
		{
			window = 1;
		}
		else if (mx >= 995 && mx <= 1055 && my >= 36 && my <= 45 && window == 3)
		{
			window = 4;
		}
		else if (mx >= 50 && mx <= 132 && my >= 36 && my <= 45 && window == 4)
		{
			window = 3;
		}
		else if (mx >= 107 && mx <= 137 && my >= 340 && my <= 370 && window == 5)
		{
			wwindow = 1;
			writingwindow();
		}
		else if (mx >= 307 && mx <= 337 && my >= 434 && my <= 464 && window == 5)
		{
			wwindow = 2;
			writingwindow();
		}
		else if (mx >= 467 && mx <= 497 && my >= 234 && my <= 264 && window == 5)
		{
			wwindow = 3;
			writingwindow();
		}
		else if (mx >= 865 && mx <= 895 && my >= 352 && my <= 382 && window == 5)
		{
			wwindow = 4;
			writingwindow();
		}
		else if (mx >= 1045 && mx <= 1075 && my >= 194 && my <= 224 && window == 5)
		{
			wwindow = 5;
			writingwindow();
		}
		else if (mx >= 107 && mx <= 137 && my >= 340 && my <= 370 && window == 6)
		{
			wwindow = 6;
			writingwindow();
		}
		else if (mx >= 307 && mx <= 337 && my >= 434 && my <= 464 && window == 6)
		{
			wwindow = 7;
			writingwindow();
		}
		else if (mx >= 467 && mx <= 497 && my >= 234 && my <= 264 && window == 6)
		{
			wwindow = 8;
			writingwindow();
		}
		else if (mx >= 865 && mx <= 895 && my >= 352 && my <= 382 && window == 6)
		{
			wwindow = 9;
			writingwindow();
		}
		else if (mx >= 1045 && mx <= 1075 && my >= 194 && my <= 224 && window == 6)
		{
			wwindow = 10;
			writingwindow();
		}
		else if (mx >= 107 && mx <= 137 && my >= 340 && my <= 370 && window == 3)
		{
			ewindow=1;
			editingwindow();	
		}
		else if (mx >= 307 && mx <= 337 && my >= 434 && my <= 464 && window == 3)
		{
			ewindow=2;
			editingwindow();			
		}
		else if (mx >= 467 && mx <= 497 && my >= 234 && my <= 264 && window == 3)
		{
			ewindow=3;
			editingwindow();			
		}
		else if (mx >= 865 && mx <= 895 && my >= 352 && my <= 382 && window == 3)
		{
			ewindow=4;
			editingwindow();			
		}
		else if (mx >= 1045 && mx <= 1075 && my >= 194 && my <= 224 && window == 3)
		{
			ewindow=5;
			editingwindow();			
		}
		else if (mx >= 107 && mx <= 137 && my >= 340 && my <= 370 && window == 4)
		{
			ewindow=6;
			editingwindow();			
		}
		else if (mx >= 307 && mx <= 337 && my >= 434 && my <= 464 && window == 4)
		{
			ewindow=7;
			editingwindow();			
		}
		else if (mx >= 467 && mx <= 497 && my >= 234 && my <= 264 && window == 4)
		{
			ewindow=8;
			editingwindow();			
		}
		else if (mx >= 865 && mx <= 895 && my >= 352 && my <= 382 && window == 4)
		{
			ewindow=9;
			editingwindow();			
		}
		else if (mx >= 1045 && mx <= 1075 && my >= 194 && my <= 224 && window == 4)
		{
			ewindow=10;
			editingwindow();			
		}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==1)
		{
				wwindow=0;
				window=5;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==2)
		{
				wwindow=0;
				window=5;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==3)
		{
				wwindow=0;
				window=5;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==4){
				wwindow=0;
				window=5;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==5){
				wwindow=0;
				window=5;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==6){
				wwindow=0;
				window=6;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==7){
				wwindow=0;
				window=6;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==8){
				wwindow=0;
				window=6;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==9){
				wwindow=0;
				window=6;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==10){
				wwindow=0;
				window=6;
			}	
	    		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && ewindow==1){
				ewindow=0;
				window=3;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && ewindow==2){
				ewindow=0;
				window=3;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && ewindow==3){
				ewindow=0;
				window=3;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && ewindow==4){
				ewindow=0;
				window=3;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && ewindow==5){
				ewindow=0;
				window=3;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && ewindow==6){
				ewindow=0;
				window=4;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && ewindow==7){
				ewindow=0;
				window=4;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && ewindow==8){
				ewindow=0;
				window=4;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && ewindow==9){
				ewindow=0;
				window=4;
			}
		else if(mx >= 1005 && mx<=1046 && my>=27 && my<=46 && wwindow==10){
				ewindow=0;
				window=4;
			}
			else if(mx >= 800 && mx<=831 && my>=29 && my<=43 && ewindow==1){
		edit=1;
			}
		else if(mx >= 800 && mx<=831 && my>=29 && my<=43 && ewindow==2){
		edit=2;
			}
		else if(mx >= 800 && mx<=831 && my>=29 && my<=43 && ewindow==3){
		edit=3;
			}
		else if(mx >= 800 && mx<=831 && my>=29 && my<=43 && ewindow==4){
		edit=4;
			}
		else if(mx >= 800 && mx<=831 && my>=29 && my<=43 && ewindow==5){
		edit=5;
			}
		else if(mx >= 800 && mx<=831 && my>=29 && my<=43 && ewindow==6){
		edit=6;
			}
		else if(mx >= 800 && mx<=831 && my>=29 && my<=43 && ewindow==7){
		edit=7;
			}
		else if(mx >= 800 && mx<=831 && my>=29 && my<=43 && ewindow==8){
		edit=8;
			}
		else if(mx >= 800 && mx<=831 && my>=29 && my<=43 && ewindow==9){
		edit=9;
			}
		else if(mx >= 800 && mx<=831 && my>=29 && my<=43 && ewindow==10){
		edit=10;
			}
		else if (mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && wwindow == 1)
		{
			save = 1;
			save_file(1);
		}
		else if (mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && wwindow == 2)
		{
			save = 2;
			save_file(2);
		}
		else if (mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && wwindow == 3)
		{
			save = 3;
			save_file(3);
		}
		else if (mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && wwindow == 4)
		{
			save = 4;
			save_file(4);
		}
		else if (mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && wwindow == 5)
		{
			save = 5;
			save_file(5);
		}
		else if (mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && wwindow == 6)
		{
			save = 6;
			save_file(6);
		}
		else if (mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && wwindow == 7)
		{
			save = 7;
			save_file(7);
		}
		else if (mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && wwindow == 8)
		{
			save = 8;
			save_file(8);
		}
		else if (mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && wwindow == 9)
		{
			save = 9;
			save_file(9);
		}
		else if (mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && wwindow == 10)
		{
			save = 10;
			save_file(10);
		}
		else if(mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && ewindow == 1)
		{
			save=1;
	       save_file(1); 		
		}
		else if(mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && ewindow == 2)
		{
			save=2;
	       save_file(2); 		
		}
		else if(mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && ewindow == 3)
		{
			save=3;
	       save_file(3); 		
		}
		else if(mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && ewindow == 4)
		{
			save=4;
	       save_file(4); 		
		}
		else if(mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && ewindow == 5)
		{
			save=5;
	       save_file(5); 		
		}
		else if(mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && ewindow == 6)
		{
			save=6;
	       save_file(6); 		
		}
		else if(mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && ewindow == 7)
		{
			save=7;
	       save_file(7); 		
		}
		else if(mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && ewindow == 8)
		{
			save=8;
	       save_file(8); 		
		}
		else if(mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && ewindow == 9)
		{
			save=9;
	       save_file(9); 		
		}
		else if(mx >= 600 && mx <= 642 && my >= 30 && my <= 45 && ewindow == 10)
		{
			save=10;
	       save_file(10); 		
		}
		else if(wwindow==1 || wwindow==2 || wwindow==3 || wwindow==4 || wwindow==5 || wwindow==6 || wwindow==7 || wwindow==8 || wwindow==9 || wwindow==10  || ewindow==1 || ewindow==2 || ewindow==3 || ewindow==4 || ewindow==5 || ewindow==6 || ewindow==7 || ewindow==8 || ewindow==9 || ewindow==10)
		{
			if(mx>=720 && mx<=755 && my>=603 && my<= 617)
			{
				red+=51;
			}
			else if(mx>=756 && mx<=825 && my>=603 && my<= 617)
			{
				green+=51;
			}
			else if(mx>=826 && mx<=876 && my>=603 && my<= 617)
			{
				blue+=51;
			}
			else if(red>255)
			{
				red=0;
			}
			else if(green>255)
			{
				green=0;
			}
			else if(blue>255)
			{
				blue=0;
			}
			else if(mx >= 600 && mx <= 708 && my >= 628 && my <= 644)
			{
				font++;
			}
		}
		else if(wwindow==1 || wwindow==2 || wwindow==3 || wwindow==4 || wwindow==5 || wwindow==6 || wwindow==7 || wwindow==8 || wwindow==9 || wwindow==10  || ewindow==1 || ewindow==2 || ewindow==3 || ewindow==4 || ewindow==5 || ewindow==6 || ewindow==7 || ewindow==8 || ewindow==9 || ewindow==10)
		{
			flag=1;
		}
	}
}
void save_file(int save)
{
	if (save == 1)
	{
		  if(edit==0){
		thriller_book = fopen("Thriller Book.txt", "w");
		if (thriller_book == NULL)
		{
			printf("thriller book file did not open for writing");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str1[i], thriller_book);
			fprintf(thriller_book, "\n");
		}
		fclose(thriller_book);
	}
	    else if(edit==1){
		thriller_book = fopen("Thriller Book.txt", "a");
		if (thriller_book == NULL)
		{
			printf("thriller book file did not open for appending");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str1[i], thriller_book);
			fprintf(thriller_book, "\n");
		}
		fclose(thriller_book);
		edit=0;
	}
	}
	if (save == 2)
	{  
		if(edit==0){
		fantasy_book = fopen("Fantasy Book.txt", "w");
		if (fantasy_book == NULL)
		{
			printf("fantasy book file did not open for writing");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str2[i], fantasy_book);
			fprintf(fantasy_book, "\n");
		}
		fclose(fantasy_book);
	}
	else if(edit==2){
		fantasy_book = fopen("Fantasy Book.txt", "a");
		if (fantasy_book == NULL)
		{
			printf("fantasy book file did not open for appending");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str2[i], fantasy_book);
			fprintf(fantasy_book, "\n");
		}
		fclose(fantasy_book);
		edit=0;
	}
	}
	if (save == 3)
	{ 
		if(edit==0){
		horror_book = fopen("Horror Book.txt", "w");
		if (horror_book == NULL)
		{
			printf("horror book file did not open for writing");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str3[i], horror_book);
			fprintf(horror_book, "\n");
		}
		fclose(horror_book);
	}
    else if(edit==3){
		horror_book = fopen("Horror Book.txt", "a");
		if (horror_book == NULL)
		{
			printf("horror book file did not open for appending");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str3[i], horror_book);
			fprintf(horror_book, "\n");
		}
		fclose(horror_book);
		edit=0;
	}
	}
	if (save == 4)
	{   
		if(edit==0){
		scifi_book = fopen("Sci-Fi Book.txt", "w");
		if (scifi_book == NULL)
		{
			printf("sci-fi book file did not open for writing");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str4[i], scifi_book);
			fprintf(scifi_book, "\n");
		}
		fclose(scifi_book);
	}

	   else if(edit==4){
		scifi_book = fopen("Sci-Fi Book.txt", "a");
		if (scifi_book == NULL)
		{
			printf("sci-fi book file did not open for appending");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str4[i], scifi_book);
			fprintf(scifi_book, "\n");
		}
		fclose(scifi_book);
		edit=0;
	}
	}
	if (save == 5)
	{  
		if(edit==0){
		mystery_book = fopen("Mystery Book.txt", "w");
		if (mystery_book == NULL)
		{
			printf("mystery book file did not open for writing");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str5[i], mystery_book);
			fprintf(mystery_book, "\n");
		}
		fclose(mystery_book);
	}
    else if(edit==5){
		mystery_book = fopen("Mystery Book.txt", "a");
		if (mystery_book == NULL)
		{
			printf("mystery book file did not open for appending");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str5[i], mystery_book);
			fprintf(mystery_book, "\n");
		}
		fclose(mystery_book);
		edit=0;
	}
	}
	if (save == 6)
	{
		if(edit==0){
		poetry_book = fopen("Poetry Book.txt", "w");
		if (poetry_book == NULL)
		{
			printf("poetry book file did not open for writing");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str6[i], poetry_book);
			fprintf(poetry_book, "\n");
		}
		fclose(poetry_book);
		}
		else if(edit==6){
		poetry_book = fopen("Poetry Book.txt", "a");
		if (poetry_book == NULL)
		{
			printf("poetry book file did not open for appending");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str6[i], poetry_book);
			fprintf(poetry_book, "\n");
		}
		fclose(poetry_book);
		edit=0;
		}
	}
	if (save == 7)
	{   
		if(edit==0){
		romance_book = fopen("Romance Book.txt", "w");
		if (romance_book == NULL)
		{
			printf("romance book file did not open for writing ");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str7[i], romance_book);
			fprintf(romance_book, "\n");
		}
		fclose(romance_book);
		}
		else if(edit==7){
		romance_book = fopen("Romance Book.txt", "a");
		if (romance_book == NULL)
		{
			printf("romance book file did not open for appendending");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str7[i], romance_book);
			fprintf(romance_book, "\n");
		}
		fclose(romance_book);
		edit=0;
		}
	}
	if (save == 8)
	{   
		if(edit==0){
		biography_book = fopen("Biography Book.txt", "w");
		if (biography_book == NULL)
		{
			printf("biography book file did not open for writing");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str8[i], biography_book);
			fprintf(biography_book, "\n");
		}
		fclose(biography_book);
		}
	else if(edit==8){
		biography_book = fopen("Biography Book.txt", "a");
		if (biography_book == NULL)
		{
			printf("biography book file did not open for appending");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str8[i], biography_book);
			fprintf(biography_book, "\n");
		}
		fclose(biography_book);
		edit=0;
		}
	}
	if (save == 9)
	{  
		if(edit==0){
		drama_book = fopen("Drama Book.txt", "w");
		if (drama_book == NULL)
		{
			printf("drama book file did not open for writing");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str9[i], drama_book);
			fprintf(drama_book, "\n");
		}
		fclose(drama_book);
	}
	else if(edit==9){
		drama_book = fopen("Drama Book.txt", "a");
		if (drama_book == NULL)
		{
			printf("drama book file did not open for appending");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str9[i], drama_book);
			fprintf(drama_book, "\n");
		}
		fclose(drama_book);
		edit=0;
	}
	}
	if (save == 10)
	{  
		if(edit==0){
		others_book = fopen("Others Book.txt", "w");
		if (others_book == NULL)
		{
			printf("others book file did not open for writing");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str10[i], others_book);
			fprintf(others_book, "\n");
		}
		fclose(others_book);
		}
		else if(edit==10){
		others_book = fopen("Others Book.txt", "a");
		if (others_book == NULL)
		{
			printf("others book file did not open for writing");
		}
		for (int i = 0; i < 20; i++)
		{
			fputs(str10[i], others_book);
			fprintf(others_book, "\n");
		}
		fclose(others_book);
		edit=0;
		}
	}
}
void iKeyboard(unsigned char key)
{
	if (wwindow == 1 || (ewindow==1 && edit==1))
	{
		if (key != '\b' && key != '\r' && indexNumber < 53)
		{
			str1[rown][indexNumber] = key;
			indexNumber++;
			str1[rown][indexNumber] = '\0';
		}
		else if (key == '\r' || indexNumber == 53)
		{
			printf("kire vai sami mahbub\n");
			rown++;
			indexNumber = 0;
		}
		else if (key == '\b')
		{
			if (indexNumber == 0 && rown > 0)
			{
				indexNumber = strlen(str1[rown - 1]);
				rown--;
				str1[rown][indexNumber - 1] = '\0';
			}
			else
			{
				str1[rown][indexNumber - 1] = '\0';
				indexNumber--;
			}
		}
		printf("%d\n", rown);
		for (int i = 0; i <= rown; i++)
		{
			printf("%s\n", str1[i]);
		}
	}
	else if(wwindow==2 || (ewindow==2 && edit==2))
	{
		if (key != '\b' && key != '\r' && indexNumber < 53)
	{
		str2[rown][indexNumber] = key;
		indexNumber++;
		str2[rown][indexNumber] = '\0';
	}
	else if (key == '\r' || indexNumber == 53)
	{
		printf("kire vai sami mahbub\n");
		rown++;
		indexNumber = 0;
	}
	else if (key == '\b')
	{
		if (indexNumber == 0 && rown > 0)
		{
			indexNumber = strlen(str2[rown - 1]);
			rown--;
			str2[rown][indexNumber - 1] = '\0';
		}
		else
		{
			str2[rown][indexNumber - 1] = '\0';
			indexNumber--;
		}
	}
	printf("%d\n", rown);
	for (int i = 0; i <= rown; i++)
		{
			printf("%s\n", str2[i]);
		}	
	}
	else if(wwindow==3 || (ewindow==3 && edit==3))
	{
		if (key != '\b' && key != '\r' && indexNumber < 53)
	{
		str3[rown][indexNumber] = key;
		indexNumber++;
		str3[rown][indexNumber] = '\0';
	}
	else if (key == '\r' || indexNumber == 53)
	{
		printf("kire vai sami mahbub\n");
		rown++;
		indexNumber = 0;
	}
	else if (key == '\b')
	{
		if (indexNumber == 0 && rown > 0)
		{
			indexNumber = strlen(str3[rown - 1]);
			rown--;
			str3[rown][indexNumber - 1] = '\0';
		}
		else
		{
			str3[rown][indexNumber - 1] = '\0';
			indexNumber--;
		}
	}
	printf("%d\n", rown);
	for (int i = 0; i <= rown; i++)
		{
			printf("%s\n", str3[i]);
		}	
	}
	else if(wwindow==4 || (ewindow==4 && edit==4))
	{
		if (key != '\b' && key != '\r' && indexNumber < 53)
	{
		str4[rown][indexNumber] = key;
		indexNumber++;
		str4[rown][indexNumber] = '\0';
	}
	else if (key == '\r' || indexNumber == 53)
	{
		printf("kire vai sami mahbub\n");
		rown++;
		indexNumber = 0;
	}
	else if (key == '\b')
	{
		if (indexNumber == 0 && rown > 0)
		{
			indexNumber = strlen(str4[rown - 1]);
			rown--;
			str4[rown][indexNumber - 1] = '\0';
		}
		else
		{
			str4[rown][indexNumber - 1] = '\0';
			indexNumber--;
		}
	}
	printf("%d\n", rown);
	for (int i = 0; i <= rown; i++)
		{
			printf("%s\n", str4[i]);
		}	
	}
	else if(wwindow==5 || (ewindow==5 && edit==5))
	{
		if (key != '\b' && key != '\r' && indexNumber < 53)
	{
		str5[rown][indexNumber] = key;
		indexNumber++;
		str5[rown][indexNumber] = '\0';
	}
	else if (key == '\r' || indexNumber == 53)
	{
		printf("kire vai sami mahbub\n");
		rown++;
		indexNumber = 0;
	}
	else if (key == '\b')
	{
		if (indexNumber == 0 && rown > 0)
		{
			indexNumber = strlen(str5[rown - 1]);
			rown--;
			str5[rown][indexNumber - 1] = '\0';
		}
		else
		{
			str5[rown][indexNumber - 1] = '\0';
			indexNumber--;
		}
	}
	printf("%d\n", rown);
	for (int i = 0; i <= rown; i++)
		{
			printf("%s\n", str5[i]);
		}	
	}
	else if(wwindow==6 || (ewindow==6 && edit==6))
	{
		if (key != '\b' && key != '\r' && indexNumber < 53)
	{
		str6[rown][indexNumber] = key;
		indexNumber++;
		str6[rown][indexNumber] = '\0';
	}
	else if (key == '\r' || indexNumber == 53)
	{
		printf("kire vai sami mahbub\n");
		rown++;
		indexNumber = 0;
	}
	else if (key == '\b')
	{
		if (indexNumber == 0 && rown > 0)
		{
			indexNumber = strlen(str6[rown - 1]);
			rown--;
			str6[rown][indexNumber - 1] = '\0';
		}
		else
		{
			str6[rown][indexNumber - 1] = '\0';
			indexNumber--;
		}
	}
	printf("%d\n", rown);
	for (int i = 0; i <= rown; i++)
		{
			printf("%s\n", str6[i]);
		}	
	}
	else if(wwindow==7 || (ewindow==7 && edit==7))
	{
		if (key != '\b' && key != '\r' && indexNumber < 53)
	{
		str7[rown][indexNumber] = key;
		indexNumber++;
		str7[rown][indexNumber] = '\0';
	}
	else if (key == '\r' || indexNumber == 53)
	{
		printf("kire vai sami mahbub\n");
		rown++;
		indexNumber = 0;
	}
	else if (key == '\b')
	{
		if (indexNumber == 0 && rown > 0)
		{
			indexNumber = strlen(str7[rown - 1]);
			rown--;
			str7[rown][indexNumber - 1] = '\0';
		}
		else
		{
			str7[rown][indexNumber - 1] = '\0';
			indexNumber--;
		}
	}
	printf("%d\n", rown);
	for (int i = 0; i <= rown; i++)
		{
			printf("%s\n", str7[i]);
		}	
	}
	else if(wwindow==8 || (ewindow==8 && edit==8))
	{
		if (key != '\b' && key != '\r' && indexNumber < 53)
	{
		str8[rown][indexNumber] = key;
		indexNumber++;
		str8[rown][indexNumber] = '\0';
	}
	else if (key == '\r' || indexNumber == 53)
	{
		printf("kire vai sami mahbub\n");
		rown++;
		indexNumber = 0;
	}
	else if (key == '\b')
	{
		if (indexNumber == 0 && rown > 0)
		{
			indexNumber = strlen(str8[rown - 1]);
			rown--;
			str8[rown][indexNumber - 1] = '\0';
		}
		else
		{
			str8[rown][indexNumber - 1] = '\0';
			indexNumber--;
		}
	}
	printf("%d\n", rown);
	for (int i = 0; i <= rown; i++)
		{
			printf("%s\n", str8[i]);
		}	
	}
	else if(wwindow==9 || (ewindow==9 && edit==9))
	{
		if (key != '\b' && key != '\r' && indexNumber < 53)
	{
		str9[rown][indexNumber] = key;
		indexNumber++;
		str9[rown][indexNumber] = '\0';
	}
	else if (key == '\r' || indexNumber == 53)
	{
		//printf("kire vai cover koi sami mahbub?\n");
		rown++;
		indexNumber = 0;
	}
	else if (key == '\b')
	{
		if (indexNumber == 0 && rown > 0)
		{
			indexNumber = strlen(str9[rown - 1]);
			rown--;
			str9[rown][indexNumber - 1] = '\0';
		}
		else
		{
			str9[rown][indexNumber - 1] = '\0';
			indexNumber--;
		}
	}
	printf("%d\n", rown);
	for (int i = 0; i <= rown; i++)
		{
			printf("%s\n", str9[i]);
		}	
	}
	else if(wwindow==10 || (ewindow==10 && edit==10))
	{
		if (key != '\b' && key != '\r' && indexNumber < 53)
	{
		str10[rown][indexNumber] = key;
		indexNumber++;
		str10[rown][indexNumber] = '\0';
	}
	else if (key == '\r' || indexNumber == 53)
	{
		printf("kire vai sami mahbub\n");
		rown++;
		indexNumber = 0;
	}
	else if (key == '\b')
	{
		if (indexNumber == 0 && rown > 0)
		{
			indexNumber = strlen(str10[rown - 1]);
			rown--;
			str10[rown][indexNumber - 1] = '\0';
		}
		else
		{
			str10[rown][indexNumber - 1] = '\0';
			indexNumber--;
		}
	}
	printf("%d\n", rown);
	for (int i = 0; i <= rown; i++)
		{
			printf("%s\n", str10[i]);
		}	
	}

}

void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
}

int main()
{

	iInitialize(x, y, "Book Creator");
	return 0;
}
