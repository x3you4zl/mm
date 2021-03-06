#include "z_en_ishi.h"

#define FLAGS 0x00800010

#define THIS ((EnIshi*)thisx)

void EnIshi_Init(Actor* thisx, GlobalContext* globalCtx);
void EnIshi_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnIshi_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Ishi_InitVars = {
    ACTOR_EN_ISHI,
    ACTORTYPE_PROP,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnIshi),
    (ActorFunc)EnIshi_Init,
    (ActorFunc)EnIshi_Destroy,
    (ActorFunc)EnIshi_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095D6E0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095D758.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095D804.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095DABC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095DDA8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095DE9C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095DF90.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095DFF0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095E14C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095E180.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095E204.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095E2B0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/EnIshi_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/EnIshi_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095E5AC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095E5C0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095E64C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095E660.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095E934.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095E95C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095EA70.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095EBDC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095F060.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095F0A4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095F180.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095F194.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/EnIshi_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095F210.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095F36C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095F61C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ishi_0x8095D6E0/func_8095F654.asm")
