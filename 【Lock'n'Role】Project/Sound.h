#pragma once
class Sound
{
public:
	void Init(void);
	void Updata(void);
	void Draw(void);
	void Release(void);

	void TitleBGM(void);
	void GameBGM(void);
	void EDBGM(void);
	void DiceSE(void);
	void bottanSE(void);

	int gamebgm;
	int edbgm;

private:



};

