//---------------------------------------------------------------------------


#pragma hdrstop

#include "PlayerUnit.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

CPlayer::CPlayer()
{
        Name = "";
        Score = 0;
        Advantage = 0;
        Penalty = 0;
}

void CPlayer::SetScore(int s)
{
        Score = s;
}

int CPlayer::GetScore()
{
        return Score;
}

void CPlayer::SetAdvantage(int a)
{
        Advantage = a;
}

int CPlayer::GetAdvantage()
{
        return Advantage;
}

void CPlayer::SetPenalty(int p)
{
        Penalty = p;
}

int CPlayer::GetPenalty()
{
        return Penalty;
}

void CPlayer::PlusScore(int s)
{
        Score += s;
}

void CPlayer::PlusAdvantage(int a)
{
        Advantage += a;
}

void CPlayer::PlusPenalty(int p)
{
        Penalty += p;
}

void CPlayer::MinusScore(int s)
{
        ((Score - s) < 0) ? Score = 0 : Score -= s;
}

void CPlayer::MinusAdvantage(int a)
{
        ((Advantage - a) < 0) ? Advantage = 0 : Advantage -= a;
}

void CPlayer::MinusPenalty(int p)
{
        ((Penalty - p) < 0) ? Penalty = 0 : Penalty -= p;
}







