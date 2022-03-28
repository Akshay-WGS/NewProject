/*
 * GasOfferVisitor.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef GASOFFERVISITOR_H_
#define GASOFFERVISITOR_H_

#include "Bronze.h"
#include "Silver.h"
#include "Gold.h"
class OfferVisitor;
#include "OfferVisitor.h"

class GasOfferVisitor : public OfferVisitor
{
public:
	void visitBronzeCreditCard(Bronze *bronzeCreditCard);
	void visitSilverCreditCard(Silver *SilverCreditCard);
	void visitGoldCreditCard(Gold *GoldCreditCard);
};


class FoodOfferVisitor : public OfferVisitor
{
public:
	void visitBronzeCreditCard(Bronze *bronzeCreditCard);
	void visitSilverCreditCard(Silver *silverCreditCard);
	void visitGoldCreditCard(Gold *goldCreditCard);
};

class FlightTicketOfferVisitor : public OfferVisitor
{
public:
	void visitBronzeCreditCard(Bronze *bronzeCreditCard);
	void visitSilverCreditCard(Silver *silverCreditCard);
	void visitGoldCreditCard(Gold *goldCreditCard);
};



#endif /* GASOFFERVISITOR_H_ */
