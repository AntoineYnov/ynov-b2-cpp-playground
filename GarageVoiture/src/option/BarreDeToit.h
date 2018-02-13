/*
 * BarreDeToit.h
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */

#ifndef OPTION_BARREDETOIT_H_
#define OPTION_BARREDETOIT_H_

class BarreDeToit {
private:
	double prix = 29.9;
public:
	BarreDeToit();
	virtual ~BarreDeToit();

	double getPrix() const;
};

#endif /* OPTION_BARREDETOIT_H_ */
