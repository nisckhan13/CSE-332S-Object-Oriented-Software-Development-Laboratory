// Card.h
// Author: Jennie Liu   jiayiliu@wustl.edu     Zhihao Rong		zrong@wustl.edu
// Definition of the Card struct

#pragma once
#ifndef CARD_H
#define CARD_H

struct Card
{
	enum suit { clubs, diamonds, hearts, spades };
	enum rank { two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace };
	suit s;
	rank r;

	// order the cards by rank and then suit
	bool operator< (const Card & anotherCard) const;

	// determine if two cards are the same
	bool operator== (const Card & anotherCard) const;
};
#endif // !CARD_H
