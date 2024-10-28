#pragma once
#include "Mouse.h"
#include "Keyboard.h"

class Computer : public Mouse, Keyboard
{
public:
	Computer();

	void Use();

	~Computer();

};

