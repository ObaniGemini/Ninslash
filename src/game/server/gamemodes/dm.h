

#ifndef GAME_SERVER_GAMEMODES_DM_H
#define GAME_SERVER_GAMEMODES_DM_H
#include <game/server/gamecontroller.h>

class CGameControllerDM : public IGameController
{
public:
	CGameControllerDM(class CGameContext *pGameServer);
	
	void OnCharacterSpawn(class CCharacter *pChr, bool RequestAI = false);
	virtual void Tick();
};
#endif
