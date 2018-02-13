/*
 * VitreElectrique.h
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */

#ifndef OPTION_VITREELECTRIQUE_H_
#define OPTION_VITREELECTRIQUE_H_

class VitreElectrique {
private:
	double const prix = 212.35;
public:
	VitreElectrique();
	virtual ~VitreElectrique();

	const double getPrix() const;
};

#endif /* OPTION_VITREELECTRIQUE_H_ */
