#include "DxLib.h"
#include "KeyCheck.h"


//変数の定義
//---------------------------
//  true : キーが押されている もしくは 状態が発生したら
bool keyOld[KEY_LIST_MAX];		// １フレーム前のキーの状態
bool keyNew[KEY_LIST_MAX];		// 現フレームのキーの状態
bool keyTrgDown[KEY_LIST_MAX];	// KeyDownのトリガー状態
bool keyTrgUp[KEY_LIST_MAX];	// KeyUpのトリガー状態


// キー情報の初期化
void KeyInit(void)
{
	for (int k = 0; k < KEY_LIST_MAX; k++)
	{
		keyOld[k] = false;
		keyNew[k] = false;
		keyTrgDown[k] = false;
		keyTrgUp[k] = false;
	}
}


// キー情報の作成
void CheckKeyList(void)
{
	// ①１フレーム前のデータをコピーする：keyOld
	// 　その他の変数は初期化
	for (int k = 0; k < KEY_LIST_MAX; k++)
	{
		keyOld[k] = keyNew[k];
		keyNew[k] = false;
		keyTrgDown[k] = false;
		keyTrgUp[k] = false;
	}

	// ②現フレームの状態を取得し格納：keyNew

	//システム関連
	keyNew[KEY_SYS_START] = CheckHitKey(KEY_INPUT_SPACE);
	keyNew[KEY_ADVANCE] = CheckHitKey(KEY_INPUT_RETURN);


	//マウス用キー
	keyNew[KEY_MOUSE_LEFT] = (GetMouseInput() & MOUSE_INPUT_LEFT);
	keyNew[KEY_MOUSE_RIGHT] = (GetMouseInput() & MOUSE_INPUT_RIGHT);

	//デバッグ用キー
	keyNew[KEY_TEXT] = CheckHitKey(KEY_INPUT_T);
	keyNew[KEY_MESSAGE] = CheckHitKey(KEY_INPUT_M);
	keyNew[KEY_UP] = CheckHitKey(KEY_INPUT_UP);
	keyNew[KEY_DOWN] = CheckHitKey(KEY_INPUT_DOWN);
	keyNew[KEY_W] = CheckHitKey(KEY_INPUT_W);
	keyNew[KEY_A] = CheckHitKey(KEY_INPUT_A);
	keyNew[KEY_S] = CheckHitKey(KEY_INPUT_S);
	keyNew[KEY_D] = CheckHitKey(KEY_INPUT_D);

	// ③トリガーの状態をチェックし格納：keyTrgDown、keyTrgUp

	for (int k = 0; k < KEY_LIST_MAX; k++)
	{
		keyTrgDown[k] = keyNew[k] & ~keyOld[k];
		keyTrgUp[k] = ~keyNew[k] & keyOld[k];

		//if ((keyNew[k] == true) && (keyOld[k] == false))
		//{
		//	keyTrgDown[k] = true;
		//}
		//if ((keyNew[k] == false) && (keyOld[k] == true))
		//{
		//	keyTrgUp[k] = true;
		//}
	}
}

