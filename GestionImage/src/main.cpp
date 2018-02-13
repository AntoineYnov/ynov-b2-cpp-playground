/*
 * main.cpp
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */
#include <fstream>
using namespace std;
int const  width = 255;
int const height = 255;
int main()
{
	ofstream img ("picture.ppm");
	img << "P3" << endl;
	img << width << " "<< height <<endl;
	img << "255" << endl;
	for(int y = 0; y < height;y++) {
		for( int x = 0; x < width;x++) {
			int r = x % 255;
			int g = y % 255;
			int b = y % 255;

			img << r << " " << g << " " << b << endl;
		}
	}
	img.open("picture.ppm");
	return 0;
}


