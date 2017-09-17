#ifndef __ELEGOO_DRIVER_BASE_H__
#define __ELEGOO_DRIVER_BASE_H__

class ElegooDriverBase
{
public:
	virtual ~ElegooDriverBase()
	{
	}

	virtual int processCommand(ElegooCommand command) = 0;
};

#endif