﻿#ifndef __GAME_ACTION_H__
#define __GAME_ACTION_H__
enum RoleID {
	ROLE_KUNI,
	ROLE_RIKI,
	ROLE_MIKE,
	ROLE_BEN,
	ROLE_TORAJI
};

#define GLOBAL_Y_WIDTH	12

int ActionRes_Kuni_GetActionTotalNum(void);
const ActionInfo *ActionRes_Kuni_GetActionSet(void);

int ActionRes_Riki_GetActionTotalNum(void);
const ActionInfo *ActionRes_Riki_GetActionSet(void);

int ActionRes_Mike_GetActionTotalNum(void);
const ActionInfo *ActionRes_Mike_GetActionSet(void);

int ActionRes_Toraji_GetActionTotalNum(void);
const ActionInfo *ActionRes_Toraji_GetActionSet(void);

int ActionRes_Ben_GetActionTotalNum(void);
const ActionInfo *ActionRes_Ben_GetActionSet(void);

/** 载入指定角色的动作动画 */
ActionData* ActionRes_Load( int id, int action_type );
#endif
