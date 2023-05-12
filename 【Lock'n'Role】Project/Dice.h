#pragma once


class Dice
{
public:
	void Init(void);
	void Updata(void);
	void Draw(void);
	void Release(void);

	//É_ÉCÉXèàóù
	void Dice100(void);		// ê¨î€îªíË
	void Dice1(void);		// 1d1
	void Dice2(void);		// 1d2
	void Dice3(void);		// 1d3
	void Dice4(void);		// 1d4
	void Dice5(void);		// 1d5
	void Dice6(void);		// 1d6
	int mdice;
	int mdice4;
	int mdice1;
	int mdice3;
	int mdice5;
	int flg;

private:



};

