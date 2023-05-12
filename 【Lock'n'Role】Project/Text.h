#pragma once
#include <string>
#include "Story.h"

class Text : public Story
{
public:
	void Init()override;
	void Update()override;
	void Draw(int textNumber);
	void Release()override;

	std::string Storage(int textNumber);

};

