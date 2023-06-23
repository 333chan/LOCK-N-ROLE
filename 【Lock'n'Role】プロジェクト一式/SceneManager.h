#pragma once
#include "TitleScene.h"
class BaseScene;

enum class SCENE_ID
{
	NONE,
	TITLE,
	GAME,
	GAME_OVER,
	GAME_CLEAR
};

class SceneManager
{
public:
	void Init();
	void Update();
	void Release();

	void ChangeScene(SCENE_ID nextID);
private:
	//���݂̃V�[��ID
	SCENE_ID sceneID_;
	//���̃V�[��ID
	SCENE_ID nextSceneID_;

	BaseScene* scene_;

	void DoChangeScene();
};

