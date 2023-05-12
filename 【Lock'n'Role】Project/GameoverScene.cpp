#include <string>
#include "DxLib.h"
#include "KeyCheck.h"
#include "GameCommon.h"
#include "SceneManager.h"
#include "Story.h"
#include "GameoverScene.h"

GameoverScene::GameoverScene(SceneManager* manager) : BaseScene(manager)
{

}

void GameoverScene::Init()
{
	//‰æ‘œ‚Ìƒ[ƒh
	gameoverLogo = LoadGraph("image/Gameover.png");
	gameoverBackH = LoadGraph("image/Gameover_Back.jpg");
	reStartlImageH = LoadGraph("image/ReStart.png");

	story_ = new Story();
	story_->Init();

}

void GameoverScene::Update()
{
	if (keyTrgDown[KEY_SYS_START])
	{
		sceneManager_->ChangeScene(SCENE_ID::TITLE);
	}
}

void GameoverScene::Draw()
{
	SetFontSize(50);
	ClearDrawScreen();

	//‰æ‘œ‚Ì•`‰æ
	DrawGraph(0, 0, gameoverBackH, true);
 	DrawGraph(SCREEN_HALF_SIZE_X-LOGO_SIZE_X/2,SCREEN_HALF_SIZE_Y- LOGO_SIZE_Y,gameoverLogo,true);
	DrawGraph(SCREEN_HALF_SIZE_X - 300, SCREEN_HALF_SIZE_Y + LOGO_SIZE_Y / 2, reStartlImageH, true);

}

void GameoverScene::Release()
{
	story_->Release();
	delete story_;
}
