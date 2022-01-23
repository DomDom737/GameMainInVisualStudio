#ifndef R2D2_H
#define R2D2_H
// Autor: Ortner Dominik
#include "Bauer.h"
#include <iostream>
#include <windows.h>
#include "gotoxy.h"
#include "r2d2_move.h"
#include "r2d2_taser.h"
#include "r2d2_flamethrower.h"
#include "r2d2_death.h"
#include "r2d2_base.h"



class r2d2 : public Bauer
{
private:
	int Xcoord()
	{
		return (MIDDLE - x - 1) - 16 / 2;
	}
	int XcoordReverse()
	{
		return (MIDDLE + x) - 16 / 2 + 1;
	}

protected:
	int  armor;		// reduces the damage Heros gets
	char block;		// is blocking active?
	const int distanceToTop = 13;
public:
	r2d2()
	{
		strcpy(autorName, "Katzensteiner");
		strcpy(heroName, "R2D2");

		life = MAX_LIFE;
		life = 1;
		damage = STD_DAMAGE;
		armor = STD_DAMAGE / 2;
		width = 17;
		move = 14;
		block = 0;
		range = 50000;
	}

	void Show()
	{
		if (side == 'l')
		{
			//Character on the left (facing right)
			drawCharacter(Xcoord(), distanceToTop-1);	//80 = 160/2 -> 160 = console width || 16/2 character width / 2 -> fixes goto offset
		}
		else
		{
			//Draw Character on the right (facing left)
			drawCharacterReverse(XcoordReverse(), distanceToTop-1);
		}
		setcolor(0x00);	//Set Color to black so the Base clear functions don't break
	}
	void Clear()
	{
		if (side == 'l')
		{
			//Character on the left (facing right)
			clearCharacter(Xcoord(), distanceToTop-1);	//80 = 160/2 -> 160 = console width || 16/2 character width / 2 -> fixes goto offset
		}
		else
		{
			//Clear Character on the right (facing left)
			clearCharacterReverse(XcoordReverse(), distanceToTop-1);
		}
	}

	void Move(int wohin)
	{
		Clear();
		int step = 5;

		if (wohin < 0)
		{
			
				
				if (side == 'l')
				{
					animatemove0(Xcoord(), distanceToTop-2);	//-1 cuz weird
					clearAnimatemove0(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x += step;

					animatemove1(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove1(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}


					x += step;

					animatemove2(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove2(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x += step;

					animatemove3(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove3(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x += step;

					animatemove4(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove4(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x += step;

					animatemove5(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove5(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x += step;

					animatemove6(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove6(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x += step;

				}
				else
				{
					animatemove0(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove0(XcoordReverse(), distanceToTop - 2);
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x -= step;

					animatemove1(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove1(XcoordReverse(), distanceToTop - 2);
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x -= step;

					animatemove2(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove2(XcoordReverse(), distanceToTop - 2);
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x -= step;

					animatemove3(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove3(XcoordReverse(), distanceToTop - 2);
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x -= step;

					animatemove4(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove4(XcoordReverse(), distanceToTop - 2);
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x -= step;

					animatemove5(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove5(XcoordReverse(), distanceToTop - 2);
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x -= step;

					animatemove6(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove6(XcoordReverse(), distanceToTop - 2);
					if (MIDDLE - (x + width + 2) == 0){Show(); return;}

					x -= step;
				}
			
		}
		else
		{
			
			
			
				if (side == 'l')
				{
					animatemove0(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove0(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}
					x -= step;

					animatemove1(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove1(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x -= step;

					animatemove2(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove2(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x -= step;

					animatemove3(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove3(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x -= step;

					animatemove4(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove4(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x -= step;

					animatemove5(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove5(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x -= step;

					animatemove6(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove6(Xcoord(), distanceToTop - 2);	//-1 cuz weird
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x -= step;
				}
				else
				{
					animatemove0(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove0(XcoordReverse(), distanceToTop - 2);
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x += step;

					animatemove1(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove1(XcoordReverse(), distanceToTop - 2);
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x += step;

					animatemove2(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove2(XcoordReverse(), distanceToTop - 2);
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x += step;

					animatemove3(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove3(XcoordReverse(), distanceToTop - 2);
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x += step;

					animatemove4(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove4(XcoordReverse(), distanceToTop - 2);
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x += step;

					animatemove5(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove5(XcoordReverse(), distanceToTop - 2);
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x += step;

					animatemove6(XcoordReverse(), distanceToTop - 2);	//-1 cuz weird
					clearAnimatemove6(XcoordReverse(), distanceToTop - 2);
					if ((x - width) + ((enemy->x - enemy->width)) == 0) {Show(); return;}

					x += step;
				}
			}
		
		Show();
	}

	void ShowDeath()
	{
		//Custom death animation goes here
		if (life > 0) return;  // still alive
		
		animatedeath(Xcoord(), distanceToTop-1-10);
		
	}
	void ClearDeath()
	{
		//Clear death animation
		int yy = (height + leg) / 2; // average height
		setcolor(0x00);
		Linie(x - 3, yy, 7, 0, ' ');
		Linie(x - 4, yy + 2, 9, -4, ' ');
		Linie(x - 5, yy - 4, 11, +8, ' ');
	}

	void ShowStart()
	{
		//Start animaion goes here
		if (side == 'l')
		{
			animatemove(Xcoord(), distanceToTop-1);
			
		}
		else
		{
			animateReversemove(XcoordReverse(), distanceToTop-1);
		}
	}
	void ShowVictory()
	{
		ShowDeath();

	}

	void ShowAttack()
	{
		if (side == 'l')
		{
			animatetaser(Xcoord(), distanceToTop-1-10);
		}
		else
		{
			animateReversetaser(XcoordReverse()-10, distanceToTop-1-10);
		}
		damage = STD_DAMAGE;	//Do less damage with punch
		Show();
	}

	 void ShowMagic()
	{
		 if (side == 'l')
		 {
			 animateflamethrower(Xcoord(), distanceToTop-1-10);
		 }
		 else
		 {
			 animateReverseflamethrower(XcoordReverse() - 10, distanceToTop-1-10);
		 }
		 damage = STD_DAMAGE / 2;	//Do less damage with punch
		 Show();
	}

	 virtual int DoMagicAttack()
	 {
		 damage = STD_DAMAGE / 2;	//Do less damage with punch
		 enemy->BeAttacked();
		 return 0;
	 }

	int BeAttacked()
	{
		int damage = enemy->DoAttack();
		if (damage < armor)
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