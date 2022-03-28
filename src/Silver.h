/*
 * Silver.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef SILVER_H_
#define SILVER_H_

#include "CreditCard.h"

class Silver:public CreditCard
{
public:
	void getName();
	void accept(OfferVisitor *v);
};




#endif /* SILVER_H_ */
