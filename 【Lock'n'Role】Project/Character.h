#pragma once
class Character
{
public:
	void Init();
	void Update();
	void Draw(int number);
	void Release();
private:

	//�v���C���[�̗����G
	int playerImage;

	//��NPC�����G
	int heroineImage;
	int heroineShadowImage;

	//�jNPC�����G
	int teacherImage;
	int teacherShadowImage;
};

