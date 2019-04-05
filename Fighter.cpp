#include "Fighter.h"
#include "stdio.h"
#include "iostream"
#include "ofGraphics.h"

void STG::Fighter::drawFighter()
{
	ofDrawCircle(fighterXPosition, fighterYPosition, 0.0,hitBoxSize);
	/*
	//std::cout <<"draw Figter" << std::endl;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
		glColor4f(1.0, 0.5, 0.6, 0.0);
		glVertex2f(0.0,0.5);
		glVertex2f(0.5, -0.750);
		glVertex2f(-0.50, -0.750);
	glEnd();
	glFlush();
	*/
}

char STG::Fighter::getKey(int key)
{

	switch (key)
	{
	case 'w': std::cout << "up" << std::endl;
		moveDirection = 'w';
		break;
	case 's': std::cout << "down" << std::endl;
		moveDirection = 's';
		break;
	case 'd': std::cout << "right" << std::endl;
		moveDirection = 'd';
		break;
	case 'a': std::cout << "left" << std::endl;
		moveDirection = 'a';
		break;
	case 'q': std::cout << "exit" << std::endl;
		break;
	default:
		break;
	}
	return moveDirection;
}

void STG::Fighter::movePosition()
{
	switch (moveDirection)
	{
	case 'w' :
		fighterYPosition += -1;
		break;
	case 's':
		fighterYPosition += 1;
		break;
	case 'd':
		fighterXPosition += 1;
		break;
	case 'a' :
		fighterXPosition += -1;
		break;
	default:
		break;
	}
	moveDirection = ' ';
}

void STG::Fighter::setPositionFighter(double xPos, double yPos)
{
	fighterXPosition = xPos;
	fighterYPosition = yPos;
}

void STG::Fighter::showStatus()
{
	std::cout << "Fighter x position : " << fighterXPosition << std::endl;
	std::cout << "Fighter y position : " << fighterYPosition << std::endl;
	std::cout << "Hit Point :  : " << hitPoint<< std::endl;
}
