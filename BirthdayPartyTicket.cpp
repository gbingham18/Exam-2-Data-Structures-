#include "BirthdayPartyTicket.h"
#include "BirthdayParty.h"

/**
* Implements the leave method
*/
void BirthdayPartyTicket::leave() {
	// FIXME 4: Implement leave for birthday parties
	BirthdayParty * actual_party = dynamic_cast<BirthdayParty *>(the_party);
	actual_party->remove(me);
}