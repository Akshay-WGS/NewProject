/*
 * Bronze.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef BRONZE_H_
#define BRONZE_H_

#include "CreditCard.h"
#include "OfferVisitor.h"

class Bronze:public CreditCard
{
public:
	void getName();
	void accept(OfferVisitor *v);
};


#endif /* BRONZE_H_ */
