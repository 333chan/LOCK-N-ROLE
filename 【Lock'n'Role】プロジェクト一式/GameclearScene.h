#pragma once
#include "BaseScene.h"

class SceneManager;
class Story;
class Sound;



class GameclearScene : public BaseScene
{
public:

	enum class STATE
	{
		GAME,
		CLEAR
	};

	GameclearScene(SceneManager* manager);
	void Init()override;
	void Update()override;
	void Draw()override;
	void Release()override;
private:
	SceneManager* scenemanager_;
	Story* story_;
	Sound* sound_;

	//ゲームクリアロゴ
	int gameClearLogo;
	//ゲームクリア背景
	int gameClearBackH;
	//リスタートロゴ
	int reStartlImageH;



};

