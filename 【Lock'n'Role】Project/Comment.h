#pragma once
#include <string>
#include "Story.h"

class Comment:public Story
{
public:
	void Init()override;
	void Update()override;
	void Draw(int textNo);
	void Release()override;

	std::string Storage2(int commetnNum);

};

