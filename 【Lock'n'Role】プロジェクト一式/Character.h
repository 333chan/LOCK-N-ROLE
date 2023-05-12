#pragma once
class Character
{
public:
	void Init();
	void Update();
	void Draw(int number);
	void Release();
private:

	//プレイヤーの立ち絵
	int playerImage;

	//女NPC立ち絵
	int heroineImage;
	int heroineShadowImage;

	//男NPC立ち絵
	int teacherImage;
	int teacherShadowImage;
};

