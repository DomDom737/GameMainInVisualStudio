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
		gotoxy(7 + x, 0 + y); setcolor(0xCC); printf(" ");
		gotoxy(4 + x, 1 + y); setcolor(0xCC); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(1 + x, 2 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(3 + x, 2 + y); setcolor(0x44); printf(" ");
		gotoxy(4 + x, 2 + y); setcolor(0xCC); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 2 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(11 + x, 2 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(2 + x, 3 + y); setcolor(0x44); printf(" ");
		gotoxy(3 + x, 3 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(5 + x, 3 + y); setcolor(0x44); printf(" ");
		gotoxy(6 + x, 3 + y); setcolor(0xCC); printf(" ");
		gotoxy(7 + x, 3 + y); setcolor(0xFF); printf(" ");
		gotoxy(8 + x, 3 + y); setcolor(0xCC); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(3 + x, 4 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(5 + x, 4 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(7 + x, 4 + y); setcolor(0xCC); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 4 + y); setcolor(0x44); printf(" ");
		gotoxy(2 + x, 5 + y); setcolor(0xCC); printf(" ");
		gotoxy(3 + x, 5 + y); setcolor(0x44); printf(" ");
		gotoxy(4 + x, 5 + y); setcolor(0xCC); printf(" ");
		gotoxy(5 + x, 5 + y); setcolor(0x44); printf(" ");
		gotoxy(6 + x, 5 + y); setcolor(0xCC); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(3 + x, 6 + y); setcolor(0x44); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(7 + x, 6 + y); setcolor(0xCC); printf(" ");
		gotoxy(8 + x, 6 + y); setcolor(0x44); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 6 + y); setcolor(0xCC); printf(" ");
		gotoxy(4 + x, 7 + y); setcolor(0x44); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 7 + y); setcolor(0x77); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(4 + x, 8 + y); setcolor(0x44); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 8 + y); setcolor(0x77); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(4 + x, 9 + y); setcolor(0x44); printf(" ");
		gotoxy(7 + x, 9 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(9 + x, 9 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(5 + x, 10 + y); setcolor(0x99); printf(" ");
		gotoxy(6 + x, 10 + y); setcolor(0xFF); printf(" ");
		gotoxy(7 + x, 10 + y); setcolor(0x88); printf(" ");
		gotoxy(8 + x, 10 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 10 + y); setcolor(0x99); printf(" ");
		gotoxy(18 + x, 10 + y); setcolor(0x22); printf(" ");
		gotoxy(5 + x, 11 + y); setcolor(0x77); printf(" ");
		gotoxy(6 + x, 11 + y); setcolor(0x99); printf(" ");
		gotoxy(7 + x, 11 + y); setcolor(0xCC); printf(" ");
		gotoxy(8 + x, 11 + y); setcolor(0x99); printf(" "); printf(" ");
		gotoxy(10 + x, 11 + y); setcolor(0x44); printf(" ");
		gotoxy(11 + x, 11 + y); setcolor(0xFF); printf(" ");
		gotoxy(12 + x, 11 + y); setcolor(0x77); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 11 + y); setcolor(0x22); printf(" ");
		gotoxy(18 + x, 11 + y); setcolor(0xBB); printf(" ");
		gotoxy(19 + x, 11 + y); setcolor(0x22); printf(" ");
		gotoxy(4 + x, 12 + y); setcolor(0x77); printf(" ");
		gotoxy(5 + x, 12 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(7 + x, 12 + y); setcolor(0x77); printf(" ");
		gotoxy(8 + x, 12 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(10 + x, 12 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(12 + x, 12 + y); setcolor(0x88); printf(" ");
		gotoxy(13 + x, 12 + y); setcolor(0x22); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(18 + x, 12 + y); setcolor(0x22); printf(" ");
		gotoxy(4 + x, 13 + y); setcolor(0x77); printf(" ");
		gotoxy(5 + x, 13 + y); setcolor(0xFF); printf(" ");
		gotoxy(6 + x, 13 + y); setcolor(0x77); printf(" ");
		gotoxy(7 + x, 13 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(9 + x, 13 + y); setcolor(0x44); printf(" ");
		gotoxy(10 + x, 13 + y); setcolor(0x77); printf(" ");
		gotoxy(11 + x, 13 + y); setcolor(0x44); printf(" ");
		gotoxy(12 + x, 13 + y); setcolor(0x88); printf(" ");
		gotoxy(1 + x, 14 + y); setcolor(0x22); printf(" ");
		gotoxy(2 + x, 14 + y); setcolor(0x44); printf(" ");
		gotoxy(3 + x, 14 + y); setcolor(0xFF); printf(" ");
		gotoxy(4 + x, 14 + y); setcolor(0x77); printf(" ");
		gotoxy(5 + x, 14 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(7 + x, 14 + y); setcolor(0x77); printf(" ");
		gotoxy(8 + x, 14 + y); setcolor(0xFF); printf(" ");
		gotoxy(9 + x, 14 + y); setcolor(0x44); printf(" ");
		gotoxy(10 + x, 14 + y); setcolor(0xFF); printf(" ");
		gotoxy(11 + x, 14 + y); setcolor(0x88); printf(" ");
		gotoxy(0 + x, 15 + y); setcolor(0x22); printf(" ");
		gotoxy(2 + x, 15 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(4 + x, 15 + y); setcolor(0xFF); printf(" ");
		gotoxy(5 + x, 15 + y); setcolor(0x77); printf(" ");
		gotoxy(6 + x, 15 + y); setcolor(0x44); printf(" "); printf(" "); printf(" ");
		gotoxy(9 + x, 15 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(3 + x, 16 + y); setcolor(0xFF); printf(" ");
		gotoxy(4 + x, 16 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(6 + x, 16 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(8 + x, 16 + y); setcolor(0x77); printf(" ");
		gotoxy(9 + x, 16 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 16 + y); setcolor(0x99); printf(" ");
		gotoxy(3 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(5 + x, 17 + y); setcolor(0x77); printf(" ");
		gotoxy(6 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(9 + x, 17 + y); setcolor(0x77); printf(" ");
		gotoxy(10 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(12 + x, 17 + y); setcolor(0x99); printf(" ");
		gotoxy(13 + x, 17 + y); setcolor(0xFF); printf(" ");
		gotoxy(2 + x, 18 + y); setcolor(0xFF); printf(" ");
		gotoxy(3 + x, 18 + y); setcolor(0x99); printf(" ");
		gotoxy(4 + x, 18 + y); setcolor(0xFF); printf(" ");
		gotoxy(5 + x, 18 + y); setcolor(0x77); printf(" ");
		gotoxy(6 + x, 18 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(8 + x, 18 + y); setcolor(0x99); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 18 + y); setcolor(0xFF); printf(" ");
		gotoxy(2 + x, 19 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(4 + x, 19 + y); setcolor(0x99); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 19 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(10 + x, 19 + y); setcolor(0x77); printf(" ");
		gotoxy(3 + x, 20 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(5 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(6 + x, 20 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(5 + x, 21 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(10 + x, 21 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(5 + x, 22 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(10 + x, 22 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(5 + x, 23 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(10 + x, 23 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(5 + x, 24 + y); setcolor(0x44); printf(" "); printf(" "); printf(" ");
		gotoxy(10 + x, 24 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(5 + x, 25 + y); setcolor(0x44); printf(" "); printf(" "); printf(" ");
		gotoxy(10 + x, 25 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(5 + x, 26 + y); setcolor(0x44); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 26 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(5 + x, 27 + y); setcolor(0x44); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 27 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(5 + x, 28 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(7 + x, 28 + y); setcolor(0x44); printf(" ");
		gotoxy(11 + x, 28 + y); setcolor(0x44); printf(" ");
		gotoxy(12 + x, 28 + y); setcolor(0xCC); printf(" ");
		gotoxy(13 + x, 28 + y); setcolor(0x44); printf(" ");
		gotoxy(5 + x, 29 + y); setcolor(0x88); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 29 + y); setcolor(0x88); printf(" "); printf(" "); printf(" ");
		setcolor(0x00);
	}
	
	void clearCharacter(unsigned short x, unsigned short y)
	{
		setcolor(0x00);
		gotoxy(7 + x, 0 + y); printf(" ");
		gotoxy(4 + x, 1 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(1 + x, 2 + y); printf(" "); printf(" ");
		gotoxy(3 + x, 2 + y); printf(" ");
		gotoxy(4 + x, 2 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 2 + y); printf(" "); printf(" ");
		gotoxy(11 + x, 2 + y); printf(" "); printf(" ");
		gotoxy(2 + x, 3 + y); printf(" ");
		gotoxy(3 + x, 3 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 3 + y); printf(" ");
		gotoxy(6 + x, 3 + y); printf(" ");
		gotoxy(7 + x, 3 + y); printf(" ");
		gotoxy(8 + x, 3 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(3 + x, 4 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 4 + y); printf(" "); printf(" ");
		gotoxy(7 + x, 4 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 4 + y); printf(" ");
		gotoxy(2 + x, 5 + y); printf(" ");
		gotoxy(3 + x, 5 + y); printf(" ");
		gotoxy(4 + x, 5 + y); printf(" ");
		gotoxy(5 + x, 5 + y); printf(" ");
		gotoxy(6 + x, 5 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(3 + x, 6 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(7 + x, 6 + y); printf(" ");
		gotoxy(8 + x, 6 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 6 + y); printf(" ");
		gotoxy(4 + x, 7 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 7 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(4 + x, 8 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 8 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(4 + x, 9 + y); printf(" ");
		gotoxy(7 + x, 9 + y); printf(" "); printf(" ");
		gotoxy(9 + x, 9 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 10 + y); printf(" ");
		gotoxy(6 + x, 10 + y); printf(" ");
		gotoxy(7 + x, 10 + y); printf(" ");
		gotoxy(8 + x, 10 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 10 + y); printf(" ");
		gotoxy(18 + x, 10 + y); printf(" ");
		gotoxy(5 + x, 11 + y); printf(" ");
		gotoxy(6 + x, 11 + y); printf(" ");
		gotoxy(7 + x, 11 + y); printf(" ");
		gotoxy(8 + x, 11 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 11 + y); printf(" ");
		gotoxy(11 + x, 11 + y); printf(" ");
		gotoxy(12 + x, 11 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(17 + x, 11 + y); printf(" ");
		gotoxy(18 + x, 11 + y); printf(" ");
		gotoxy(19 + x, 11 + y); printf(" ");
		gotoxy(4 + x, 12 + y); printf(" ");
		gotoxy(5 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(7 + x, 12 + y); printf(" ");
		gotoxy(8 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(12 + x, 12 + y); printf(" ");
		gotoxy(13 + x, 12 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(18 + x, 12 + y); printf(" ");
		gotoxy(4 + x, 13 + y); printf(" ");
		gotoxy(5 + x, 13 + y); printf(" ");
		gotoxy(6 + x, 13 + y); printf(" ");
		gotoxy(7 + x, 13 + y); printf(" "); printf(" ");
		gotoxy(9 + x, 13 + y); printf(" ");
		gotoxy(10 + x, 13 + y); printf(" ");
		gotoxy(11 + x, 13 + y); printf(" ");
		gotoxy(12 + x, 13 + y); printf(" ");
		gotoxy(1 + x, 14 + y); printf(" ");
		gotoxy(2 + x, 14 + y); printf(" ");
		gotoxy(3 + x, 14 + y); printf(" ");
		gotoxy(4 + x, 14 + y); printf(" ");
		gotoxy(5 + x, 14 + y); printf(" "); printf(" ");
		gotoxy(7 + x, 14 + y); printf(" ");
		gotoxy(8 + x, 14 + y); printf(" ");
		gotoxy(9 + x, 14 + y); printf(" ");
		gotoxy(10 + x, 14 + y); printf(" ");
		gotoxy(11 + x, 14 + y); printf(" ");
		gotoxy(0 + x, 15 + y); printf(" ");
		gotoxy(2 + x, 15 + y); printf(" "); printf(" ");
		gotoxy(4 + x, 15 + y); printf(" ");
		gotoxy(5 + x, 15 + y); printf(" ");
		gotoxy(6 + x, 15 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(9 + x, 15 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(3 + x, 16 + y); printf(" ");
		gotoxy(4 + x, 16 + y); printf(" "); printf(" ");
		gotoxy(6 + x, 16 + y); printf(" "); printf(" ");
		gotoxy(8 + x, 16 + y); printf(" ");
		gotoxy(9 + x, 16 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 16 + y); printf(" ");
		gotoxy(3 + x, 17 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 17 + y); printf(" ");
		gotoxy(6 + x, 17 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(9 + x, 17 + y); printf(" ");
		gotoxy(10 + x, 17 + y); printf(" "); printf(" ");
		gotoxy(12 + x, 17 + y); printf(" ");
		gotoxy(13 + x, 17 + y); printf(" ");
		gotoxy(2 + x, 18 + y); printf(" ");
		gotoxy(3 + x, 18 + y); printf(" ");
		gotoxy(4 + x, 18 + y); printf(" ");
		gotoxy(5 + x, 18 + y); printf(" ");
		gotoxy(6 + x, 18 + y); printf(" "); printf(" ");
		gotoxy(8 + x, 18 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 18 + y); printf(" ");
		gotoxy(2 + x, 19 + y); printf(" "); printf(" ");
		gotoxy(4 + x, 19 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 19 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 19 + y); printf(" ");
		gotoxy(3 + x, 20 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 20 + y); printf(" ");
		gotoxy(6 + x, 20 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 20 + y); printf(" ");
		gotoxy(5 + x, 21 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 21 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 22 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 22 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 23 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 23 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 24 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(10 + x, 24 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 25 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(10 + x, 25 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 26 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 26 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 27 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 27 + y); printf(" "); printf(" ");
		gotoxy(5 + x, 28 + y); printf(" "); printf(" ");
		gotoxy(7 + x, 28 + y); printf(" ");
		gotoxy(11 + x, 28 + y); printf(" ");
		gotoxy(12 + x, 28 + y); printf(" ");
		gotoxy(13 + x, 28 + y); printf(" ");
		gotoxy(5 + x, 29 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 29 + y); printf(" "); printf(" "); printf(" ");
	}

	void drawCharacterReverse(unsigned short x, unsigned short y)
	{
		gotoxy(12 + x, 0 + y); setcolor(0xCC); printf(" ");
		gotoxy(11 + x, 1 + y); setcolor(0xCC); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(7 + x, 2 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(10 + x, 2 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(12 + x, 2 + y); setcolor(0xCC); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(16 + x, 2 + y); setcolor(0x44); printf(" ");
		gotoxy(17 + x, 2 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(8 + x, 3 + y); setcolor(0xCC); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 3 + y); setcolor(0xFF); printf(" ");
		gotoxy(13 + x, 3 + y); setcolor(0xCC); printf(" ");
		gotoxy(14 + x, 3 + y); setcolor(0x44); printf(" ");
		gotoxy(15 + x, 3 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(17 + x, 3 + y); setcolor(0x44); printf(" ");
		gotoxy(7 + x, 4 + y); setcolor(0x44); printf(" ");
		gotoxy(8 + x, 4 + y); setcolor(0xCC); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(13 + x, 4 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(15 + x, 4 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(7 + x, 5 + y); setcolor(0xCC); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 5 + y); setcolor(0x44); printf(" ");
		gotoxy(15 + x, 5 + y); setcolor(0xCC); printf(" ");
		gotoxy(16 + x, 5 + y); setcolor(0x44); printf(" ");
		gotoxy(17 + x, 5 + y); setcolor(0xCC); printf(" ");
		gotoxy(7 + x, 6 + y); setcolor(0xCC); printf(" ");
		gotoxy(8 + x, 6 + y); setcolor(0x44); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 6 + y); setcolor(0xCC); printf(" ");
		gotoxy(13 + x, 6 + y); setcolor(0x44); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 7 + y); setcolor(0x77); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 7 + y); setcolor(0x44); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 8 + y); setcolor(0x77); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 8 + y); setcolor(0x44); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(9 + x, 9 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(11 + x, 9 + y); setcolor(0x88); printf(" "); printf(" ");
		gotoxy(15 + x, 9 + y); setcolor(0x44); printf(" ");
		gotoxy(1 + x, 10 + y); setcolor(0x22); printf(" ");
		gotoxy(8 + x, 10 + y); setcolor(0x99); printf(" ");
		gotoxy(9 + x, 10 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 10 + y); setcolor(0x88); printf(" ");
		gotoxy(13 + x, 10 + y); setcolor(0xFF); printf(" ");
		gotoxy(14 + x, 10 + y); setcolor(0x99); printf(" ");
		gotoxy(0 + x, 11 + y); setcolor(0x22); printf(" ");
		gotoxy(1 + x, 11 + y); setcolor(0xBB); printf(" ");
		gotoxy(2 + x, 11 + y); setcolor(0x22); printf(" ");
		gotoxy(5 + x, 11 + y); setcolor(0x77); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 11 + y); setcolor(0xFF); printf(" ");
		gotoxy(9 + x, 11 + y); setcolor(0x44); printf(" ");
		gotoxy(10 + x, 11 + y); setcolor(0x99); printf(" "); printf(" ");
		gotoxy(12 + x, 11 + y); setcolor(0xCC); printf(" ");
		gotoxy(13 + x, 11 + y); setcolor(0x99); printf(" ");
		gotoxy(14 + x, 11 + y); setcolor(0x77); printf(" ");
		gotoxy(1 + x, 12 + y); setcolor(0x22); printf(" ");
		gotoxy(3 + x, 12 + y); setcolor(0x22); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(7 + x, 12 + y); setcolor(0x88); printf(" ");
		gotoxy(8 + x, 12 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(10 + x, 12 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(12 + x, 12 + y); setcolor(0x77); printf(" ");
		gotoxy(13 + x, 12 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(15 + x, 12 + y); setcolor(0x77); printf(" ");
		gotoxy(7 + x, 13 + y); setcolor(0x88); printf(" ");
		gotoxy(8 + x, 13 + y); setcolor(0x44); printf(" ");
		gotoxy(9 + x, 13 + y); setcolor(0x77); printf(" ");
		gotoxy(10 + x, 13 + y); setcolor(0x44); printf(" ");
		gotoxy(11 + x, 13 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(13 + x, 13 + y); setcolor(0x77); printf(" ");
		gotoxy(14 + x, 13 + y); setcolor(0xFF); printf(" ");
		gotoxy(15 + x, 13 + y); setcolor(0x77); printf(" ");
		gotoxy(8 + x, 14 + y); setcolor(0x88); printf(" ");
		gotoxy(9 + x, 14 + y); setcolor(0xFF); printf(" ");
		gotoxy(10 + x, 14 + y); setcolor(0x44); printf(" ");
		gotoxy(11 + x, 14 + y); setcolor(0xFF); printf(" ");
		gotoxy(12 + x, 14 + y); setcolor(0x77); printf(" ");
		gotoxy(13 + x, 14 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(15 + x, 14 + y); setcolor(0x77); printf(" ");
		gotoxy(16 + x, 14 + y); setcolor(0xFF); printf(" ");
		gotoxy(17 + x, 14 + y); setcolor(0x44); printf(" ");
		gotoxy(18 + x, 14 + y); setcolor(0x22); printf(" ");
		gotoxy(8 + x, 15 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 15 + y); setcolor(0x44); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 15 + y); setcolor(0x77); printf(" ");
		gotoxy(15 + x, 15 + y); setcolor(0xFF); printf(" ");
		gotoxy(16 + x, 15 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(19 + x, 15 + y); setcolor(0x22); printf(" ");
		gotoxy(7 + x, 16 + y); setcolor(0x99); printf(" ");
		gotoxy(8 + x, 16 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 16 + y); setcolor(0x77); printf(" ");
		gotoxy(12 + x, 16 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(14 + x, 16 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(16 + x, 16 + y); setcolor(0xFF); printf(" ");
		gotoxy(6 + x, 17 + y); setcolor(0xFF); printf(" ");
		gotoxy(7 + x, 17 + y); setcolor(0x99); printf(" ");
		gotoxy(8 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(10 + x, 17 + y); setcolor(0x77); printf(" ");
		gotoxy(11 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 17 + y); setcolor(0x77); printf(" ");
		gotoxy(15 + x, 17 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(7 + x, 18 + y); setcolor(0xFF); printf(" ");
		gotoxy(8 + x, 18 + y); setcolor(0x99); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 18 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(14 + x, 18 + y); setcolor(0x77); printf(" ");
		gotoxy(15 + x, 18 + y); setcolor(0xFF); printf(" ");
		gotoxy(16 + x, 18 + y); setcolor(0x99); printf(" ");
		gotoxy(17 + x, 18 + y); setcolor(0xFF); printf(" ");
		gotoxy(9 + x, 19 + y); setcolor(0x77); printf(" ");
		gotoxy(10 + x, 19 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(12 + x, 19 + y); setcolor(0x99); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(16 + x, 19 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(8 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(9 + x, 20 + y); setcolor(0xFF); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 20 + y); setcolor(0x77); printf(" ");
		gotoxy(15 + x, 20 + y); setcolor(0xFF); printf(" "); printf(" ");
		gotoxy(8 + x, 21 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(13 + x, 21 + y); setcolor(0x77); printf(" "); printf(" ");
		gotoxy(8 + x, 22 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(13 + x, 22 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(8 + x, 23 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(13 + x, 23 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(8 + x, 24 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(12 + x, 24 + y); setcolor(0x44); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 25 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(12 + x, 25 + y); setcolor(0x44); printf(" "); printf(" "); printf(" ");
		gotoxy(7 + x, 26 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(12 + x, 26 + y); setcolor(0x44); printf(" "); printf(" "); printf(" ");
		gotoxy(7 + x, 27 + y); setcolor(0x44); printf(" "); printf(" ");
		gotoxy(12 + x, 27 + y); setcolor(0x44); printf(" "); printf(" "); printf(" ");
		gotoxy(6 + x, 28 + y); setcolor(0x44); printf(" ");
		gotoxy(7 + x, 28 + y); setcolor(0xCC); printf(" ");
		gotoxy(8 + x, 28 + y); setcolor(0x44); printf(" ");
		gotoxy(12 + x, 28 + y); setcolor(0x44); printf(" ");
		gotoxy(13 + x, 28 + y); setcolor(0xCC); printf(" "); printf(" ");
		gotoxy(6 + x, 29 + y); setcolor(0x88); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 29 + y); setcolor(0x88); printf(" "); printf(" "); printf(" ");
		setcolor(0x00);
	}

	void clearCharacterReverse(unsigned short x, unsigned short y)
	{
		setcolor(0x00);
		gotoxy(12 + x, 0 + y); printf(" ");
		gotoxy(11 + x, 1 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(7 + x, 2 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 2 + y); printf(" "); printf(" ");
		gotoxy(12 + x, 2 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(16 + x, 2 + y); printf(" ");
		gotoxy(17 + x, 2 + y); printf(" "); printf(" ");
		gotoxy(8 + x, 3 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 3 + y); printf(" ");
		gotoxy(13 + x, 3 + y); printf(" ");
		gotoxy(14 + x, 3 + y); printf(" ");
		gotoxy(15 + x, 3 + y); printf(" "); printf(" ");
		gotoxy(17 + x, 3 + y); printf(" ");
		gotoxy(7 + x, 4 + y); printf(" ");
		gotoxy(8 + x, 4 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(13 + x, 4 + y); printf(" "); printf(" ");
		gotoxy(15 + x, 4 + y); printf(" "); printf(" ");
		gotoxy(7 + x, 5 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 5 + y); printf(" ");
		gotoxy(15 + x, 5 + y); printf(" ");
		gotoxy(16 + x, 5 + y); printf(" ");
		gotoxy(17 + x, 5 + y); printf(" ");
		gotoxy(7 + x, 6 + y); printf(" ");
		gotoxy(8 + x, 6 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 6 + y); printf(" ");
		gotoxy(13 + x, 6 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 7 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 7 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 8 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 8 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(9 + x, 9 + y); printf(" "); printf(" ");
		gotoxy(11 + x, 9 + y); printf(" "); printf(" ");
		gotoxy(15 + x, 9 + y); printf(" ");
		gotoxy(1 + x, 10 + y); printf(" ");
		gotoxy(8 + x, 10 + y); printf(" ");
		gotoxy(9 + x, 10 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 10 + y); printf(" ");
		gotoxy(13 + x, 10 + y); printf(" ");
		gotoxy(14 + x, 10 + y); printf(" ");
		gotoxy(0 + x, 11 + y); printf(" ");
		gotoxy(1 + x, 11 + y); printf(" ");
		gotoxy(2 + x, 11 + y); printf(" ");
		gotoxy(5 + x, 11 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 11 + y); printf(" ");
		gotoxy(9 + x, 11 + y); printf(" ");
		gotoxy(10 + x, 11 + y); printf(" "); printf(" ");
		gotoxy(12 + x, 11 + y); printf(" ");
		gotoxy(13 + x, 11 + y); printf(" ");
		gotoxy(14 + x, 11 + y); printf(" ");
		gotoxy(1 + x, 12 + y); printf(" ");
		gotoxy(3 + x, 12 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(7 + x, 12 + y); printf(" ");
		gotoxy(8 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(12 + x, 12 + y); printf(" ");
		gotoxy(13 + x, 12 + y); printf(" "); printf(" ");
		gotoxy(15 + x, 12 + y); printf(" ");
		gotoxy(7 + x, 13 + y); printf(" ");
		gotoxy(8 + x, 13 + y); printf(" ");
		gotoxy(9 + x, 13 + y); printf(" ");
		gotoxy(10 + x, 13 + y); printf(" ");
		gotoxy(11 + x, 13 + y); printf(" "); printf(" ");
		gotoxy(13 + x, 13 + y); printf(" ");
		gotoxy(14 + x, 13 + y); printf(" ");
		gotoxy(15 + x, 13 + y); printf(" ");
		gotoxy(8 + x, 14 + y); printf(" ");
		gotoxy(9 + x, 14 + y); printf(" ");
		gotoxy(10 + x, 14 + y); printf(" ");
		gotoxy(11 + x, 14 + y); printf(" ");
		gotoxy(12 + x, 14 + y); printf(" ");
		gotoxy(13 + x, 14 + y); printf(" "); printf(" ");
		gotoxy(15 + x, 14 + y); printf(" ");
		gotoxy(16 + x, 14 + y); printf(" ");
		gotoxy(17 + x, 14 + y); printf(" ");
		gotoxy(18 + x, 14 + y); printf(" ");
		gotoxy(8 + x, 15 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 15 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 15 + y); printf(" ");
		gotoxy(15 + x, 15 + y); printf(" ");
		gotoxy(16 + x, 15 + y); printf(" "); printf(" ");
		gotoxy(19 + x, 15 + y); printf(" ");
		gotoxy(7 + x, 16 + y); printf(" ");
		gotoxy(8 + x, 16 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(11 + x, 16 + y); printf(" ");
		gotoxy(12 + x, 16 + y); printf(" "); printf(" ");
		gotoxy(14 + x, 16 + y); printf(" "); printf(" ");
		gotoxy(16 + x, 16 + y); printf(" ");
		gotoxy(6 + x, 17 + y); printf(" ");
		gotoxy(7 + x, 17 + y); printf(" ");
		gotoxy(8 + x, 17 + y); printf(" "); printf(" ");
		gotoxy(10 + x, 17 + y); printf(" ");
		gotoxy(11 + x, 17 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 17 + y); printf(" ");
		gotoxy(15 + x, 17 + y); printf(" "); printf(" ");
		gotoxy(7 + x, 18 + y); printf(" ");
		gotoxy(8 + x, 18 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 18 + y); printf(" "); printf(" ");
		gotoxy(14 + x, 18 + y); printf(" ");
		gotoxy(15 + x, 18 + y); printf(" ");
		gotoxy(16 + x, 18 + y); printf(" ");
		gotoxy(17 + x, 18 + y); printf(" ");
		gotoxy(9 + x, 19 + y); printf(" ");
		gotoxy(10 + x, 19 + y); printf(" "); printf(" ");
		gotoxy(12 + x, 19 + y); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(16 + x, 19 + y); printf(" "); printf(" ");
		gotoxy(8 + x, 20 + y); printf(" ");
		gotoxy(9 + x, 20 + y); printf(" "); printf(" "); printf(" "); printf(" "); printf(" ");
		gotoxy(14 + x, 20 + y); printf(" ");
		gotoxy(15 + x, 20 + y); printf(" "); printf(" ");
		gotoxy(8 + x, 21 + y); printf(" "); printf(" ");
		gotoxy(13 + x, 21 + y); printf(" "); printf(" ");
		gotoxy(8 + x, 22 + y); printf(" "); printf(" ");
		gotoxy(13 + x, 22 + y); printf(" "); printf(" ");
		gotoxy(8 + x, 23 + y); printf(" "); printf(" ");
		gotoxy(13 + x, 23 + y); printf(" "); printf(" ");
		gotoxy(8 + x, 24 + y); printf(" "); printf(" ");
		gotoxy(12 + x, 24 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(8 + x, 25 + y); printf(" "); printf(" ");
		gotoxy(12 + x, 25 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(7 + x, 26 + y); printf(" "); printf(" ");
		gotoxy(12 + x, 26 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(7 + x, 27 + y); printf(" "); printf(" ");
		gotoxy(12 + x, 27 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(6 + x, 28 + y); printf(" ");
		gotoxy(7 + x, 28 + y); printf(" ");
		gotoxy(8 + x, 28 + y); printf(" ");
		gotoxy(12 + x, 28 + y); printf(" ");
		gotoxy(13 + x, 28 + y); printf(" "); printf(" ");
		gotoxy(6 + x, 29 + y); printf(" "); printf(" "); printf(" ");
		gotoxy(12 + x, 29 + y); printf(" "); printf(" "); printf(" ");
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
			drawCharacter((80 + x) - 16 / 2, 11);	//80 = 160/2 -> 160 = console width || 11 distance to top || 16/2 character width / 2 -> fixes goto offset
		}
		else
		{
			//Draw Character on the right (facing left)
			drawCharacterReverse((80 + x) - 16 / 2, 11);
		}
		setcolor(0x00);	//Set Color to black so the Base clear functions don't break
    }
	void Clear()
	{
		if(side == 'l')
		{
			//Character on the left (facing right)
			clearCharacter((80 + x) - 16 / 2, 11);	//80 = 160/2 -> 160 = console width || 11 distance to top || 16/2 character width / 2 -> fixes goto offset
		}
		else
		{
			//Clear Character on the right (facing left)
			clearCharacterReverse((80 + x) - 16 / 2, 11);
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
