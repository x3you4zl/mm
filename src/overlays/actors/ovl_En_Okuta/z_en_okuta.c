#include "z_en_okuta.h"

#define FLAGS 0x00000005

#define THIS ((EnOkuta*)thisx)

void EnOkuta_Init(Actor* thisx, GlobalContext* globalCtx);
void EnOkuta_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnOkuta_Update(Actor* thisx, GlobalContext* globalCtx);
void EnOkuta_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Okuta_InitVars = {
    ACTOR_EN_OKUTA,
    ACTORTYPE_ENEMY,
    FLAGS,
    OBJECT_OKUTA,
    sizeof(EnOkuta),
    (ActorFunc)EnOkuta_Init,
    (ActorFunc)EnOkuta_Destroy,
    (ActorFunc)EnOkuta_Update,
    (ActorFunc)EnOkuta_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/EnOkuta_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/EnOkuta_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E084.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E0F0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E168.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E214.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E27C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E2C0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E378.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E3B8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E4FC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E52C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E5E8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E658.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E7A8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E7E8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E8E8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086E948.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086EAE0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086EC00.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086EE8C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086EF14.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086EF90.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086EFE8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086F2FC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086F434.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086F4B0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086F4F4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086F57C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086F694.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086F8FC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_8086FCA4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/EnOkuta_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_808700C0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_80870254.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_808704DC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/func_808705C8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Okuta_0x8086DE20/EnOkuta_Draw.asm")
