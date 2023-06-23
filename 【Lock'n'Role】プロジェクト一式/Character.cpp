#include "DxLib.h"
#include "GameCommon.h"
#include "Character.h"

void Character::Init()
{
	//óßÇøäGâÊëúÇÃÉçÅ[Éh
	playerImage = LoadGraph("image/player/look_right.png");

	heroineImage = LoadGraph("image/heroine/idel.png");
	heroineShadowImage = LoadGraph("image/heroine/shadow.png");

	teacherImage = LoadGraph("image/teacher/idel.png");
	teacherShadowImage = LoadGraph("image/teacher/shadow.png");

}

void Character::Update()
{
}

void Character::Draw(int number)
{

	switch (number)
	{
	case 1:
		DrawGraph(0, SCREEN_SIZE_Y - 580, playerImage, true);
		break;

	case 2:
		DrawGraph(0, SCREEN_SIZE_Y - 580, playerImage, true);
		DrawGraph(SCREEN_SIZE_X - 320, SCREEN_SIZE_Y - 580, teacherImage, true);
		DrawGraph(SCREEN_SIZE_X - 380, SCREEN_SIZE_Y - 565, heroineImage, true);
		break;

	case 3:
		DrawGraph(0, SCREEN_SIZE_Y - 580, playerImage, true);
		DrawGraph(SCREEN_SIZE_X - 380, SCREEN_SIZE_Y - 565, heroineImage, true);
		DrawGraph(SCREEN_SIZE_X - 320, SCREEN_SIZE_Y - 580, teacherImage, true);
		break;

	case 4:
		DrawGraph(0, SCREEN_SIZE_Y - 580, playerImage, true);
		DrawGraph(SCREEN_SIZE_X - 380, SCREEN_SIZE_Y - 565, heroineShadowImage, true);
		DrawGraph(SCREEN_SIZE_X - 320, SCREEN_SIZE_Y - 580, teacherShadowImage, true);
		break;

	case 5:
		DrawGraph(0, SCREEN_SIZE_Y - 580, playerImage, true);
		DrawGraph(SCREEN_SIZE_X - 380, SCREEN_SIZE_Y - 565, heroineImage, true);
		break;

	case 6:
		DrawGraph(0, SCREEN_SIZE_Y - 580, playerImage, true);
		DrawGraph(SCREEN_SIZE_X - 320, SCREEN_SIZE_Y - 580, teacherImage, true);
		break;
	}
}

void Character::Release()
{
}
