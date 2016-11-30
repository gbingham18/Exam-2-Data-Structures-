#ifndef _BIRTHDAY_PARTY_H_
#define _BIRTHDAY_PARTY_H_

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "Party.h"
#include "BirthdayPartyTicket.h"

// FIXME 2: Create BirthdayParty and BirthdayPartyTicket to host birthday parties!
// FIXME 3: Update PartyFactory::factory() to allow it to be the ONLY method for creating a BirthdayParty
/**
* BirthdayParty is derived from Party
*/
class BirthdayParty : public Party
{
private:
	std::list<std::string> room;
	BirthdayParty() {};
	friend class PartyFactory;
public:
	PartyTicket * add(std::string name) {
		room.push_front(name);
		std::list<std::string>::iterator it = room.begin();
		DinnerPartyTicket newTicket(this, it) : PartyTicket{}
		return newTicket;
	}

	void list()
	{
		for (std::list<std::string>::iterator it = room.begin(); it != room.end(); it++)
		{
			std::cout << &it << std::endl;
		}
	}

	void remove(std::list<std::string>::iterator it)
	{
		it = room.erase(it);
	}
};

#endif