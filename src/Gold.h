/*
 * Gold.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef GOLD_H_
#define GOLD_H_

#include "CreditCard.h"

class Gold:public CreditCard
{
public:
	void getName();
	void accept(OfferVisitor *v);
};


#endif /* GOLD_H_ */
