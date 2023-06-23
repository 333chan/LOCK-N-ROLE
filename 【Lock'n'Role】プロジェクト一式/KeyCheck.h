//#pragma once

//定義
//---------------------------
enum KEY_LIST		//ゲーム内で利用するキー情報
{
	// システム キー情報
	KEY_SYS_START			//0

	,KEY_ADVANCE
	,KEY_UP
	,KEY_DOWN
	
	//マウス用キー
	,KEY_MOUSE_LEFT
	, KEY_MOUSE_RIGHT

	//デバッグ用キー
	, KEY_TEXT
	, KEY_MESSAGE
	, KEY_W
	, KEY_A
	, KEY_S
	, KEY_D

	//キーリスト数
	, KEY_LIST_MAX			//13
};

//変数の公開
//---------------------------
extern bool keyNew[KEY_LIST_MAX];		// 現フレームのキーの状態
extern bool keyTrgDown[KEY_LIST_MAX];	// KeyDownのトリガー状態
extern bool keyTrgUp[KEY_LIST_MAX];		// KeyUpのトリガー状態

//プロトタイプ宣言
//---------------------------
void KeyInit(void);				// キー情報の初期化
void CheckKeyList(void);		// キー情報の作成
