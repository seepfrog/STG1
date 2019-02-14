#pragma once

namespace STG {
	class Target {
	public:
		Target() {};
		void drawTarget();
		void getKey(int key);
		void setPositionTarget(double xPos, double yPos);
	private:
		double TargetXPosition = 0.0;
		double TargetYPosition = 0.0;
	};
}
