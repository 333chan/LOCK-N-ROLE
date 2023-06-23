#pragma once
#include "BaseScene.h"
class SceneManager;
class Sound;

class TitleScene : public BaseScene
{
public:
	TitleScene(SceneManager* manager);
	void Init() override;
	void Update() override;
	void Draw() override;
	void Release() override;

private:
	Sound* sound_;

	int TitleImage;
	int BackImage;
	int BoxImage;
	int HBoxImage;
	int StartImage;


};