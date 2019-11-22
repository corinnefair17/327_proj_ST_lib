/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 18, 2019
 *      Author: corinne
 */

#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"

Smalltalk_Brit::Smalltalk_Brit(int iPerson) :
		Smalltalk(BRIT, iPerson) {

}

Smalltalk_Brit::~Smalltalk_Brit(void) {

}

void Smalltalk_Brit::populatePhrases(void) {
	Smalltalk::mySmallTalk.clear();
	Smalltalk::mySmallTalk.push_back(BRIT_1);
	Smalltalk::mySmallTalk.push_back(BRIT_2);
	Smalltalk::mySmallTalk.push_back(BRIT_3);
	Smalltalk::mySmallTalk.push_back(BRIT_4);
	Smalltalk::mySmallTalk.push_back(BRIT_5);
	Smalltalk::mySmallTalk.push_back(BRIT_6);
	Smalltalk::mySmallTalk.push_back(BRIT_7);
}
