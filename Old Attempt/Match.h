#ifndef MATCH_H
#define MATCH_H

#include <iostream>
#include <string>

class Match
{
protected:
	int match_ID;
	int BB_ID;
	std::string BB;
	std::string round;
	std::string player_1;
	std::string player_2;
	std::string score;
	std::string winner;

public:
	Match(int m_ID, int BBID, std::string beatdown, std::string rnd, std::string p_1, std::string p_2, std::string scre, std::string wnr);
	int get_match_ID();
	int get_BB_ID();
	std::string get_round();
	std::string get_player_1();
	std::string get_player_2();
	std::string get_score();
	std::string get_winner();
};