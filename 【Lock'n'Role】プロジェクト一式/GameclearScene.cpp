
#include <string>
#include "DxLib.h"
#include "KeyCheck.h"
#include "Sound.h"
#include "GameCommon.h"
#include "SceneManager.h"
#include "Story.h"
#include "GameclearScene.h"

GameclearScene::GameclearScene(SceneManager* manager) : BaseScene(manager)
{


}

void GameclearScene::Init()
{
	//‰æ‘œ‚Ìƒ[ƒh
	gameClearLogo = LoadGraph("image/Game_Clear.png");
	gameClearBackH = LoadGraph("image/Clear_back.jpg");
	reStartlImageH = LoadGraph ("image/ReStart.png");

	story_ = new Story();
	story_->Init();

	sound_ = new Sound();
	sound_->Init();

	sound_->EDBGM();

}

void GameclearScene::Update()
{
	if (keyTrgDown[KEY_SYS_START])
	{
		sceneManager_->ChangeScene(SCENE_ID::TITLE);
	}
}

void GameclearScene::Draw()
{
	ClearDrawScreen();

	//‰æ‘œ‚Ì•`‰æ
	DrawGraph(0, 0, gameClearBackH, true);
	DrawGraph(SCREEN_HALF_SIZE_X-LOGO_SIZE_X/2, SCREEN_HALF_SIZE_Y - LOGO_SIZE_Y, gameClearLogo, true);
	DrawGraph(SCREEN_HALF_SIZE_X - 300, SCREEN_HALF_SIZE_Y + LOGO_SIZE_Y / 2, reStartlImageH, true);

}

void GameclearScene::Release()
{
	story_->Release();
	delete story_;
}
