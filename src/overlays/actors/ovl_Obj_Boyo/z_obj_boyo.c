#include "z_obj_boyo.h"

#define FLAGS 0x00000010

#define THIS ((ObjBoyo*)thisx)

void ObjBoyo_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjBoyo_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjBoyo_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjBoyo_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Boyo_InitVars = {
    ACTOR_OBJ_BOYO,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_BOYO,
    sizeof(ObjBoyo),
    (ActorFunc)ObjBoyo_Init,
    (ActorFunc)ObjBoyo_Destroy,
    (ActorFunc)ObjBoyo_Update,
    (ActorFunc)ObjBoyo_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Boyo_0x809A5D10/ObjBoyo_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Boyo_0x809A5D10/ObjBoyo_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Boyo_0x809A5D10/func_809A5DC0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Boyo_0x809A5D10/func_809A5DE0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Boyo_0x809A5D10/func_809A5E14.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Boyo_0x809A5D10/func_809A5E24.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Boyo_0x809A5D10/ObjBoyo_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Boyo_0x809A5D10/ObjBoyo_Draw.asm")
