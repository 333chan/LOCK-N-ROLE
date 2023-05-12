#pragma once
class Character;
class Text;
class Comment;

//���b�Z�[�W�̎��
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
	//Mood��1�̏ꍇ���b�Z�[�W
	virtual void Draw(MESSAGE_KIND mes_kind);
	virtual void Release();
private:
	Character* chara_;
	Text* text_;
	Comment* comment_;

	//���b�Z�[�WBox�̕`��
	int MessageBoxImage;

	//�g�[�NBox�̕`��
	int talkBoxImage;

	int TextNo;
	int CommentNo;
	
};

