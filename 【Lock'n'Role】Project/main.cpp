#include "DxLib.h"
#include <windows.h>
#include "GameCommon.h"
//#include "_debug/_DebugConOut.h"
//#include "_debug/_DebugDispOut.h"
#include "SceneManager.h"]


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	SetWindowText("Lock'n'Role");
	SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 32);
	ChangeWindowMode(true);

	if (DxLib_Init() == -1)
	{
		return false;
	}
	SceneManager scenemanager;

	scenemanager.Init();

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{

		scenemanager.Update();
		

		ScreenFlip();

	}
	scenemanager.Release();

	DxLib_End();

}