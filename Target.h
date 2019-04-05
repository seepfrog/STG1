#pragma once

namespace STG {
	class Target {
	public:
		Target() {};
		void drawTarget();
		void getKey(int key);
		void setPositionTarget(double xPos, double yPos);
	private:
		double targetXPosition = 0.0;
		double targetYPosition = 0.0;
		double hitPoint = 10.0;
	};
}
