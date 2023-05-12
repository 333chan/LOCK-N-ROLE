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


	//�Q�[���I�[�o�[���S
	int gameoverLogo;
	//�Q�[���I�[�o�[�w�i
	int gameoverBackH;
	//���X�^�[�g���S
	int reStartlImageH;

};

