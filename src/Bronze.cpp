/*
 * Bronze.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */
#include "Bronze.h"
#include "Silver.h"
#include "Gold.h"
#include "OfferVisitor.h"
#include "GasOfferVisitor.h"

void Bronze::getName()
{
	cout << "Bronze credit card" << endl;
}

void Bronze::accept(OfferVisitor *v)
{
	v->visitBronzeCreditCard(this);
}

