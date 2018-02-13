/*
 * SiegeChauffant.h
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */

#ifndef OPTION_SIEGECHAUFFANT_H_
#define OPTION_SIEGECHAUFFANT_H_

class SiegeChauffant {
private:
	double const prix  = 562.9;
public:
	SiegeChauffant();
	virtual ~SiegeChauffant();

	const double getPrix() const;
};

#endif /* OPTION_SIEGECHAUFFANT_H_ */
