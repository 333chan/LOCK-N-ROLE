#pragma once
#include "DxLib.h"

class Mouse
{
public:
	void Init();
	void Update();
	void Draw();
	bool IsMousePoint(int xx, int xy, int yx, int yy);//�}�E�X�̍��W���I�����Əd�Ȃ��Ă��邩
	void Release();

	bool GetLeftClick();
	bool GetRighttClick();
private:
	int mouseX, mouseY;//�}�E�X�̍��W
	int ChoiceImage;
};

