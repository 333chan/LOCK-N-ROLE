#include "DxLib.h"
#include"KeyCheck.h"
#include "Sound.h"


void Sound::Init(void)
{
	StopSoundFile();
}

void Sound::Updata(void)
{
}

void Sound::Draw(void)
{

}



void Sound::TitleBGM(void)
{

	PlaySoundFile("sound/titleBGM.mp3", DX_PLAYTYPE_LOOP);

}

void Sound::GameBGM(void)
{

	PlaySoundFile("sound/gameBGM.mp3", DX_PLAYTYPE_LOOP);
}

void Sound::EDBGM(void)
{

	PlaySoundFile("sound/edBGM.mp3", DX_PLAYTYPE_LOOP);
}

void Sound::DiceSE(void)
{
	PlaySoundFile("sound/dice.mp3", DX_PLAYTYPE_NORMAL);
}

void Sound::bottanSE(void)
{
	PlaySoundFile("sound/bottan.mp3", DX_PLAYTYPE_NORMAL);
}

void Sound::Release(void)
{
	StopSoundFile();

	StopSoundMem(gamebgm);
	StopSoundMem(edbgm);

	DeleteSoundMem(gamebgm);
	DeleteSoundMem(edbgm);
}
