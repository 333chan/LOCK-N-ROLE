#include "DxLib.h"
#include "KeyCheck.h"


//�ϐ��̒�`
//---------------------------
//  true : �L�[��������Ă��� �������� ��Ԃ�����������
bool keyOld[KEY_LIST_MAX];		// �P�t���[���O�̃L�[�̏��
bool keyNew[KEY_LIST_MAX];		// ���t���[���̃L�[�̏��
bool keyTrgDown[KEY_LIST_MAX];	// KeyDown�̃g���K�[���
bool keyTrgUp[KEY_LIST_MAX];	// KeyUp�̃g���K�[���


// �L�[���̏�����
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


// �L�[���̍쐬
void CheckKeyList(void)
{
	// �@�P�t���[���O�̃f�[�^���R�s�[����FkeyOld
	// �@���̑��̕ϐ��͏�����
	for (int k = 0; k < KEY_LIST_MAX; k++)
	{
		keyOld[k] = keyNew[k];
		keyNew[k] = false;
		keyTrgDown[k] = false;
		keyTrgUp[k] = false;
	}

	// �A���t���[���̏�Ԃ��擾���i�[�FkeyNew

	//�V�X�e���֘A
	keyNew[KEY_SYS_START] = CheckHitKey(KEY_INPUT_SPACE);
	keyNew[KEY_ADVANCE] = CheckHitKey(KEY_INPUT_RETURN);


	//�}�E�X�p�L�[
	keyNew[KEY_MOUSE_LEFT] = (GetMouseInput() & MOUSE_INPUT_LEFT);
	keyNew[KEY_MOUSE_RIGHT] = (GetMouseInput() & MOUSE_INPUT_RIGHT);

	//�f�o�b�O�p�L�[
	keyNew[KEY_TEXT] = CheckHitKey(KEY_INPUT_T);
	keyNew[KEY_MESSAGE] = CheckHitKey(KEY_INPUT_M);
	keyNew[KEY_UP] = CheckHitKey(KEY_INPUT_UP);
	keyNew[KEY_DOWN] = CheckHitKey(KEY_INPUT_DOWN);
	keyNew[KEY_W] = CheckHitKey(KEY_INPUT_W);
	keyNew[KEY_A] = CheckHitKey(KEY_INPUT_A);
	keyNew[KEY_S] = CheckHitKey(KEY_INPUT_S);
	keyNew[KEY_D] = CheckHitKey(KEY_INPUT_D);

	// �B�g���K�[�̏�Ԃ��`�F�b�N���i�[�FkeyTrgDown�AkeyTrgUp

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

