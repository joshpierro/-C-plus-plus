/*
 * C.h
 *
 *  Created on: Apr 11, 2017
 *      Author: pierrjo
 */

#ifndef CAR_H_
#define CAR_H_

class Car {
public:
	Car();
	virtual ~Car();
	void wearAndTear();
	bool drive();
	void fix();
private:
	bool in_working_condition_;
};

#endif /* Car_H_ */
