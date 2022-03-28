/*
 * CreditCard.h
 *
 *  Created on: 28-Mar-2022
 *      Author: Admin
 */

#ifndef CREDITCARD_H_
#define CREDITCARD_H_

//#include "OfferVisitor.h"
class OfferVisitor;
#include <iostream>
using namespace std;

class CreditCard
{
private:
	string name;

public:
	virtual void getName() = 0;
	virtual void accept(OfferVisitor *v) = 0;
	virtual ~CreditCard() {}
};




#endif /* CREDITCARD_H_ */
