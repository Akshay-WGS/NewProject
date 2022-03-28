/*
 * GasOfferVisitor.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#include "OfferVisitor.h"
#include "GasOfferVisitor.h"



void GasOfferVisitor::visitBronzeCreditCard(Bronze *bronzeCreditCard)
{
	cout << "Computing gas offer using Bronze credit card" << endl;
}

void GasOfferVisitor::visitSilverCreditCard(Silver *silverCreditCard)
{
	cout << "Computing gas offer using Silver credit card" << endl;
}

void GasOfferVisitor::visitGoldCreditCard(Gold *goldCreditCard)
{
	cout << "Computing gas offer using Gold credit card" << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////

void FoodOfferVisitor::visitBronzeCreditCard(Bronze *bronzeCreditCard)
{
	cout << "Computing Food offer using Bronze credit card" << endl;
}

void FoodOfferVisitor::visitSilverCreditCard(Silver *silverCreditCard)
{
	cout << "Computing Food offer using Silver credit card" << endl;
}

void FoodOfferVisitor::visitGoldCreditCard(Gold *goldCreditCard)
{
	cout << "Computing Food offer using Gold credit card" << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////

void FlightTicketOfferVisitor::visitBronzeCreditCard(Bronze *bronzeCreditCard)
{
	cout << "Computing Flight Ticket offer using Bronze credit card" << endl;
}

void FlightTicketOfferVisitor::visitSilverCreditCard(Silver *silverCreditCard)
{
	cout << "Computing Flight Ticket offer using Silver credit card" << endl;
}

void FlightTicketOfferVisitor::visitGoldCreditCard(Gold *goldCreditCard)
{
	cout << "Computing Flight Ticket offer using Gold credit card" << endl;
}


