#include "z_en_snowwd.h"

#define FLAGS 0x00000000

#define THIS ((EnSnowwd*)thisx)

void EnSnowwd_Init(Actor* thisx, GlobalContext* globalCtx);
void EnSnowwd_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnSnowwd_Update(Actor* thisx, GlobalContext* globalCtx);
void EnSnowwd_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Snowwd_InitVars = {
    ACTOR_EN_SNOWWD,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_SNOWWD,
    sizeof(EnSnowwd),
    (ActorFunc)EnSnowwd_Init,
    (ActorFunc)EnSnowwd_Destroy,
    (ActorFunc)EnSnowwd_Update,
    (ActorFunc)EnSnowwd_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Snowwd_0x80AF7640/EnSnowwd_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Snowwd_0x80AF7640/EnSnowwd_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Snowwd_0x80AF7640/func_80AF76F0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Snowwd_0x80AF7640/EnSnowwd_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Snowwd_0x80AF7640/EnSnowwd_Draw.asm")
