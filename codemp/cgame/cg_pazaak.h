// cg_pazaak.h
#ifndef CG_PAZAAK_H
#define CG_PAZAAK_H

// #include "cg_local.h" // This line is already present in the original file, so we don't need to change it.

// server command handler
void CG_Pazaak_ServerCmd_f(void);

// ownerdraw renderer
void CG_Pazaak_OwnerDraw(int ownerDraw, float x, float y, float w, float h, vec4_t color, qhandle_t shader, float scale);

// initialize client state
void CG_Pazaak_Init(void);

#endif // CG_PAZAAK_H
