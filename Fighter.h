#pragma once
#include <GL\glew.h>

namespace STG {

	class Fighter {
	public:
		void drawFighter();
		void getKey(int key);
		void setPositionFighter(double xPos, double yPos);
	private:
		double fighterXPosition = 0.0;
		double fighterYPosition = 0.0;
	};

}

