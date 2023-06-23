#include <string>
#include "DxLib.h"
#include "Dice.h"
#include "KeyCheck.h"
#include "GameCommon.h"
#include "SceneManager.h"
#include"Sound.h"
#include "Story.h"
#include "Text.h"
#include "Comment.h"
#include "Character.h"
#include "Mouse.h"
#include "GameScene.h"


GameScene::GameScene(SceneManager* manager) : BaseScene(manager)
{
}

void GameScene::Init()
{
	//背景のロード
	GameImage = LoadGraph("image/Game_back.png");
	roomImageH = LoadGraph("image/room_back.jpg");
	roadImageH = LoadGraph("image/road_back.jpg");
	trainImageH = LoadGraph("image/train_back.jpg");
	GameClearBackH = LoadGraph("image/Clear_back.jpg");

	//ロッカー画像のロード
	LockerImage = LoadGraph("image/LockerImage2.png");
	statusImage = LoadGraph("image/status.png");
	statusBack = LoadGraph("image/Cimage2.png");

	//アイテム画像のロード
	thermometerH = LoadGraph("image/thermometer.png");
	potH = LoadGraph("image/pot.png");
	mittenH = LoadGraph("image/mitten.png");
	bookH = LoadGraph("image/book.png");
	CairoH = LoadGraph("image/Cairo.png");
	medicineH = LoadGraph("image/medicine.png");
	waterH = LoadGraph("image/water.png");
	tedByearH = LoadGraph("image/tedByear.png");
	mathPlateH = LoadGraph("image/mathPlate.png");
	itemGroupImageH = LoadGraph("image/itemGroup.png");


	hetPoint = 11;	//体力
	sanValue = 12;	//正気度

	stageNumber = 1;

	sceneMoveFlg = false;

	chara_ = new Character();
	chara_->Init();

	story_ = new Story();
	story_->Init();

	text_ = new Text();
	text_->Init();

	comment_ = new Comment();
	comment_->Init();

	dice_ = new Dice();
	dice_->Init();

	mouse_ = new Mouse();
	mouse_->Init();

	sound_ = new Sound();
	sound_->Init();

	soundflg = false;

	if (soundflg == false)
	{
		sound_->GameBGM();
	}

	if (soundflg == true)
	{
		sound_->EDBGM();
	}

}

void GameScene::Update()
{
	story_->Update();
	dice_->Updata();

	if (sceneMoveFlg == true)
	{
		sceneManager_->ChangeScene(SCENE_ID::GAME_CLEAR);
	}

	//ゲームオーバー判定
	if (hetPoint <= 0)
	{
		hetPoint = 11;
		sceneManager_->ChangeScene(SCENE_ID::GAME_OVER);
	}
	if (sanValue <= 0)
	{
		sanValue = 11;
		sceneManager_->ChangeScene(SCENE_ID::GAME_OVER);
	}
}

void GameScene::Draw()
{
	ClearDrawScreen();

	DrawGraph(0, 0, GameImage,true);
	DrawGraph((SCREEN_SIZE_X / 2) - (LOCKER_SIZE_X / 2), (SCREEN_SIZE_Y / 2) - (LOCKER_SIZE_Y / 2), LockerImage, true);

	auto messageType = MESSAGE_KIND::NONE;

	if (keyTrgDown[KEY_ADVANCE])
	{
		stageNumber++;
	}

	switch (stageNumber)
	{
	case 1:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(1);
		break;
	case 2:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(4);
		break;

	case 3:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(4);
		break;

	case 4:
	case 5:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(4);
		break;

	case 6:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(4);
		break;

	case 7:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 8:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(2);
		break;
	case 9:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 10:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 11:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(3);
		break;

	case 12:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 13:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 14:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 15:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;
	case 16:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;
	case 17:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;
	case 18:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 19:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 20:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(3);
		break;
	case 21:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(3);
		break;
	case 22:

	case 23:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;
	case 24:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(2);

		DrawGraph(SCREEN_HALF_SIZE_X-250, 150, itemGroupImageH, true); // アイテムのまとめ表示

		break;
	case 25:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 26:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 27:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;
	case 28:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(2);
		break;
	case 29:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 30:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 31:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;
	case 32:
	case 33:
		messageType = MESSAGE_KIND::COMMENT;


		chara_->Draw(3);
		break;
	case 34:
	case 35:
	case 36:
	case 37:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;
	case 38:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(2);
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, thermometerH, true);
		break;
	case 39:
	case 40:
	case 41:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, potH, true);
		break;
	case 42:
		messageType = MESSAGE_KIND::TEXT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, potH, true);
		chara_->Draw(2);
		break;
	case 43:
		messageType = MESSAGE_KIND::TEXT;

		chara_->Draw(2);
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, potH, true);


		if (keyTrgUp[KEY_ADVANCE])
		{
			sound_->DiceSE();
			sound_->GameBGM();

			dice_->Dice4();

			damage = dice_->mdice4;

			hetPoint=hetPoint - damage;
		}

		break;

	case 44:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, potH, true);
		chara_->Draw(2);
		break;
	case 45:
	case 46:
	case 47:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, potH, true);
		chara_->Draw(3);
		break;

	case 48:
		messageType = MESSAGE_KIND ::TEXT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, potH, true);
		chara_->Draw(3);

		if (keyTrgUp[KEY_ADVANCE])
		{
			sound_->DiceSE();
			sound_->GameBGM();

			dice_->Dice1();

			damage = dice_->mdice1;

			sanValue =sanValue - damage;
		}
		break;
	case 49:
		messageType = MESSAGE_KIND::TEXT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, potH, true);
		chara_->Draw(3);
		break;

	case 50:
	case 51:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 52:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 53:

		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(2);
		break;
	case 54:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;
	case 55:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, mittenH, true);
		chara_->Draw(2);
		break;
	case 56:
	case 57:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, bookH, true);
		chara_->Draw(2);
		break;
	case 58:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, bookH, true);
		chara_->Draw(3);
		break;
	case 59:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, CairoH, true);
		chara_->Draw(3);
		break;
	case 60:
		messageType = MESSAGE_KIND::TEXT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, CairoH, true);
		chara_->Draw(3);
		break;
	case 61:
	case 62:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, CairoH, true);
		chara_->Draw(2);
		break;
	case 63:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, medicineH, true);
		chara_->Draw(3);
		break;

	case 64:
		messageType = MESSAGE_KIND::TEXT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, medicineH, true);
		chara_->Draw(3);
		break;

	case 65:
	case 66:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, medicineH, true);
		chara_->Draw(3);
		break;

	case 67:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, waterH, true);
		DrawGraph(SCREEN_HALF_SIZE_X , SCREEN_HALF_SIZE_Y, tedByearH, true);
		chara_->Draw(3);
		break;


	case 68:
		messageType = MESSAGE_KIND ::TEXT;
		chara_->Draw(3);
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, waterH, true);
		DrawGraph(SCREEN_HALF_SIZE_X, SCREEN_HALF_SIZE_Y, tedByearH, true);

		if (keyTrgUp[KEY_ADVANCE])
		{
			sound_->DiceSE();
			sound_->GameBGM();

			dice_->Dice3();

			damage = dice_->mdice3;

			hetPoint = hetPoint - damage;

			dice_->Dice1();

			damage = 0;
			damage = dice_->mdice1;

			sanValue = sanValue - damage;
		}

		break;

	case 69:
		messageType = MESSAGE_KIND::TEXT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, waterH, true);
		DrawGraph(SCREEN_HALF_SIZE_X, SCREEN_HALF_SIZE_Y, tedByearH, true);
		chara_->Draw(3);
		break;

	case 70:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X - 100, SCREEN_HALF_SIZE_Y, waterH, true);
		DrawGraph(SCREEN_HALF_SIZE_X, SCREEN_HALF_SIZE_Y, tedByearH, true);
		chara_->Draw(3);
		break;

	case 71:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 72:
	case 73:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;

	case 74:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(3);
		break;

	case 75:
	case 76:
	case 77:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;

	case 78:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(3);
		break;
	case 79:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;
	case 80:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;


	case 81:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;
	case 82:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X, SCREEN_HALF_SIZE_Y, tedByearH, true);
		chara_->Draw(2);
		break;

	case 83:

		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(2);
		break;
	case 84:
		DrawGraph(SCREEN_HALF_SIZE_X, SCREEN_HALF_SIZE_Y, CairoH, true);
	case 85:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 86:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 87:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(2);
		break;

	case 88:
	case 89:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 90:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 91:
		messageType = MESSAGE_KIND::COMMENT;
		DrawGraph(SCREEN_HALF_SIZE_X, SCREEN_HALF_SIZE_Y, CairoH, true);
		chara_->Draw(3);
		break;

	case 92:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(3);
		break;

	case 93:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;

	case 94:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(3);

		if (keyTrgUp[KEY_ADVANCE])
		{
			sound_->DiceSE();
			sound_->GameBGM();

			dice_->Dice5();

			damage = dice_->mdice5;

			sanValue = sanValue - damage;
		}

		break;

	case 95:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 96:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(2);
		break;

	case 97:
	case 98:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 99:
	case 100:
	case 101:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;
	case 102:
		messageType = MESSAGE_KIND::TEXT;
		DrawGraph(SCREEN_HALF_SIZE_X-100, SCREEN_HALF_SIZE_Y, mathPlateH, true);
		chara_->Draw(3);
		break;

	case 103:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 104:
		messageType = MESSAGE_KIND::TEXT;
		DrawGraph(SCREEN_HALF_SIZE_X-100, SCREEN_HALF_SIZE_Y, mathPlateH, true);
		chara_->Draw(3);
		break;


	case 105:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;

	case 106:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(3);
		break;

	case 107:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 108:
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(2);
		break;

	case 109:
	case 110:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(3);
		break;

	case 111:
	case 112:
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(2);
		break;

	case 113:
		ClearDrawScreen();
		DrawBox(0, 0, SCREEN_SIZE_X, SCREEN_SIZE_Y, 0xffffff, true);
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(1);
		break;

	case 114:
		ClearDrawScreen();
		DrawGraph(0, 0, roomImageH, true);
		soundflg == true;
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(1);
		break;
	case 115:
		DrawGraph(0, 0, roadImageH, true);
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(6);
		break;

	case 116:
		DrawGraph(0, 0, roadImageH, true);
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(6);
		break;


	case 117:
		DrawGraph(0, 0, trainImageH, true);
		messageType = MESSAGE_KIND::TEXT;
		chara_->Draw(5);
		break;

	case 118:
		DrawGraph(0, 0, trainImageH, true);
		messageType = MESSAGE_KIND::COMMENT;
		chara_->Draw(5);
		break;

	case 119:
		DrawGraph(0, 0, GameClearBackH, true);
		messageType = MESSAGE_KIND::TEXT;
		break;

	case 120:
		sceneMoveFlg = true;
		DrawGraph(0, 0, GameClearBackH, true);
		break;

	default:
		break;
	}

	DrawGraph(10,10, statusImage,true);
	DrawFormatString(30, 30, 0xffffff, "HP %d/11", hetPoint,true);
	DrawFormatString(30, 60, 0xffffff, "SAN値 %d/12",sanValue, true);
	story_->Draw(messageType);
	DrawFormatString(MESSAGE_BOX_SIZE_X - 150, SCREEN_SIZE_Y - 50, 0xffff00, "Enterで次へ", true);
}

void GameScene::Release()
{
	DeleteGraph(LockerImage);
	DeleteGraph(GameImage);


	story_->Release();
	delete story_;

	text_->Release();
	delete text_;

	comment_->Release();
	delete comment_;

	dice_->Release();
	delete dice_;

	mouse_->Release();
	delete mouse_;

	sound_->Release();
	delete sound_;
}
