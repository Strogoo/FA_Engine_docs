//Moho::UserEntity//

//----- (008B97C0) ------------
bool __thiscall UserEntity::IsInCategory(int a1@<eax>, int a2@<ecx>) // category, UserEntity
{
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edx
  bool result; // al

  v2 = a2; //a2 = UserEntity
  v3 = *(_DWORD *)(*(_DWORD *)(a2 + 12) + 24);
  if ( !v3 || !*(_DWORD *)(v2 + 72) )
    return 0;
  if ( *(_DWORD *)(a1 + 24) < 0x10u )
    v4 = a1 + 4;
  else
    v4 = *(_DWORD *)(a1 + 4);
  v5 = (_DWORD *)(*(int (__stdcall **)(int))(*(_DWORD *)v3 + 88))(v4);
  v6 = *(_DWORD *)(*(_DWORD *)(v2 + 72) + 92);
  v7 = (v6 >> 5) - v5[2];
  if ( v7 >= (v5[5] - v5[4]) >> 2 )
    result = 0;
  else
    result = ((*(_DWORD *)(v5[4] + 4 * v7) >> (v6 & 0x1F)) & 1u) > 0;
  return result;
}

//----- (008B85C0) ------------
char __thiscall UserEntity::IsBeingBuilt(_BYTE *this)
{
  return this + 70h;
}

//----- (008B8540) -------------
bool __thiscall UserEntity::IsSelectable(void *this)
{
  int v1; // esi UserEntity
  bool v2; // bl
  int v4; // [esp+8h] [ebp-28h]
  int v5; // [esp+Ch] [ebp-24h]
  int v6; // [esp+1Ch] [ebp-14h]
  unsigned int v7; // [esp+20h] [ebp-10h]
  int v8; // [esp+2Ch] [ebp-4h]

  v1 = (int)this;
  v7 = 15;
  v6 = 0;
  LOBYTE(v5) = 0;
  sub_4059E0((int)&v4, "SELECTABLE", 0xAu);
  v8 = 0;
  v2 = sub_8B97C0((int)&v4, v1);
  if ( v7 >= 0x10 )
    sub_957A60(v5);
  return v2;
}

