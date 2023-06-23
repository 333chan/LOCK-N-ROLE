#pragma once
#include "DxLib.h"

class Mouse
{
public:
	void Init();
	void Update();
	void Draw();
	bool IsMousePoint(int xx, int xy, int yx, int yy);//マウスの座標が選択肢と重なっているか
	void Release();

	bool GetLeftClick();
	bool GetRighttClick();
private:
	int mouseX, mouseY;//マウスの座標
	int ChoiceImage;
};

