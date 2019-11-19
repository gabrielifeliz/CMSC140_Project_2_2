/*
* Class: CMSC140
* Instructor: Madhvi Shah
* Project 2 – Program 2
* Description: Program to calculate the weight of the crystal needed to manufacture a pyramid souvenir of a given specification.
* Due: 09/25/2017
* Compiler: Microsoft Visual Studio 2015
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
* Student Name: Gabriel Feliz
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const double MOLD_VOLUME = 27.7;
	double lengthPyramid, widthPyramid, heightPyramid, areaPyramidBase, volumePyramid, weightInPoundsCrystal;

	cout << "Enter the length of the pyramid in inches: ";
	cin >> lengthPyramid;

	cout << "Enter the width of the pyramid in inches: ";
	cin >> widthPyramid;

	areaPyramidBase = lengthPyramid * widthPyramid;

	cout << "Enter the height of the pyramid in inches ";
	cin >> heightPyramid;

	volumePyramid = (areaPyramidBase * heightPyramid) / 3;

	weightInPoundsCrystal = volumePyramid / MOLD_VOLUME;

	cout << " " << endl;

	cout << "The rectangular-based pyramid with length " << fixed << setprecision(1) << lengthPyramid << " inches," << endl;
	cout << "with width " << fixed << setprecision(1) << widthPyramid << " inches, and with a height of " << fixed << setprecision(1) << heightPyramid << " inches" << endl;
	cout << "will require " << fixed << setprecision(1) << weightInPoundsCrystal << " pounds of crystal material to mold it." << endl;

	cout << " " << endl;

	return 0;
}