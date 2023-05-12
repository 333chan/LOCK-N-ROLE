#pragma once
#include "BaseScene.h"

enum class STATE
{
	GAME,
	CLEAR
};

class SceneManager;
class Story;
class Text;
class Comment;
class Character;
class Dice;
class Mouse;
class Sound;

class GameScene : public BaseScene
{
public:
	GameScene(SceneManager* manager);
	void Init()override;
	void Update()override;
	void Draw()override;
	void Release()override;
private:
	SceneManager* scenemanager_;
	Story* story_;
	Text* text_;
	Comment* comment_;
	Character* chara_;
	Dice* dice_;
	Mouse* mouse_;
	Sound* sound_;

	//�̗�
	int hetPoint;

	//���C�x
	int sanValue;

	//�X�e�[�^�X�w�i
	int statusImage;

	//�X�e�[�W��
	int stageNumber;

	//�󂯂�HP�_���[�W
	int damage;

	//�ʏ펞�̔w�i
	int GameImage;

	//�w�i
	int roomImageH;
	int roadImageH;
	int trainImageH;

	int GameClearBackH;
	bool soundflg;

	//���b�J�[�`��
	int LockerImage;

	//�A�C�e���摜
	int thermometerH;	//���x�v
	int potH;			//��
	int mittenH;		//�~�g��
	int bookH;			//�{
	int CairoH;			//�J�C��
	int medicineH;		//��
	int waterH;			//��
	int tedByearH;		//�ʂ������
	int mathPlateH;		//���̃v���[�g
	int mathPlate2H;	//���̃v���[�g2
	int itemGroupImageH;//�A�C�e������ɂ܂Ƃ߂��摜

	//�X�e�[�^�X�̔w�i
	int statusBack;		

	//�V�[���J�ڃt���O
	bool sceneMoveFlg;


};

