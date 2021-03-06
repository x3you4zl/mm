#include "z_en_kusa2.h"

#define FLAGS 0x00800010

#define THIS ((EnKusa2*)thisx)

void EnKusa2_Init(Actor* thisx, GlobalContext* globalCtx);
void EnKusa2_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnKusa2_Update(Actor* thisx, GlobalContext* globalCtx);
void EnKusa2_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Kusa2_InitVars = {
    ACTOR_EN_KUSA2,
    ACTORTYPE_PROP,
    FLAGS,
    GAMEPLAY_FIELD_KEEP,
    sizeof(EnKusa2),
    (ActorFunc)EnKusa2_Init,
    (ActorFunc)EnKusa2_Destroy,
    (ActorFunc)EnKusa2_Update,
    (ActorFunc)EnKusa2_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5B160.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5B334.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5B3BC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5B490.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5B508.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5B954.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5BA58.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5BAFC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5BB40.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5BD14.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5BD94.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5BDB0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5BF38.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5BF60.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5BF84.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5BFD8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5C074.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5C0B8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5C104.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5C2FC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5C410.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5C70C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5C718.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5C7F0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5C918.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5CAD4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5CAF4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5CB74.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5CCD4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5CD0C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5CF44.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D178.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/EnKusa2_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/EnKusa2_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D5E0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D5F4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D618.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D62C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D6B0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D6C4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D754.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D794.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D7A4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D7C4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D964.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5D9C8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5DC70.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5DC98.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5DE18.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5DEB4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5E1D8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5E210.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5E418.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5E4BC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5E604.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/EnKusa2_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5E6F0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5E80C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/EnKusa2_Draw.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5E9B4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Kusa2_0x80A5B160/func_80A5EA48.asm")
