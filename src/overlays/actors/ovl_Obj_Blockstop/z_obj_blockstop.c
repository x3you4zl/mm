#include "z_obj_blockstop.h"

#define FLAGS 0x00000010

#define THIS ((ObjBlockstop*)thisx)

void ObjBlockstop_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjBlockstop_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Blockstop_InitVars = {
    ACTOR_OBJ_BLOCKSTOP,
    ACTORTYPE_PROP,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(ObjBlockstop),
    (ActorFunc)ObjBlockstop_Init,
    (ActorFunc)func_800BDFB0,
    (ActorFunc)ObjBlockstop_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Blockstop_0x809466A0/ObjBlockstop_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Blockstop_0x809466A0/func_809466F0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Blockstop_0x809466A0/func_809467E8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Blockstop_0x809466A0/ObjBlockstop_Update.asm")
