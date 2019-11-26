//----- (0067AFF0) --------------------------------------------------------
int **__thiscall Moho::Entity::SetCurrentLayer(unsigned int a1@<edx>, int *a2@<esi>)
{
  _DWORD *result; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // [esp+4h] [ebp-8h]
  const char *v6; // [esp+8h] [ebp-4h]

  result = (_DWORD *)a2[70];
  a2[70] = a1;
  if ( (_DWORD *)a1 != result )
  {
    if ( (unsigned int)result > 0x20 )
      v3 = byte_E00779;
    else
      v3 = sub_50AD80((int)result);
    v5 = v3;
    if ( a1 > 0x20 )
      v4 = byte_E00779;
    else
      v4 = sub_50AD80(a1);
    v6 = v4;
    result = sub_67F450(a2, "OnLayerChange", (void **)&v6, (void **)&v5);
  }
  return result;
}

//----- () --------------------------------------------------------
bool __thiscall Moho::Entity::IsDead(Moho::Entity *this)
{
  return *((_BYTE *)this + 99h);
}

//----- (0067AE00) --------------------------------------------------------
void __thiscall Moho::Entity::SetCollisionShapeNone(int a1@<eax>)
{
  int v1; // esi
  int v2; // ST00_4
  int v3; // esi

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 376);
  *(_DWORD *)(a1 + 376) = 0;
  sub_957A60(v2);
  v3 = v1 + 76;
  if ( *(_WORD *)v3 || *(_WORD *)(v3 + 2) || *(_WORD *)(v3 + 4) || *(_WORD *)(v3 + 6) )
  {
    sub_4FD490((unsigned __int16 *)v3);
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    sub_4FD420((unsigned __int16 *)v3);
  }
}

//----- (0067AE70) --------------------------------------------------------
void __thiscall Moho::Entity::RevertCollisionShape(int *a1@<eax>)
{
  int *v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  float v5; // xmm0_4
  int v6; // xmm3_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  int v11; // ST18_4
  int v12; // ST14_4
  int v13; // xmm0_4
  float *v14; // eax
  int v15; // [esp+1Ch] [ebp-74h]
  int v16; // [esp+20h] [ebp-70h]
  int v17; // [esp+24h] [ebp-6Ch]
  int v18; // [esp+28h] [ebp-68h]
  int v19; // [esp+2Ch] [ebp-64h]
  int v20; // [esp+30h] [ebp-60h]
  int v21; // [esp+34h] [ebp-5Ch]
  int v22; // [esp+38h] [ebp-58h]
  int v23; // [esp+3Ch] [ebp-54h]
  int v24; // [esp+40h] [ebp-50h]
  float v25; // [esp+44h] [ebp-4Ch]
  int v26; // [esp+48h] [ebp-48h]
  float v27; // [esp+4Ch] [ebp-44h]
  char v28; // [esp+50h] [ebp-40h]

  v1 = a1;
  v2 = a1[27];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 168);
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          v5 = *(float *)(v2 + 172) * 0.5;
          v6 = *(_DWORD *)(v2 + 208);
          v7 = *(float *)(v2 + 204) + v5;
          v24 = *(_DWORD *)(v2 + 200);
          v25 = v7;
          v26 = v6;
          v27 = v5;
          sub_67AD30((float *)&v24, v1);
        }
      }
      else
      {
        v8 = *(float *)(v2 + 204);
        v15 = 0;
        v16 = 0;
        v18 = 0;
        v20 = 0;
        v22 = 0;
        v23 = 0;
        v24 = *(_DWORD *)(v2 + 200);
        v9 = *(float *)(v2 + 176);
        v17 = 1065353216;
        v19 = 1065353216;
        v21 = 1065353216;
        v10 = v8 + (float)(v9 * 0.5);
        v26 = *(_DWORD *)(v2 + 208);
        *(float *)&v11 = *(float *)(v2 + 180) * 0.5;
        *(float *)&v12 = v9 * 0.5;
        *(float *)&v13 = *(float *)(v2 + 172) * 0.5;
        v25 = v10;
        v14 = sub_474170((float *)&v28, (float *)&v24, (float *)&v21, (float *)&v18, (float *)&v15, v13, v12, v11);
        sub_67AC40(v14, v1);
      }
    }
    else
    {
      sub_67AE00((int)v1);
    }
  }
  else
  {
    sub_67AE00((int)v1);
  }
}