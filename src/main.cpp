/*
 * main.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#include "Bronze.h"
#include "CreditCard.h"
#include "OfferVisitor.h"
#include "GasOfferVisitor.h"

int main()
{
	CreditCard *cc = new Bronze();
	CreditCard *crc = new Silver();
	CreditCard *crcd = new Gold();

	OfferVisitor *vGas = new GasOfferVisitor();
	OfferVisitor *vFood = new FoodOfferVisitor();
	OfferVisitor *vFlight = new FlightTicketOfferVisitor();

	cc->accept(vGas);
	crc->accept(vFood);
	crcd->accept(vFlight);


	return 0;
}


