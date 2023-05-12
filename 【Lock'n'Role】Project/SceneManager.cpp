#include "DxLib.h"
#include "KeyCheck.h"
#include "GameScene.h"
#include "TitleScene.h"
#include"GameoverScene.h"
#include "GameclearScene.h"
#include "SceneManager.h"

void SceneManager::Init()
{
	//�V�[��ID�̏�����
	//�ŏ��̃V�[��ID�̓^�C�g��
	sceneID_ = SCENE_ID::TITLE;
	//���̃V�[��ID�͂܂��Ȃ�
	nextSceneID_ = SCENE_ID::NONE;

	KeyInit();	//�L�[���̏�����

	scene_ = new TitleScene(this);
	scene_->Init();
}

void SceneManager::Update()
{
	if (scene_ == nullptr)
	{
		return;
	}

	CheckKeyList();	//�L�[���̎擾

	scene_->Update();
	scene_->Draw();

}

void SceneManager::Release()
{
	scene_->Release();
}

void SceneManager::ChangeScene(SCENE_ID nextID)
{
	nextSceneID_ = nextID;

	DoChangeScene();
}

void SceneManager::DoChangeScene()
{
	scene_->Release();

	sceneID_ = nextSceneID_;

	switch (sceneID_)
	{
	case SCENE_ID::TITLE:
		scene_ = new TitleScene(this);
		break;
	case SCENE_ID::GAME:
		scene_ = new GameScene(this);
		break;
	case SCENE_ID::GAME_OVER:
		scene_ = new GameoverScene(this);
		break;
	case SCENE_ID::GAME_CLEAR:
		scene_ = new GameclearScene(this);
		break;
	default:
		break;
	}

	//�V�[�����V�����Ȃ����̂ł��̃V�[����Init���Ă�
	scene_->Init();

	nextSceneID_ = SCENE_ID::NONE;
}
