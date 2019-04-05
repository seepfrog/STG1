#pragma once
#include <GL\glew.h>

namespace STG {

	class Fighter {
	public:
		Fighter() {};
		void drawFighter();
		char getKey(int key);
		void movePosition();
		void setPositionFighter(double xPos, double yPos);
		void showStatus();
	private:
		double fighterXPosition = 400.0;
		double fighterYPosition = 400.0;
		double hitBoxSize = 10.0;
		double hitPoint = 100;
		char moveDirection = ' ';
	};

}


