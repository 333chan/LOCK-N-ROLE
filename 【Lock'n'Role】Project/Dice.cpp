#include "DxLib.h"
#include <stdlib.h>
#include <time.h>
#include "KeyCheck.h"
#include "Dice.h"

void Dice::Init(void)
{
	mdice = 0;
	mdice4 = 0;
	mdice1 = 0;
	mdice3 = 0;
	mdice5 = 0;
	srand((unsigned int)GetTickCount64());
}

void Dice::Updata(void)
{


}

void Dice::Draw(void)
{

	Dice100();
	Dice2();
	Dice3();
	Dice5();
	Dice6();

}



void Dice::Release(void)
{
}

// 成否判定(技能やSAN値チェック)
void Dice::Dice100(void)
{
	// 技能とHpの成否
	//if (Dice100flg == true)
	{
		auto dice = (rand() % 100) + 1;
		//if (keyTrgDown[KEY_TEXT])
		{
			// 成功
			flg = true;
			if (flg == true)
			{
	/*			DrawFormatString(500, 200, 0x000000, "%d", dice, true);*/
			}



			if (dice >= 70)
			{
				// 失敗
				//DrawFormatString(500, 200, 0xff0000, "%d", dice, true);
				flg = false;
			}

		}
	}

	// SAN値チェックの成否
	//if (SAN100flg==true)
	//{
	//	auto dice = (rand() % 50) + 1;
	//	if (keyTrgDown[KEY_TEXT])
	//	{
	//		// 成功
	//		DrawFormatString(500, 200, 0x000000, "%d", dice, true);
	//		trueflg;
	//		if (dice >= 50)
	//		{
	//			// 失敗
	//			DrawFormatString(500, 200, 0xff0000, "%d", dice, true);
	//			falseflg;
	//		}

	//	}
	//}


}

void Dice::Dice1(void)
{
	mdice1 = (rand() % 1) + 1;
	//if (CheckHitKey(KEY_INPUT_L))
	//{
	//	DrawFormatString(500, 200, 0x000000, "%d", mdice1, true);

	//}

}

// 1d2
void Dice::Dice2(void)
{
	auto dice = (rand() % 2) + 1;
	//if (CheckHitKey(KEY_INPUT_L))
	//{
	//	DrawFormatString(500, 200, 0x000000, "%d", dice, true);

	//}
}
// 1d3
void Dice::Dice3(void)
{

	mdice3 = (rand() % 5) + 1;
	//if (CheckHitKey(KEY_INPUT_K))
	//{
	//	DrawFormatString(500, 200, 0x000000, "%d", mdice3, true);

	//}
}

//1d4
void Dice::Dice4(void)
{
	mdice4 = (rand() % 6) + 1;
	//if (CheckHitKey(KEY_INPUT_K))
	//{
	//	DrawFormatString(500, 200, 0x000000, "%d", mdice4, true);

	//}
}

// 1d5
void Dice::Dice5(void)
{
	mdice5 = (rand() % 5) + 1;
	//if (keyTrgDown[KEY_UP])
	//{

	//	DrawFormatString(500, 200, 0x000000, "%d", mdice5, true);

	//}
	//mdice = dice;
	//return 	mdice;
}

// 1d6
void Dice::Dice6(void)
{
	auto dice = (rand() % 6) + 1;
	//if (CheckHitKey(KEY_INPUT_J))
	//{
	//	DrawFormatString(500, 200, 0x000000, "%d", dice, true);

	//}
}
