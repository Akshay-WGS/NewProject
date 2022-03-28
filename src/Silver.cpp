/*
 * Silver.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#include "Silver.h"
#include "OfferVisitor.h"
#include "GasOfferVisitor.h"

void Silver::getName()
{
	cout << "Bronze credit card" << endl;
}

void Silver::accept(OfferVisitor *v)
{
	v->visitSilverCreditCard(this);
}


