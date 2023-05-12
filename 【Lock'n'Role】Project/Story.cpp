#include <string>
#include "DxLib.h"
#include "KeyCheck.h"
#include "GameCommon.h"
#include "Character.h"
#include "Text.h"
#include "Comment.h"
#include "Story.h"

void Story::Init()
{
	//メッセージ、トークBoxのロード
	talkBoxImage = LoadGraph("image/MessageBox/box_blue.png");
	MessageBoxImage = LoadGraph("image/MessageBox/box_blue_name.png");

	chara_ = new Character();
	chara_->Init();
	text_ = new Text();
	text_->Init();
	comment_ = new Comment();
	comment_->Init();

	TextNo = 1;
	CommentNo = 0;
}

void Story::Update()
{

}

void Story::Draw(MESSAGE_KIND mes_kind)
{
	int TALK_AREA_SIZE_X = SCREEN_HALF_SIZE_X - (MESSAGE_BOX_SIZE_X / 2) + TALK_BOX_STRING_X;
	int TALK_AREA_SIZE_Y = SCREEN_SIZE_Y - MESSAGE_BOX_SIZE_Y;

	// メッセージボックス
	DrawGraph(
		SCREEN_HALF_SIZE_X - (MESSAGE_BOX_SIZE_X / 2), SCREEN_SIZE_Y - MESSAGE_BOX_SIZE_Y - 5,
		MessageBoxImage,
		true);
	std::string text = "";
	std::string comment = "";
	const char* dst = text.c_str();
	const char* dst2 = comment.c_str();


	SetFontSize(25);
	//メッセージBox、トークBoxの描画
	if (mes_kind == MESSAGE_KIND::TEXT)
	{
		if (keyTrgDown[KEY_ADVANCE])
		{
			TextNo++;
		}
		text = text_->Storage(TextNo);

		dst = text.c_str();
		DrawFormatString(TALK_AREA_SIZE_X, TALK_AREA_SIZE_Y + 50, 0xfffffff, dst, true);

	}
	else if (mes_kind == MESSAGE_KIND::COMMENT)
	{

		if (keyTrgDown[KEY_ADVANCE])
		{
			CommentNo++;
		}


		comment = comment_->Storage2(CommentNo);
		dst2 = comment.c_str();
		DrawFormatString(TALK_AREA_SIZE_X, TALK_AREA_SIZE_Y + 50, 0xfffffff, dst2, true);

	}
	else
	{

	}
}

void Story::Release()
{
	//画像の開放
	chara_->Release();
	delete chara_;

	DeleteGraph(talkBoxImage);
	DeleteGraph(MessageBoxImage);
}
