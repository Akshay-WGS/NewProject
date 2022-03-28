/*
 * OfferVisitor.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef OFFERVISITOR_H_
#define OFFERVISITOR_H_

#include "Bronze.h"
class Bronze;
class Silver;
class Gold;
#include "CreditCard.h"

class OfferVisitor
{
public:
	virtual void visitBronzeCreditCard(Bronze *bronzeCreditCard) = 0;
	virtual void visitSilverCreditCard(Silver *silverCreditCard) = 0;
	virtual void visitGoldCreditCard(Gold *goldCreditCard) = 0;
	//virtual ~OfferVisitor() = 0;
};




#endif /* OFFERVISITOR_H_ */
