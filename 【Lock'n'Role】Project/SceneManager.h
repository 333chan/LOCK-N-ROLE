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
	//現在のシーンID
	SCENE_ID sceneID_;
	//次のシーンID
	SCENE_ID nextSceneID_;

	BaseScene* scene_;

	void DoChangeScene();
};

