#pragma once
#include "BaseScene.h"



class SceneManager;
class Story;

class GameoverScene : public BaseScene
{
public:

	enum class STATE
	{
		GAME,
		CLEAR
	};

	GameoverScene(SceneManager* manager);
	void Init()override;
	void Update()override;
	void Draw()override;
	void Release()override;
private:
	SceneManager* scenemanager_;
	Story* story_;


	//ゲームオーバーロゴ
	int gameoverLogo;
	//ゲームオーバー背景
	int gameoverBackH;
	//リスタートロゴ
	int reStartlImageH;

};

