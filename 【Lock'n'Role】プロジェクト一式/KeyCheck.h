//#pragma once

//��`
//---------------------------
enum KEY_LIST		//�Q�[�����ŗ��p����L�[���
{
	// �V�X�e�� �L�[���
	KEY_SYS_START			//0

	,KEY_ADVANCE
	,KEY_UP
	,KEY_DOWN
	
	//�}�E�X�p�L�[
	,KEY_MOUSE_LEFT
	, KEY_MOUSE_RIGHT

	//�f�o�b�O�p�L�[
	, KEY_TEXT
	, KEY_MESSAGE
	, KEY_W
	, KEY_A
	, KEY_S
	, KEY_D

	//�L�[���X�g��
	, KEY_LIST_MAX			//13
};

//�ϐ��̌��J
//---------------------------
extern bool keyNew[KEY_LIST_MAX];		// ���t���[���̃L�[�̏��
extern bool keyTrgDown[KEY_LIST_MAX];	// KeyDown�̃g���K�[���
extern bool keyTrgUp[KEY_LIST_MAX];		// KeyUp�̃g���K�[���

//�v���g�^�C�v�錾
//---------------------------
void KeyInit(void);				// �L�[���̏�����
void CheckKeyList(void);		// �L�[���̍쐬
