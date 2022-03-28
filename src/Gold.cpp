/*
 * Gold.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#include "Gold.h"
#include "OfferVisitor.h"
#include "GasOfferVisitor.h"

void Gold::getName()
{
	cout << "Bronze credit card" << endl;
}

void Gold::accept(OfferVisitor *v)
{
	v->visitGoldCreditCard(this);
}



