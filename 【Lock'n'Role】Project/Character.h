#pragma once
class Character
{
public:
	void Init();
	void Update();
	void Draw(int number);
	void Release();
private:

	//ƒvƒŒƒCƒ„[‚Ì—§‚¿ŠG
	int playerImage;

	//—NPC—§‚¿ŠG
	int heroineImage;
	int heroineShadowImage;

	//’jNPC—§‚¿ŠG
	int teacherImage;
	int teacherShadowImage;
};

