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

	//体力
	int hetPoint;

	//正気度
	int sanValue;

	//ステータス背景
	int statusImage;

	//ステージ数
	int stageNumber;

	//受けるHPダメージ
	int damage;

	//通常時の背景
	int GameImage;

	//背景
	int roomImageH;
	int roadImageH;
	int trainImageH;

	int GameClearBackH;
	bool soundflg;

	//ロッカー描画
	int LockerImage;

	//アイテム画像
	int thermometerH;	//温度計
	int potH;			//鍋
	int mittenH;		//ミトン
	int bookH;			//本
	int CairoH;			//カイロ
	int medicineH;		//薬
	int waterH;			//水
	int tedByearH;		//ぬいぐるみ
	int mathPlateH;		//九九のプレート
	int mathPlate2H;	//九九のプレート2
	int itemGroupImageH;//アイテムを一つにまとめた画像

	//ステータスの背景
	int statusBack;		

	//シーン遷移フラグ
	bool sceneMoveFlg;


};

