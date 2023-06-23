#include "DxLib.h"
#include "KeyCheck.h"
#include "GameCommon.h"
#include "SceneManager.h"
#include "BaseScene.h"
#include "Sound.h"
#include "TitleScene.h"


TitleScene::TitleScene(SceneManager* manager) : BaseScene(manager)
{
}

void TitleScene::Init()
{
	//タイトル画像の読み込み
	// タイトルロゴ
	TitleImage = LoadGraph("image/Title.png");
	// 背景(部屋)
	BackImage = LoadGraph("image/Game_back.png");	
	//選択項目
	BoxImage = LoadGraph("image/MessageBox/button_blue2.png");	
	// 選択したときに発光させる用
	HBoxImage = LoadGraph("image/MessageBox/button_blue_hakkou2.png");	
	// スタートの文字
	StartImage = LoadGraph("image/start2.png");	

	sound_ = new Sound;
	sound_->Init();

	sound_->TitleBGM();
}

void TitleScene::Update()
{
	if (keyTrgDown[KEY_SYS_START]) // 何かのキー押したら次の場面へ
	{
		sound_->bottanSE();
		sceneManager_->ChangeScene(SCENE_ID::GAME);
	}
}

void TitleScene::Draw()
{
	SetDrawScreen(DX_SCREEN_BACK);
	ClearDrawScreen();

	// タイトル画像の描画
	DrawGraph(0, 0, BackImage, true);
	DrawGraph((SCREEN_SIZE_X / 2) - (LOGO_SIZE_X/2), 50, TitleImage, true);
	DrawGraph((SCREEN_SIZE_X / 2) - (650 / 2), (SCREEN_SIZE_Y / 2), BoxImage, true);

	DrawGraph((SCREEN_SIZE_X / 2) - (512 / 2), (SCREEN_SIZE_Y / 2) + (104 / 2), StartImage, true);



	
}

void TitleScene::Release()
{
	//画像の開放
	DeleteGraph(TitleImage);
	DeleteGraph(BackImage);
}
