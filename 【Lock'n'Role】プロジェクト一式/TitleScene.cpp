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
	//�^�C�g���摜�̓ǂݍ���
	// �^�C�g�����S
	TitleImage = LoadGraph("image/Title.png");
	// �w�i(����)
	BackImage = LoadGraph("image/Game_back.png");	
	//�I������
	BoxImage = LoadGraph("image/MessageBox/button_blue2.png");	
	// �I�������Ƃ��ɔ���������p
	HBoxImage = LoadGraph("image/MessageBox/button_blue_hakkou2.png");	
	// �X�^�[�g�̕���
	StartImage = LoadGraph("image/start2.png");	

	sound_ = new Sound;
	sound_->Init();

	sound_->TitleBGM();
}

void TitleScene::Update()
{
	if (keyTrgDown[KEY_SYS_START]) // �����̃L�[�������玟�̏�ʂ�
	{
		sound_->bottanSE();
		sceneManager_->ChangeScene(SCENE_ID::GAME);
	}
}

void TitleScene::Draw()
{
	SetDrawScreen(DX_SCREEN_BACK);
	ClearDrawScreen();

	// �^�C�g���摜�̕`��
	DrawGraph(0, 0, BackImage, true);
	DrawGraph((SCREEN_SIZE_X / 2) - (LOGO_SIZE_X/2), 50, TitleImage, true);
	DrawGraph((SCREEN_SIZE_X / 2) - (650 / 2), (SCREEN_SIZE_Y / 2), BoxImage, true);

	DrawGraph((SCREEN_SIZE_X / 2) - (512 / 2), (SCREEN_SIZE_Y / 2) + (104 / 2), StartImage, true);



	
}

void TitleScene::Release()
{
	//�摜�̊J��
	DeleteGraph(TitleImage);
	DeleteGraph(BackImage);
}
