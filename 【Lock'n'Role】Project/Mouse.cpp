#include "Mouse.h"
#include "GameCommon.h"

void Mouse::Init()
{
	mouseX = mouseY = 0;
	ChoiceImage = LoadGraph("image/Cimage.png");
}

void Mouse::Update()
{
	
}

void Mouse::Draw()
{
	auto X = SCREEN_HALF_SIZE_X - SELECT_IAMGE_SIZE_X / 2;

	DrawGraph(X, SCREEN_HALF_SIZE_Y - SELECT_IAMGE_SIZE_Y * 3, ChoiceImage, true);

	DrawGraph(X, SCREEN_HALF_SIZE_Y - SELECT_IAMGE_SIZE_Y / 3, ChoiceImage, true);

	DrawFormatString(X+20, SCREEN_HALF_SIZE_Y - (SELECT_IAMGE_SIZE_Y * 3)+30,0xffffff,"‡@˜b‚µ‚©‚¯‚És‚­",true);
	DrawFormatString(X+20, SCREEN_HALF_SIZE_Y - (SELECT_IAMGE_SIZE_Y / 3)+30, 0xffffff, "‡AŽü‚è‚ðŒ©“n‚·(–Ú¯)", true);	// dice‚É‚Â‚È‚°‚½‚¢
}

bool Mouse::IsMousePoint(int xx, int xy, int yx, int yy)
{
	GetMousePoint(&mouseX, &mouseY);
	if ((mouseX >= xx && mouseX <= xx + yx) && (mouseY >= xy && mouseY <= xy + yy))
	{
		return true;
	}
	return false;
}

void Mouse::Release()
{
}

bool Mouse::GetLeftClick()
{
	return (GetMouseInput() & MOUSE_INPUT_LEFT);
}

bool Mouse::GetRighttClick()
{
	return (GetMouseInput() & MOUSE_INPUT_RIGHT);
}
