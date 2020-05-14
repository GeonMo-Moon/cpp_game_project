#pragma once

struct boss_healthy
{
	int hp;
	int mp;
	int str;
	int dex;

}boss_healthy;

struct select_char
{
	int hp;
	int mp;
	int str;
	int dex;
	int luk;
	struct select_skill *skill;

}select_char;

struct select_skill
{


}select_skill;

enum select_boss
{
	fisrt_boss = 0,
	second_boss,
	third_boss,
	end_boss

}select_boss;