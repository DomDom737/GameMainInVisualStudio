#ifndef MEINZ_H
#define MEINZ_H
// Autor: Ortner Dominik
#include "Bauer.h"
#include <iostream>
#include <windows.h>
#include "gotoxy.h"

class Meinz : public Bauer
{
private:
	void drawCharacter(unsigned short x, unsigned short y)
	{
		gotoxy(4 + x, 2 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 3 + y); setcolor(0x77); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 3 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(6 + x, 4 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 5 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(7 + x, 5 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 6 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 7 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(9 + x, 7 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 8 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 8 + y); setcolor(0x88); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 8 + y); setcolor(0xFF); printf(" ");
		gotoxy(5 + x, 9 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 9 + y); setcolor(0x88); printf(" ");
		gotoxy(13 + x, 9 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(20 + x, 9 + y); setcolor(0x88); printf(" ");
		gotoxy(26 + x, 9 + y); setcolor(0x88); printf(" ");
		gotoxy(5 + x, 10 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 10 + y); setcolor(0x88); printf(" ");
		gotoxy(12 + x, 10 + y); setcolor(0xFF); printf(" ");
		gotoxy(13 + x, 10 + y); setcolor(0x88); printf(" ");
		gotoxy(14 + x, 10 + y); setcolor(0xFF); printf(" ");
		gotoxy(18 + x, 10 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(6 + x, 11 + y); setcolor(0x77); printf(" ");
		gotoxy(7 + x, 11 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(10 + x, 11 + y); setcolor(0x88); printf(" ");
		gotoxy(11 + x, 11 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 11 + y); setcolor(0x88); printf(" ");
		gotoxy(19 + x, 11 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 12 + y); setcolor(0x88); printf(" ");
		gotoxy(6 + x, 12 + y); setcolor(0xFF); printf(" ");
		gotoxy(7 + x, 12 + y); setcolor(0x77); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 12 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(16 + x, 12 + y); setcolor(0x77); printf(" ");
		gotoxy(17 + x, 12 + y); setcolor(0xFF); printf(" ");
		gotoxy(18 + x, 12 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(20 + x, 12 + y); setcolor(0x88); printf(" ");
		gotoxy(21 + x, 12 + y); setcolor(0x77); printf(" ");
		gotoxy(22 + x, 12 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(24 + x, 12 + y); setcolor(0x77); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(28 + x, 12 + y); setcolor(0x88); printf(" "); printf(" "); printf(" ");
		gotoxy(3 + x, 13 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(5 + x, 13 + y); setcolor(0x88); printf(" ");
		gotoxy(6 + x, 13 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(15 + x, 13 + y); setcolor(0x77); printf(" ");
		gotoxy(16 + x, 13 + y); setcolor(0xFF); printf(" ");
		gotoxy(17 + x, 13 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(19 + x, 13 + y); setcolor(0x88); printf(" ");
		gotoxy(20 + x, 13 + y); setcolor(0x77); printf(" ");
		gotoxy(21 + x, 13 + y); setcolor(0x88); printf(" ");
		gotoxy(23 + x, 13 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(2 + x, 14 + y); setcolor(0x88); printf(" ");
		gotoxy(3 + x, 14 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(5 + x, 14 + y); setcolor(0x88); printf(" ");
		gotoxy(6 + x, 14 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(15 + x, 14 + y); setcolor(0x77); printf(" ");
		gotoxy(16 + x, 14 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(18 + x, 14 + y); setcolor(0x77); printf(" ");
		gotoxy(19 + x, 14 + y); setcolor(0x88); printf(" ");
		gotoxy(20 + x, 14 + y); setcolor(0x77); printf(" ");
		gotoxy(21 + x, 14 + y); setcolor(0x88); printf(" ");
		gotoxy(1 + x, 15 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(3 + x, 15 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(6 + x, 15 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(19 + x, 15 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(1 + x, 16 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(3 + x, 16 + y); setcolor(0xFF); printf(" ");
		gotoxy(6 + x, 16 + y); setcolor(0x77); printf(" "); printf(" "); printf(" ");
		gotoxy(9 + x, 16 + y); setcolor(0xFF); printf(" ");
		gotoxy(10 + x, 16 + y); setcolor(0x77); printf(" "); printf(" "); printf(" ");
		gotoxy(1 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(6 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(8 + x, 17 + y); setcolor(0x88); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(1 + x, 18 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(3 + x, 18 + y); setcolor(0x88); printf(" ");
		gotoxy(6 + x, 18 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(8 + x, 18 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 18 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(1 + x, 19 + y); setcolor(0xFF); printf(" ");
		gotoxy(2 + x, 19 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(6 + x, 19 + y); setcolor(0xFF); printf(" ");
		gotoxy(7 + x, 19 + y); setcolor(0x77); printf(" ");
		gotoxy(8 + x, 19 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 19 + y); setcolor(0x77); printf(" ");
		gotoxy(12 + x, 19 + y); setcolor(0xFF); printf(" ");
		gotoxy(6 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(7 + x, 20 + y); setcolor(0xFF); printf(" ");
		gotoxy(8 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(9 + x, 20 + y); setcolor(0xFF); printf(" ");
		gotoxy(10 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(11 + x, 20 + y); setcolor(0xFF); printf(" ");
		gotoxy(12 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(6 + x, 21 + y); setcolor(0x77); printf(" ");
		gotoxy(7 + x, 21 + y); setcolor(0xFF); printf(" ");
		gotoxy(8 + x, 21 + y); setcolor(0x77); printf(" ");
		gotoxy(9 + x, 21 + y); setcolor(0xFF); printf(" ");
		gotoxy(10 + x, 21 + y); setcolor(0x77); printf(" ");
		gotoxy(11 + x, 21 + y); setcolor(0xFF); printf(" ");
		gotoxy(12 + x, 21 + y); setcolor(0x77); printf(" ");
		gotoxy(6 + x, 22 + y); setcolor(0xFF); printf(" ");
		gotoxy(7 + x, 22 + y); setcolor(0x77); printf(" ");
		gotoxy(8 + x, 22 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 22 + y); setcolor(0x77); printf(" ");
		gotoxy(12 + x, 22 + y); setcolor(0xFF); printf(" ");
		gotoxy(5 + x, 23 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(10 + x, 23 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 24 + y); setcolor(0xFF); printf(" ");
		gotoxy(6 + x, 24 + y); setcolor(0x77); printf(" ");
		gotoxy(7 + x, 24 + y); setcolor(0xFF); printf(" ");
		gotoxy(11 + x, 24 + y); setcolor(0xFF); printf(" ");
		gotoxy(12 + x, 24 + y); setcolor(0x77); printf(" ");
		gotoxy(13 + x, 24 + y); setcolor(0xFF); printf(" ");
		gotoxy(5 + x, 25 + y); setcolor(0xFF); printf(" ");
		gotoxy(6 + x, 25 + y); setcolor(0x77); printf(" ");
		gotoxy(7 + x, 25 + y); setcolor(0xFF); printf(" ");
		gotoxy(11 + x, 25 + y); setcolor(0xFF); printf(" ");
		gotoxy(12 + x, 25 + y); setcolor(0x77); printf(" ");
		gotoxy(13 + x, 25 + y); setcolor(0xFF); printf(" ");
		gotoxy(4 + x, 26 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 26 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(4 + x, 27 + y); setcolor(0xFF); printf(" ");
		gotoxy(5 + x, 27 + y); setcolor(0x77); printf(" ");
		gotoxy(6 + x, 27 + y); setcolor(0xFF); printf(" ");
		gotoxy(12 + x, 27 + y); setcolor(0xFF); printf(" ");
		gotoxy(13 + x, 27 + y); setcolor(0x77); printf(" ");
		gotoxy(14 + x, 27 + y); setcolor(0xFF); printf(" ");
		gotoxy(4 + x, 28 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 28 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(4 + x, 29 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 29 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" ");
		setcolor(0x00);
	}
	
	void drawCharacterReverse(unsigned short x, unsigned short y)
	{
		gotoxy(20 + x, 2 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(18 + x, 3 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(21 + x, 3 + y); setcolor(0x77); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 4 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 5 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(25 + x, 5 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(17 + x, 6 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 7 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(23 + x, 7 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 8 + y); setcolor(0xFF); printf(" ");
		gotoxy(18 + x, 8 + y); setcolor(0x88); printf(" "); printf(" "); printf(" ");
		gotoxy(21 + x, 8 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 9 + y); setcolor(0x88); printf(" ");
		gotoxy(11 + x, 9 + y); setcolor(0x88); printf(" ");
		gotoxy(17 + x, 9 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(19 + x, 9 + y); setcolor(0x88); printf(" ");
		gotoxy(20 + x, 9 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(2 + x, 10 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 10 + y); setcolor(0xFF); printf(" ");
		gotoxy(18 + x, 10 + y); setcolor(0x88); printf(" ");
		gotoxy(19 + x, 10 + y); setcolor(0xFF); printf(" ");
		gotoxy(20 + x, 10 + y); setcolor(0x88); printf(" ");
		gotoxy(21 + x, 10 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(1 + x, 11 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 11 + y); setcolor(0x88); printf(" ");
		gotoxy(18 + x, 11 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(21 + x, 11 + y); setcolor(0x88); printf(" ");
		gotoxy(22 + x, 11 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(25 + x, 11 + y); setcolor(0x77); printf(" ");
		gotoxy(1 + x, 12 + y); setcolor(0x88); printf(" "); printf(" "); printf(" ");
		gotoxy(4 + x, 12 + y); setcolor(0x77); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 12 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(10 + x, 12 + y); setcolor(0x77); printf(" ");
		gotoxy(11 + x, 12 + y); setcolor(0x88); printf(" ");
		gotoxy(12 + x, 12 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(14 + x, 12 + y); setcolor(0xFF); printf(" ");
		gotoxy(15 + x, 12 + y); setcolor(0x77); printf(" ");
		gotoxy(16 + x, 12 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(18 + x, 12 + y); setcolor(0x77); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(25 + x, 12 + y); setcolor(0xFF); printf(" ");
		gotoxy(26 + x, 12 + y); setcolor(0x88); printf(" ");
		gotoxy(3 + x, 13 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(10 + x, 13 + y); setcolor(0x88); printf(" ");
		gotoxy(11 + x, 13 + y); setcolor(0x77); printf(" ");
		gotoxy(12 + x, 13 + y); setcolor(0x88); printf(" ");
		gotoxy(13 + x, 13 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(15 + x, 13 + y); setcolor(0xFF); printf(" ");
		gotoxy(16 + x, 13 + y); setcolor(0x77); printf(" ");
		gotoxy(17 + x, 13 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(26 + x, 13 + y); setcolor(0x88); printf(" ");
		gotoxy(27 + x, 13 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(10 + x, 14 + y); setcolor(0x88); printf(" ");
		gotoxy(11 + x, 14 + y); setcolor(0x77); printf(" ");
		gotoxy(12 + x, 14 + y); setcolor(0x88); printf(" ");
		gotoxy(13 + x, 14 + y); setcolor(0x77); printf(" ");
		gotoxy(14 + x, 14 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(16 + x, 14 + y); setcolor(0x77); printf(" ");
		gotoxy(17 + x, 14 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(26 + x, 14 + y); setcolor(0x88); printf(" ");
		gotoxy(27 + x, 14 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(29 + x, 14 + y); setcolor(0x88); printf(" ");
		gotoxy(11 + x, 15 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(19 + x, 15 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(27 + x, 15 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(29 + x, 15 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(19 + x, 16 + y); setcolor(0x77); printf(" "); printf(" "); printf(" ");
		gotoxy(22 + x, 16 + y); setcolor(0xFF); printf(" ");
		gotoxy(23 + x, 16 + y); setcolor(0x77); printf(" "); printf(" "); printf(" ");
		gotoxy(28 + x, 16 + y); setcolor(0xFF); printf(" ");
		gotoxy(29 + x, 16 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(19 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(21 + x, 17 + y); setcolor(0x88); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(28 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(19 + x, 18 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(21 + x, 18 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 18 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(28 + x, 18 + y); setcolor(0x88); printf(" ");
		gotoxy(29 + x, 18 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(19 + x, 19 + y); setcolor(0xFF); printf(" ");
		gotoxy(20 + x, 19 + y); setcolor(0x77); printf(" ");
		gotoxy(21 + x, 19 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 19 + y); setcolor(0x77); printf(" ");
		gotoxy(25 + x, 19 + y); setcolor(0xFF); printf(" ");
		gotoxy(28 + x, 19 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(30 + x, 19 + y); setcolor(0xFF); printf(" ");
		gotoxy(19 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(20 + x, 20 + y); setcolor(0xFF); printf(" ");
		gotoxy(21 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(22 + x, 20 + y); setcolor(0xFF); printf(" ");
		gotoxy(23 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(24 + x, 20 + y); setcolor(0xFF); printf(" ");
		gotoxy(25 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(19 + x, 21 + y); setcolor(0x77); printf(" ");
		gotoxy(20 + x, 21 + y); setcolor(0xFF); printf(" ");
		gotoxy(21 + x, 21 + y); setcolor(0x77); printf(" ");
		gotoxy(22 + x, 21 + y); setcolor(0xFF); printf(" ");
		gotoxy(23 + x, 21 + y); setcolor(0x77); printf(" ");
		gotoxy(24 + x, 21 + y); setcolor(0xFF); printf(" ");
		gotoxy(25 + x, 21 + y); setcolor(0x77); printf(" ");
		gotoxy(19 + x, 22 + y); setcolor(0xFF); printf(" ");
		gotoxy(20 + x, 22 + y); setcolor(0x77); printf(" ");
		gotoxy(21 + x, 22 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 22 + y); setcolor(0x77); printf(" ");
		gotoxy(25 + x, 22 + y); setcolor(0xFF); printf(" ");
		gotoxy(19 + x, 23 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(23 + x, 23 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(18 + x, 24 + y); setcolor(0xFF); printf(" ");
		gotoxy(19 + x, 24 + y); setcolor(0x77); printf(" ");
		gotoxy(20 + x, 24 + y); setcolor(0xFF); printf(" ");
		gotoxy(24 + x, 24 + y); setcolor(0xFF); printf(" ");
		gotoxy(25 + x, 24 + y); setcolor(0x77); printf(" ");
		gotoxy(26 + x, 24 + y); setcolor(0xFF); printf(" ");
		gotoxy(18 + x, 25 + y); setcolor(0xFF); printf(" ");
		gotoxy(19 + x, 25 + y); setcolor(0x77); printf(" ");
		gotoxy(20 + x, 25 + y); setcolor(0xFF); printf(" ");
		gotoxy(24 + x, 25 + y); setcolor(0xFF); printf(" ");
		gotoxy(25 + x, 25 + y); setcolor(0x77); printf(" ");
		gotoxy(26 + x, 25 + y); setcolor(0xFF); printf(" ");
		gotoxy(18 + x, 26 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(25 + x, 26 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 27 + y); setcolor(0xFF); printf(" ");
		gotoxy(18 + x, 27 + y); setcolor(0x77); printf(" ");
		gotoxy(19 + x, 27 + y); setcolor(0xFF); printf(" ");
		gotoxy(25 + x, 27 + y); setcolor(0xFF); printf(" ");
		gotoxy(26 + x, 27 + y); setcolor(0x77); printf(" ");
		gotoxy(27 + x, 27 + y); setcolor(0xFF); printf(" ");
		gotoxy(16 + x, 28 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 28 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(16 + x, 29 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 29 + y); setcolor(0x88); printf(" "); printf(" "); printf(" "); printf(" ");
		setcolor(0x00);
	}

	void clearCharacter(unsigned short x, unsigned short y)
	{
		setcolor(0x00);
		gotoxy(4 + x, 2 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 3 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 3 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(6 + x, 4 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 5 + y); printf(" "); printf(" ");
		gotoxy(7 + x, 5 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 6 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 7 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(9 + x, 7 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 8 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 8 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 8 + y); printf(" ");
		gotoxy(5 + x, 9 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 9 + y); printf(" ");
		gotoxy(13 + x, 9 + y); printf(" "); printf(" ");
		gotoxy(20 + x, 9 + y); printf(" ");
		gotoxy(26 + x, 9 + y); printf(" ");
		gotoxy(5 + x, 10 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 10 + y); printf(" ");
		gotoxy(12 + x, 10 + y); printf(" ");
		gotoxy(13 + x, 10 + y); printf(" ");
		gotoxy(14 + x, 10 + y); printf(" ");
		gotoxy(18 + x, 10 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(6 + x, 11 + y); printf(" ");
		gotoxy(7 + x, 11 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(10 + x, 11 + y); printf(" ");
		gotoxy(11 + x, 11 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 11 + y); printf(" ");
		gotoxy(19 + x, 11 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 12 + y); printf(" ");
		gotoxy(6 + x, 12 + y); printf(" ");
		gotoxy(7 + x, 12 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(16 + x, 12 + y); printf(" ");
		gotoxy(17 + x, 12 + y); printf(" ");
		gotoxy(18 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(20 + x, 12 + y); printf(" ");
		gotoxy(21 + x, 12 + y); printf(" ");
		gotoxy(22 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(24 + x, 12 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(28 + x, 12 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(3 + x, 13 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 13 + y); printf(" ");
		gotoxy(6 + x, 13 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(15 + x, 13 + y); printf(" ");
		gotoxy(16 + x, 13 + y); printf(" ");
		gotoxy(17 + x, 13 + y); printf(" "); printf(" ");
		gotoxy(19 + x, 13 + y); printf(" ");
		gotoxy(20 + x, 13 + y); printf(" ");
		gotoxy(21 + x, 13 + y); printf(" ");
		gotoxy(23 + x, 13 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(2 + x, 14 + y); printf(" ");
		gotoxy(3 + x, 14 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 14 + y); printf(" ");
		gotoxy(6 + x, 14 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(15 + x, 14 + y); printf(" ");
		gotoxy(16 + x, 14 + y); printf(" "); printf(" ");
		gotoxy(18 + x, 14 + y); printf(" ");
		gotoxy(19 + x, 14 + y); printf(" ");
		gotoxy(20 + x, 14 + y); printf(" ");
		gotoxy(21 + x, 14 + y); printf(" ");
		gotoxy(1 + x, 15 + y); printf(" "); printf(" ");
		gotoxy(3 + x, 15 + y); printf(" "); printf(" ");
		gotoxy(6 + x, 15 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(19 + x, 15 + y); printf(" "); printf(" ");
		gotoxy(1 + x, 16 + y); printf(" "); printf(" ");
		gotoxy(3 + x, 16 + y); printf(" ");
		gotoxy(6 + x, 16 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(9 + x, 16 + y); printf(" ");
		gotoxy(10 + x, 16 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(1 + x, 17 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(6 + x, 17 + y); printf(" "); printf(" ");
		gotoxy(8 + x, 17 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 17 + y); printf(" "); printf(" ");
		gotoxy(1 + x, 18 + y); printf(" "); printf(" ");
		gotoxy(3 + x, 18 + y); printf(" ");
		gotoxy(6 + x, 18 + y); printf(" "); printf(" ");
		gotoxy(8 + x, 18 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 18 + y); printf(" "); printf(" ");
		gotoxy(1 + x, 19 + y); printf(" ");
		gotoxy(2 + x, 19 + y); printf(" "); printf(" ");
		gotoxy(6 + x, 19 + y); printf(" ");
		gotoxy(7 + x, 19 + y); printf(" ");
		gotoxy(8 + x, 19 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 19 + y); printf(" ");
		gotoxy(12 + x, 19 + y); printf(" ");
		gotoxy(6 + x, 20 + y); printf(" ");
		gotoxy(7 + x, 20 + y); printf(" ");
		gotoxy(8 + x, 20 + y); printf(" ");
		gotoxy(9 + x, 20 + y); printf(" ");
		gotoxy(10 + x, 20 + y); printf(" ");
		gotoxy(11 + x, 20 + y); printf(" ");
		gotoxy(12 + x, 20 + y); printf(" ");
		gotoxy(6 + x, 21 + y); printf(" ");
		gotoxy(7 + x, 21 + y); printf(" ");
		gotoxy(8 + x, 21 + y); printf(" ");
		gotoxy(9 + x, 21 + y); printf(" ");
		gotoxy(10 + x, 21 + y); printf(" ");
		gotoxy(11 + x, 21 + y); printf(" ");
		gotoxy(12 + x, 21 + y); printf(" ");
		gotoxy(6 + x, 22 + y); printf(" ");
		gotoxy(7 + x, 22 + y); printf(" ");
		gotoxy(8 + x, 22 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 22 + y); printf(" ");
		gotoxy(12 + x, 22 + y); printf(" ");
		gotoxy(5 + x, 23 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(10 + x, 23 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 24 + y); printf(" ");
		gotoxy(6 + x, 24 + y); printf(" ");
		gotoxy(7 + x, 24 + y); printf(" ");
		gotoxy(11 + x, 24 + y); printf(" ");
		gotoxy(12 + x, 24 + y); printf(" ");
		gotoxy(13 + x, 24 + y); printf(" ");
		gotoxy(5 + x, 25 + y); printf(" ");
		gotoxy(6 + x, 25 + y); printf(" ");
		gotoxy(7 + x, 25 + y); printf(" ");
		gotoxy(11 + x, 25 + y); printf(" ");
		gotoxy(12 + x, 25 + y); printf(" ");
		gotoxy(13 + x, 25 + y); printf(" ");
		gotoxy(4 + x, 26 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 26 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(4 + x, 27 + y); printf(" ");
		gotoxy(5 + x, 27 + y); printf(" ");
		gotoxy(6 + x, 27 + y); printf(" ");
		gotoxy(12 + x, 27 + y); printf(" ");
		gotoxy(13 + x, 27 + y); printf(" ");
		gotoxy(14 + x, 27 + y); printf(" ");
		gotoxy(4 + x, 28 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 28 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(4 + x, 29 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 29 + y); printf(" "); printf(" "); printf(" "); printf(" ");
	}

	void clearCharacterReverse(unsigned short x, unsigned short y)
	{
		setcolor(0x00);
		gotoxy(20 + x, 2 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(18 + x, 3 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(21 + x, 3 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 4 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 5 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(25 + x, 5 + y); printf(" "); printf(" ");
		gotoxy(17 + x, 6 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 7 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(23 + x, 7 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 8 + y); printf(" ");
		gotoxy(18 + x, 8 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(21 + x, 8 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(5 + x, 9 + y); printf(" ");
		gotoxy(11 + x, 9 + y); printf(" ");
		gotoxy(17 + x, 9 + y); printf(" "); printf(" ");
		gotoxy(19 + x, 9 + y); printf(" ");
		gotoxy(20 + x, 9 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(2 + x, 10 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 10 + y); printf(" ");
		gotoxy(18 + x, 10 + y); printf(" ");
		gotoxy(19 + x, 10 + y); printf(" ");
		gotoxy(20 + x, 10 + y); printf(" ");
		gotoxy(21 + x, 10 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(1 + x, 11 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 11 + y); printf(" ");
		gotoxy(18 + x, 11 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(21 + x, 11 + y); printf(" ");
		gotoxy(22 + x, 11 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(25 + x, 11 + y); printf(" ");
		gotoxy(1 + x, 12 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(4 + x, 12 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 12 + y); printf(" ");
		gotoxy(11 + x, 12 + y); printf(" ");
		gotoxy(12 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(14 + x, 12 + y); printf(" ");
		gotoxy(15 + x, 12 + y); printf(" ");
		gotoxy(16 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(18 + x, 12 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(25 + x, 12 + y); printf(" ");
		gotoxy(26 + x, 12 + y); printf(" ");
		gotoxy(3 + x, 13 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(10 + x, 13 + y); printf(" ");
		gotoxy(11 + x, 13 + y); printf(" ");
		gotoxy(12 + x, 13 + y); printf(" ");
		gotoxy(13 + x, 13 + y); printf(" "); printf(" ");
		gotoxy(15 + x, 13 + y); printf(" ");
		gotoxy(16 + x, 13 + y); printf(" ");
		gotoxy(17 + x, 13 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(26 + x, 13 + y); printf(" ");
		gotoxy(27 + x, 13 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 14 + y); printf(" ");
		gotoxy(11 + x, 14 + y); printf(" ");
		gotoxy(12 + x, 14 + y); printf(" ");
		gotoxy(13 + x, 14 + y); printf(" ");
		gotoxy(14 + x, 14 + y); printf(" "); printf(" ");
		gotoxy(16 + x, 14 + y); printf(" ");
		gotoxy(17 + x, 14 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(26 + x, 14 + y); printf(" ");
		gotoxy(27 + x, 14 + y); printf(" "); printf(" ");
		gotoxy(29 + x, 14 + y); printf(" ");
		gotoxy(11 + x, 15 + y); printf(" "); printf(" ");
		gotoxy(19 + x, 15 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(27 + x, 15 + y); printf(" "); printf(" ");
		gotoxy(29 + x, 15 + y); printf(" "); printf(" ");
		gotoxy(19 + x, 16 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(22 + x, 16 + y); printf(" ");
		gotoxy(23 + x, 16 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(28 + x, 16 + y); printf(" ");
		gotoxy(29 + x, 16 + y); printf(" "); printf(" ");
		gotoxy(19 + x, 17 + y); printf(" "); printf(" ");
		gotoxy(21 + x, 17 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 17 + y); printf(" "); printf(" ");
		gotoxy(28 + x, 17 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(19 + x, 18 + y); printf(" "); printf(" ");
		gotoxy(21 + x, 18 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 18 + y); printf(" "); printf(" ");
		gotoxy(28 + x, 18 + y); printf(" ");
		gotoxy(29 + x, 18 + y); printf(" "); printf(" ");
		gotoxy(19 + x, 19 + y); printf(" ");
		gotoxy(20 + x, 19 + y); printf(" ");
		gotoxy(21 + x, 19 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 19 + y); printf(" ");
		gotoxy(25 + x, 19 + y); printf(" ");
		gotoxy(28 + x, 19 + y); printf(" "); printf(" ");
		gotoxy(30 + x, 19 + y); printf(" ");
		gotoxy(19 + x, 20 + y); printf(" ");
		gotoxy(20 + x, 20 + y); printf(" ");
		gotoxy(21 + x, 20 + y); printf(" ");
		gotoxy(22 + x, 20 + y); printf(" ");
		gotoxy(23 + x, 20 + y); printf(" ");
		gotoxy(24 + x, 20 + y); printf(" ");
		gotoxy(25 + x, 20 + y); printf(" ");
		gotoxy(19 + x, 21 + y); printf(" ");
		gotoxy(20 + x, 21 + y); printf(" ");
		gotoxy(21 + x, 21 + y); printf(" ");
		gotoxy(22 + x, 21 + y); printf(" ");
		gotoxy(23 + x, 21 + y); printf(" ");
		gotoxy(24 + x, 21 + y); printf(" ");
		gotoxy(25 + x, 21 + y); printf(" ");
		gotoxy(19 + x, 22 + y); printf(" ");
		gotoxy(20 + x, 22 + y); printf(" ");
		gotoxy(21 + x, 22 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 22 + y); printf(" ");
		gotoxy(25 + x, 22 + y); printf(" ");
		gotoxy(19 + x, 23 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(23 + x, 23 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(18 + x, 24 + y); printf(" ");
		gotoxy(19 + x, 24 + y); printf(" ");
		gotoxy(20 + x, 24 + y); printf(" ");
		gotoxy(24 + x, 24 + y); printf(" ");
		gotoxy(25 + x, 24 + y); printf(" ");
		gotoxy(26 + x, 24 + y); printf(" ");
		gotoxy(18 + x, 25 + y); printf(" ");
		gotoxy(19 + x, 25 + y); printf(" ");
		gotoxy(20 + x, 25 + y); printf(" ");
		gotoxy(24 + x, 25 + y); printf(" ");
		gotoxy(25 + x, 25 + y); printf(" ");
		gotoxy(26 + x, 25 + y); printf(" ");
		gotoxy(18 + x, 26 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(25 + x, 26 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 27 + y); printf(" ");
		gotoxy(18 + x, 27 + y); printf(" ");
		gotoxy(19 + x, 27 + y); printf(" ");
		gotoxy(25 + x, 27 + y); printf(" ");
		gotoxy(26 + x, 27 + y); printf(" ");
		gotoxy(27 + x, 27 + y); printf(" ");
		gotoxy(16 + x, 28 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 28 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(16 + x, 29 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(24 + x, 29 + y); printf(" "); printf(" "); printf(" "); printf(" ");
	}
	
protected:
	int  armor;		// reduces the damage Heros gets
	char block;		// is blocking active?
public:
	Meinz()
	{
		strcpy(autorName, "Ortner");
		strcpy(heroName, "Meinz");

		life       = 	MAX_LIFE;
		damage     = 	STD_DAMAGE;
		armor      = 	STD_DAMAGE/4;
		range      = 	14;
		mana       = 	MAX_MANA/10*3;
		move       = 	MAX_MOVE/2+1;
		block      = 	0;
		width	   =	10;
	}
	
	void Show()
	{
		if(side == 'l')
		{
			//Character on the left (facing right)
			drawCharacter((80 - x) - 16 / 2, 11);	//80 = 160/2 -> 160 = console width || 11 distance to top || 16/2 character width / 2 -> fixes goto offset
		}
		else
		{
			//Draw Character on the right (facing left)
			drawCharacterReverse((80 + x) - 16 / 2 + 1, 11);
		}
		setcolor(0x00);	//Set Color to black so the Base clear functions don't break
    }
	void Clear()
	{
		if(side == 'l')
		{
			//Character on the left (facing right)
			clearCharacter((80 - x) - 16 / 2, 11);	//80 = 160/2 -> 160 = console width || 11 distance to top || 16/2 character width / 2 -> fixes goto offset
		}
		else
		{
			//Clear Character on the right (facing left)
			clearCharacterReverse((80 + x) - 16 / 2 + 1, 11);
		}
	}
	
	void ShowDeath()
	{
		//Custom death animation goes here
	}
	void ClearDeath()
	{
		//Clear death animation
	}
    
    void ShowBlock()
    {
		//Blocking animation goes here
    }
	void ClearBlock()
    {
		//Unblock animation goes here
    }
	
	void ShowStart()
	{
		//Start animaion goes here
	}
	void ShowVictory()
	{
		//Victory animation goes here
	}
	
	void ShowAttack()
	{
		//Attack animation goes here
	}
	
	int BeAttacked()
    {
    	int damage = enemy->DoAttack();
    	if( damage < armor )
		{
			ShowLife();
			return 0;
		}
    	damage -= armor;
    	life -= damage;
    	ShowLife();
    	return damage;
    }
};
#endif
