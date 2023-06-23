#pragma once
class Character;
class Text;
class Comment;

//メッセージの種類
enum class MESSAGE_KIND
{
	NONE,
	TEXT,
	COMMENT
};

class Story
{
public:
	virtual void Init();
	virtual void Update();
	//Moodが1の場合メッセージ
	virtual void Draw(MESSAGE_KIND mes_kind);
	virtual void Release();
private:
	Character* chara_;
	Text* text_;
	Comment* comment_;

	//メッセージBoxの描画
	int MessageBoxImage;

	//トークBoxの描画
	int talkBoxImage;

	int TextNo;
	int CommentNo;
	
};

