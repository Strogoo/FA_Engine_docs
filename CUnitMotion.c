//----- (006C35C0) --------------
void __thiscall Moho::CUnitMotion::UpdateCurrentLayer(Moho::CUnitMotion *this)
{
  float *v1; // esi
  float *v2; // ecx
  int v3; // xmm0_4
  double v4; // st7
  int v5; // eax
  int (*v6)(void); // edx
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  float v11; // xmm0_4
  _DWORD *result; // eax
  int v13; // ebx
  float v14; // xmm1_4
  float v15; // xmm2_4
  float *v16; // eax
  float *v17; // eax
  float v18; // [esp+20h] [ebp-3Ch]
  int v19; // [esp+24h] [ebp-38h]
  int v20; // [esp+28h] [ebp-34h]
  int v21; // [esp+2Ch] [ebp-30h]
  int v22; // [esp+30h] [ebp-2Ch]
  float v23; // [esp+34h] [ebp-28h]
  float v24; // [esp+38h] [ebp-24h]
  float v25; // [esp+3Ch] [ebp-20h]
  char v26; // [esp+40h] [ebp-1Ch]

  v1 = a1;
  v2 = *(float **)a1;
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 164);
  v4 = *(float *)(*(_DWORD *)a1 + 180);
  v5 = **(_DWORD **)a1;
  v23 = v4;
  v6 = *(int (**)(void))(v5 + 28);
  v7 = *((_DWORD *)v2 + 72);
  v25 = v2[47];
  v19 = v3;
  v20 = *((_DWORD *)v2 + 42);
  v21 = *((_DWORD *)v2 + 43);
  v22 = *((_DWORD *)v2 + 44);
  v24 = v2[46];
  v8 = v6();
  v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 336) + 2252);
  v10 = v8 + 632;
  v18 = sub_44FB90((int *)*(_DWORD *)v9, v23, v25);
  if ( *(_BYTE *)(v9 + 5428) )
    v11 = *(float *)(v9 + 5432);
  else
    v11 = -10000.0;
  result = (_DWORD *)sub_678880(*(_DWORD *)v1 + 8);
  if ( *((_BYTE *)result + 2) & 1 )
    v11 = *(float *)(v10 + 116) + v11;
  if ( v18 <= v11 )
  {
    if ( v11 > v18 && v7 == 1 )
    {
      result = *(_DWORD **)(v10 + 24);
      if ( result == (_DWORD *)6 || result == (_DWORD *)1 )
      {
        result = sub_67AFF0(2u, (int *)(*(_DWORD *)v1 + 8));
      }
      else if ( result == (_DWORD *)7 || result == (_DWORD *)8 )
      {
        if ( *(float *)(v10 + 120) != 0.0 )
        {
          v1[71] = 1.0;
          sub_470B60(v1 + 72, (float *)&v19);
          v17 = sub_6C1CB0((float *)&v19, v1, (float *)&v26, 1.0);
          sub_470B60(v1 + 79, v17);
        }
        result = sub_67AFF0(8u, (int *)(*(_DWORD *)v1 + 8));
      }
    }
  }
  else if ( v7 == 2 )
  {
    v13 = *(_DWORD *)(v10 + 24);
    if ( v13 == 6 || v13 == 1 )
      result = sub_67AFF0(1u, (int *)(*(_DWORD *)v1 + 8));
  }
  else if ( v7 == 8 )
  {
    result = *(_DWORD **)(v10 + 24);
    if ( result == (_DWORD *)7 || result == (_DWORD *)8 || result == (_DWORD *)3 )
    {
      if ( *(float *)(v10 + 120) != 0.0 )
      {
        v1[71] = 1.0;
        sub_470B60(v1 + 72, (float *)&v19);
        v14 = v1[15];
        v15 = v1[16];
        v23 = (float)(v1[14] * 10.0) + v23;
        v24 = v24 + (float)(v14 * 10.0);
        v25 = (float)(v15 * 10.0) + v25;
        v16 = sub_6C1610((float *)&v19, v1, (float *)&v26);
        sub_470B60(v1 + 79, v16);
      }
      result = sub_67AFF0(1u, (int *)(*(_DWORD *)v1 + 8));
    }
  }
  return result;
}

//----- (006C1E20) --------------------------------------------------------
char __thiscall Moho::CUnitMotion::CalcMoveCommon(int *a1, int a2)
{
  int *v2; // ebx
  char result; // al
  int v4; // eax
  int v5; // ecx
  float v6; // eax
  int v7; // edi
  int v8; // ecx
  float *v9; // esi
  float *v10; // eax
  float v11; // ST10_4
  float v12; // ST0C_4
  long double v13; // st7
  int v14; // edi
  float *v15; // esi
  float v16; // ST10_4
  double v17; // st7
  int *v18; // eax
  float v19; // xmm1_4
  float v20; // xmm2_4
  int (__thiscall *v21)(int); // eax
  float v22; // xmm4_4
  float *v23; // eax
  float v24; // xmm1_4
  float v25; // xmm0_4
  void (__stdcall *v26)(_DWORD, _DWORD); // eax
  int v27; // esi
  int v28; // ecx
  float *v29; // edi
  float v30; // xmm0_4
  bool v31; // zf
  float *v32; // eax
  int v33; // ecx
  float *v34; // eax
  float v35; // xmm1_4
  float v36; // xmm2_4
  float *v37; // eax
  float *v38; // eax
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm5_4
  float *v44; // eax
  double v45; // st7
  float v46; // xmm1_4
  float v47; // xmm2_4
  int (*v48)(void); // edx
  float *v49; // eax
  float v50; // xmm1_4
  float v51; // xmm2_4
  int (*v52)(void); // edx
  float v53; // xmm0_4
  float *v54; // esi
  float *v55; // eax
  float v56; // xmm0_4
  float v57; // xmm1_4
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm1_4
  float *v61; // eax
  float *v62; // edi
  int v63; // ecx
  int v64; // ebx
  float v65; // xmm0_4
  float v66; // xmm1_4
  double v67; // st7
  float v68; // ST00_4
  int v69; // eax
  float v70; // xmm1_4
  float v71; // xmm0_4
  float v72; // xmm0_4
  float v73; // xmm1_4
  float v74; // xmm2_4
  double v75; // st7
  int v76; // eax
  char v77; // [esp+23h] [ebp-A1h]
  float v78; // [esp+24h] [ebp-A0h]
  float v79; // [esp+28h] [ebp-9Ch]
  float v80; // [esp+2Ch] [ebp-98h]
  float v81; // [esp+30h] [ebp-94h]
  float v82; // [esp+34h] [ebp-90h]
  float v83; // [esp+38h] [ebp-8Ch]
  float v84; // [esp+3Ch] [ebp-88h]
  int v85; // [esp+40h] [ebp-84h]
  int v86; // [esp+44h] [ebp-80h]
  int v87; // [esp+48h] [ebp-7Ch]
  float v88; // [esp+4Ch] [ebp-78h]
  float v89; // [esp+50h] [ebp-74h]
  float v90; // [esp+54h] [ebp-70h]
  float v91; // [esp+5Ch] [ebp-68h]
  float v92; // [esp+60h] [ebp-64h]
  float v93; // [esp+64h] [ebp-60h]
  float v94; // [esp+68h] [ebp-5Ch]
  float v95; // [esp+6Ch] [ebp-58h]
  float v96; // [esp+70h] [ebp-54h]
  float v97; // [esp+78h] [ebp-4Ch]
  int v98; // [esp+7Ch] [ebp-48h]
  float v99; // [esp+80h] [ebp-44h]
  char v100; // [esp+84h] [ebp-40h]
  float v101; // [esp+9Ch] [ebp-28h]
  float v102; // [esp+A0h] [ebp-24h]
  float v103; // [esp+A4h] [ebp-20h]
  float v104; // [esp+A8h] [ebp-1Ch]
  float v105; // [esp+ACh] [ebp-18h]
  float v106; // [esp+B0h] [ebp-14h]
  float v107; // [esp+B4h] [ebp-10h]

  v2 = a1;
  if ( (*(unsigned __int8 (**)(void))(*(_DWORD *)*a1 + 52))() )
    return 0;
  if ( *((float *)a1 + 71) != 0.0 )
  {
    sub_6C3070((float *)a2, (int)a1);
    return 0;
  }
  v86 = (*(int (**)(void))(*(_DWORD *)*a1 + 28))() + 632;
  v4 = *a1;
  v78 = *(float *)&dword_F3D21C;
  v87 = 0;
  v5 = *(_DWORD *)(v4 + 1348);
  v79 = *(float *)&dword_F3D220;
  v80 = *(float *)&dword_F3D224;
  if ( v5
    && (v6 = COERCE_FLOAT((*(int (__stdcall **)(int *))(*(_DWORD *)v5 + 92))(&v87)),
        v7 = LODWORD(v6),
        v88 = v6,
        v6 != 0.0)
    && sub_5E2A10((_DWORD *)LODWORD(v6))
    && v87 )
  {
    if ( *(float *)((*(int (**)(void))(*(_DWORD *)*a1 + 28))() + 1232) > 0.0 )
    {
      v8 = v7;
LABEL_21:
      v18 = (int *)sub_5E2A90(&v94, v8, 0);
      v2 = a1;
      v78 = *(float *)v18;
      v79 = *((float *)v18 + 1);
      v80 = *((float *)v18 + 2);
      goto LABEL_24;
    }
    if ( *(float *)(*(_DWORD *)(v87 + 72) + 72) >= 180.0 )
      goto LABEL_24;
    v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)*a1 + 20))(*a1);
    v10 = sub_5E2A90(&v94, v7, 0);
    v11 = v10[2] - v9[2];
    v12 = *v10 - *v9;
    v13 = sub_4E9DF0(v12, v11);
    v2 = a1;
    v81 = v13;
    v14 = *a1;
    v15 = (float *)(*a1 + 164);
    sub_565A30(v15);
    v16 = v81 - v13;
    v81 = sub_62FB50(v16);
    v17 = fabs(v81);
    if ( *((_BYTE *)a1 + 145) )
    {
      if ( *(float *)(*(_DWORD *)(v87 + 72) + 72) * 0.0087266462 > v17 )
        *((_BYTE *)a1 + 145) = 0;
    }
    else if ( v17 > *(float *)(*(_DWORD *)(v87 + 72) + 72) * 0.017453292 )
    {
      *((_BYTE *)a1 + 145) = 1;
    }
    if ( *((_BYTE *)a1 + 145) || *(_DWORD *)(v86 + 24) == 7 && a1[1] )
    {
      v8 = LODWORD(v88);
      goto LABEL_21;
    }
    v19 = v15[1];
    v20 = v15[2];
    v21 = *(int (__thiscall **)(int))(*(_DWORD *)v14 + 20);
    v22 = (float)(*v15 * v20) + (float)(v15[3] * v19);
    v83 = (float)((float)(v15[3] * v20) - (float)(*v15 * v19)) * 2.0;
    v82 = v22 * 2.0;
    v84 = 1.0 - (float)((float)((float)(v20 * v20) + (float)(v19 * v19)) * 2.0);
    v23 = (float *)v21(v14);
    v24 = v23[2] + v84;
    v25 = v23[1] + v83;
    v78 = (float)(v22 * 2.0) + *v23;
    v79 = v25;
    v80 = v24;
  }
  else
  {
    *((_BYTE *)a1 + 145) = 0;
  }
LABEL_24:
  if ( !sub_6B98C0((int)v2) )
  {
    v26 = *(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)(*v2 + 8) + 120);
    v88 = -0.0 - (float)(*(float *)(*v2 + 156) * 0.0099999998);
    v26(0, LODWORD(v88));
    if ( *(float *)(*v2 + 152) <= 0.0 )
      (*(void (__thiscall **)(int, _DWORD, char *, _DWORD))(*(_DWORD *)(*v2 + 8) + 124))(*v2 + 8, 0, byte_E00779, 0.0);
    return 0;
  }
  v27 = a2;
  v28 = *v2;
  v29 = (float *)(a2 + 16);
  v91 = *(float *)(a2 + 16);
  v92 = *(float *)(a2 + 20);
  v30 = *(float *)(a2 + 24);
  LODWORD(v81) = a2 + 16;
  v93 = v30;
  v31 = sub_62AA90(&v91, v28) == 0;
  v32 = (float *)v2[1];
  HIBYTE(v85) = v31;
  if ( !v32 || *((_BYTE *)v2 + 141) )
  {
    v77 = 0;
    if ( sub_4F0A50(&v78, &dword_F3D21C) )
    {
      if ( *(float *)((*(int (**)(void))(*(_DWORD *)*v2 + 28))() + 1232) > 0.0 )
      {
        v46 = *(float *)(*v2 + 168);
        v47 = *(float *)(*v2 + 172);
        v48 = *(int (**)(void))(*(_DWORD *)*v2 + 20);
        v97 = (float)((float)(*(float *)(*v2 + 164) * v47) + (float)(*(float *)(*v2 + 176) * v46)) * 2.0;
        v99 = 1.0 - (float)((float)((float)(v47 * v47) + (float)(v46 * v46)) * 2.0);
        v49 = (float *)v48();
        v50 = v79 - v49[1];
        v51 = v80 - v49[2];
        v88 = v78 - *v49;
        v89 = v50;
        v90 = v51;
        sub_44F7E0(&v88, &v94);
        v52 = *(int (**)(void))(*(_DWORD *)*v2 + 28);
        if ( (float)((float)(v96 * v97) - (float)(v99 * v94)) <= 0.0 )
          v53 = *(float *)(v52() + 1232) * -0.017453292;
        else
          v53 = *(float *)(v52() + 1232) * 0.017453292;
        v88 = v53;
        v97 = 0.0;
        v98 = 1065353216;
        v99 = 0.0;
        sub_570750(&v97, &v88, v53);
        v54 = sub_452D40(&v88, &v97, (int)&v94);
        v55 = (float *)(*(int (**)(void))(*(_DWORD *)*a1 + 20))();
        v56 = *v54 + *v55;
        v57 = v54[1] + v55[1];
        v58 = v54[2] + v55[2];
        v2 = a1;
        v27 = a2;
        v78 = v56;
        v79 = v57;
        v80 = v58;
      }
      sub_698FF0(v27, &v78, *v2, (int)&v100);
      if ( v107 == 0.0 )
      {
        v59 = 3.4028235e38;
        v60 = 3.4028235e38;
      }
      else
      {
        v59 = v103 * (float)(1.0 / v107);
        v60 = v104 * (float)(1.0 / v107);
      }
      if ( (float)((float)(v106 * v60) + (float)(v105 * v59)) >= 0.99989998 )
        goto LABEL_64;
      if ( *(_DWORD *)(v86 + 24) == 7 )
        v61 = sub_6992C0(&v88, v102, v105, v106, v103, v104);
      else
        v61 = sub_6992C0(&v88, v101, v105, v106, v103, v104);
      v62 = (float *)a2;
    }
    else
    {
      v63 = *(_DWORD *)(*v2 + 1356);
      if ( !v63 || (*(int (**)(void))(*(_DWORD *)v63 + 36))() )
        goto LABEL_65;
      sub_6A8C20(*a1, &v78);
      if ( !sub_4F0A50(&v78, &dword_F3D21C) )
      {
        v78 = *((float *)a1 + 8);
        v79 = *((float *)a1 + 9);
        v80 = *((float *)a1 + 10);
      }
      if ( !sub_4F0A50(&v78, &dword_F3D21C) )
        goto LABEL_64;
      v62 = (float *)a2;
      v64 = *a1;
      v94 = v78 + v91;
      v95 = v79 + v92;
      v96 = v80 + v93;
      sub_698FF0(a2, &v94, v64, (int)&v100);
      if ( v107 == 0.0 )
      {
        v65 = 3.4028235e38;
        v66 = 3.4028235e38;
      }
      else
      {
        v65 = v103 * (float)(1.0 / v107);
        v66 = v104 * (float)(1.0 / v107);
      }
      if ( (float)((float)(v106 * v66) + (float)(v105 * v65)) >= 0.99989998 )
      {
LABEL_64:
        v2 = a1;
        v29 = (float *)LODWORD(v81);
LABEL_65:
        v2[17] = dword_F3D21C;
        v2[18] = dword_F3D220;
        v2[19] = dword_F3D224;
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)(*v2 + 8) + 60))(*v2 + 8, &v82);
        if ( !v77 && (float)((float)((float)(v83 * v83) + (float)(v84 * v84)) + (float)(v82 * v82)) < 0.000001 )
        {
          result = 0;
          v2[11] = *(int *)v29;
          v2[12] = *((int *)v29 + 1);
          v2[13] = *((int *)v29 + 2);
          v2[14] = dword_F3D21C;
          v2[15] = dword_F3D220;
          v2[16] = dword_F3D224;
          return result;
        }
        v69 = (*(int (**)(void))(*(_DWORD *)*v2 + 64))();
        v70 = *(float *)(v86 + 52);
        v71 = *(float *)(v69 + 56) * 0.0099999998;
        if ( v70 <= 0.0 )
          v70 = *(float *)(v86 + 48);
        v88 = v70 * v71;
        v78 = v82 * 0.80000001;
        v79 = v83 * 0.80000001;
        v80 = v84 * 0.80000001;
        v82 = -0.0 - v82;
        v83 = -0.0 - v83;
        v84 = -0.0 - v84;
        sub_5D1E70(&v82, v70 * v71);
        v72 = v82 + v78;
        v73 = v83 + v79;
        v74 = v84 + v80;
        *((float *)v2 + 14) = v82 + v78;
        *((float *)v2 + 15) = v73;
        *((float *)v2 + 16) = v74;
        *v29 = v72 + *v29;
        v29[1] = *((float *)v2 + 15) + v29[1];
        v29[2] = *((float *)v2 + 16) + v29[2];
        v2[11] = *(int *)v29;
        v2[12] = *((int *)v29 + 1);
        v45 = v29[2];
        goto LABEL_71;
      }
      if ( *(_DWORD *)(v86 + 24) == 7 )
        v67 = v102;
      else
        v67 = v101;
      v68 = v67;
      v61 = sub_6992C0(&v88, v68, v105, v106, v103, v104);
    }
    sub_699940(v61, v62);
    v77 = 1;
    goto LABEL_64;
  }
  v33 = v86;
  *v29 = *v32;
  *(float *)(a2 + 20) = v32[1];
  *(float *)(a2 + 24) = v32[2];
  if ( *(_DWORD *)(v33 + 24) == 7 )
  {
    if ( !sub_4F0A50(&v78, &dword_F3D21C) )
    {
      v34 = (float *)v2[1];
      v35 = v34[1] + v34[4];
      v36 = v34[2] + v34[5];
      v78 = *v34 + v34[3];
      v79 = v35;
      v80 = v36;
    }
    sub_698FF0(a2, &v78, *v2, (int)&v100);
    v37 = sub_6992C0(&v88, v102, v105, v106, v103, v104);
    sub_699940(v37, (float *)a2);
    v2 = a1;
    v29 = (float *)LODWORD(v81);
  }
  else
  {
    v38 = (float *)sub_50B480((float *)(v2[1] + 12), &v94);
    sub_471D80((float *)a2, v38);
  }
  v39 = *v29 - *((float *)v2 + 11);
  v40 = v29[1] - *((float *)v2 + 12);
  v41 = v29[2] - *((float *)v2 + 13);
  v42 = v40 - *((float *)v2 + 15);
  v43 = v41 - *((float *)v2 + 16);
  *((float *)v2 + 17) = v39 - *((float *)v2 + 14);
  *((float *)v2 + 18) = v42;
  *((float *)v2 + 19) = v43;
  *((float *)v2 + 14) = v39;
  *((float *)v2 + 15) = v40;
  *((float *)v2 + 16) = v41;
  v44 = (float *)v2[1];
  v2[11] = *(int *)v44;
  v2[12] = *((int *)v44 + 1);
  v45 = v44[2];
LABEL_71:
  v31 = HIBYTE(v85) == 0;
  *((float *)v2 + 13) = v45;
  if ( !v31 && sub_62AA90(v29, *v2) )
  {
    v2[17] = dword_F3D21C;
    v75 = *((float *)v2 + 17);
    v2[18] = dword_F3D220;
    v2[19] = dword_F3D224;
    *((float *)v2 + 14) = v75;
    v2[15] = v2[18];
    v2[16] = v2[19];
    if ( !*((_BYTE *)v2 + 141) )
    {
      v76 = *v2;
      v82 = v91 - *v29;
      v84 = v93 - v29[2];
      v83 = 0.0;
      sub_5B1C90(&v82, *(float *)(v76 + 1428) * 0.010000001);
      sub_6B8AC0((int)v2, &v82, 0);
    }
    *v29 = v91;
    v29[1] = v92;
    v29[2] = v93;
    v2[11] = *(int *)v29;
    v2[12] = *((int *)v29 + 1);
    v2[13] = *((int *)v29 + 2);
  }
  return 1;
}

//----- (006C2BC0) --------------------------------------------------------
void __thiscall Moho::CUnitMotion::CalcMoveHover(int a1@<esi>, float *a2)
{
  char v2; // bl
  float *v3; // edi
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm3_4
  int v7; // ebx
  _DWORD *v8; // ebx
  float v9; // ST18_4
  float v10; // ST14_4
  float v11; // ST14_4
  float v12; // ST18_4
  int v13; // ecx
  float *v14; // ebx
  float v15; // xmm3_4
  float v16; // xmm1_4
  float *v17; // eax
  char v19; // [esp+Ch] [ebp-38h]
  float v20; // [esp+1Ch] [ebp-28h]
  float v21; // [esp+20h] [ebp-24h]
  float v22; // [esp+24h] [ebp-20h]
  char v23; // [esp+28h] [ebp-1Ch]

  if ( (*(unsigned __int8 (**)(void))(**(_DWORD **)a1 + 40))() )
    v2 = 0;
  else
    v2 = sub_6C1E20((int *)a1, (int)a2);
  v19 = v2;
  v3 = (float *)(*(int (**)(void))(**(_DWORD **)a1 + 28))();
  if ( v2 || *(_BYTE *)(a1 + 144) )
    sub_6C2F00((_DWORD *)a1);
  v4 = v3[173] / v3[170];
  v5 = (float)(*(float *)(a1 + 196) * 0.80000001) + (float)((float)(v4 * 0.0) * 0.2);
  v6 = (float)(*(float *)(a1 + 200) * 0.80000001) + (float)((float)((float)(*(float *)(a1 + 76) * 10.0) * v4) * 0.2);
  *(float *)(a1 + 192) = (float)(*(float *)(a1 + 192) * 0.80000001)
                       + (float)((float)((float)(*(float *)(a1 + 68) * 10.0) * v4) * 0.2);
  *(float *)(a1 + 196) = v5;
  *(float *)(a1 + 200) = v6;
  v7 = *(_DWORD *)(*(_DWORD *)a1 + 336);
  if ( !(*(_DWORD *)(v7 + 2304) % 5u) )
  {
    v8 = *(_DWORD **)(v7 + 2308);
    v9 = -0.0 - v3[176];
    v10 = v3[176];
    *(float *)(a1 + 240) = v9 + (v10 - v9) * (double)(unsigned int)sub_40E9F0(0, v8) * 2.3283064e-10;
    v11 = -0.0 - v3[176];
    v12 = v3[176];
    *(float *)(a1 + 248) = v11 + (v12 - v11) * (double)(unsigned int)sub_40E9F0(v13, v8) * 2.3283064e-10;
  }
  v20 = *(float *)(a1 + 240) - *(float *)(a1 + 216);
  v21 = *(float *)(a1 + 244) - *(float *)(a1 + 220);
  v22 = *(float *)(a1 + 248) - *(float *)(a1 + 224);
  sub_5D1E70(&v20, v3[177] * 0.1);
  v14 = (float *)(a1 + 228);
  *v14 = v20 + *(float *)(a1 + 228);
  v14[1] = *(float *)(a1 + 232) + v21;
  v14[2] = *(float *)(a1 + 236) + v22;
  sub_5D1E70((float *)(a1 + 228), v3[177]);
  v15 = *(float *)(a1 + 232) + (float)(*(float *)(a1 + 220) * 0.98000002);
  v16 = *(float *)(a1 + 236) + (float)(*(float *)(a1 + 224) * 0.98000002);
  *(float *)(a1 + 216) = (float)(*(float *)(a1 + 216) * 0.98000002) + *(float *)(a1 + 228);
  *(float *)(a1 + 220) = v15;
  *(float *)(a1 + 224) = v16;
  if ( !(*(unsigned __int8 (__stdcall **)(signed int))(**(_DWORD **)a1 + 60))(19) || *(_BYTE *)(a1 + 144) )
  {
    v17 = sub_6C1610(a2, (_DWORD *)a1, (float *)&v23);
    *a2 = *v17;
    a2[1] = v17[1];
    a2[2] = v17[2];
    a2[3] = v17[3];
    a2[4] = v17[4];
    a2[5] = v17[5];
    a2[6] = v17[6];
  }
  *(_BYTE *)(a1 + 144) = 0;
  return sub_6C2A40((float **)a1, v19);
}

//----- (006C2F00) --------------------------------------------------------
void __thiscall Moho::CUnitMotion::FindIntersectingRaisedPlatform(_DWORD *a1@<ebx>)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  unsigned int v3; // ebp
  unsigned int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  float *v13; // edi
  float *v14; // eax
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // [esp+4h] [ebp-8h]

  v1 = (_DWORD *)a1[69];
  v2 = a1 + 69;
  v3 = 0;
  if ( v1 )
  {
    for ( ; (_DWORD *)*v1 != v2; v1 = (_DWORD *)(*v1 + 4) )
      ;
    *v1 = a1[70];
    *v2 = 0;
    a1[70] = 0;
  }
  result = (a1[95] - a1[94]) >> 3;
  v17 = *(float *)&dword_10B61DC;
  if ( result )
  {
    do
    {
      v5 = *(_DWORD *)(8 * v3 + a1[94]);
      if ( v5 && v5 != 4 )
      {
        v6 = *(_DWORD *)(8 * v3 + a1[94]);
        if ( v6 )
          v7 = v6 - 4;
        else
          v7 = 0;
        v8 = (*(int (**)(void))(*(_DWORD *)v7 + 16))();
        v9 = v8;
        if ( v8 )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 48))(v8) )
          {
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 28))(v9);
            v11 = *(_DWORD *)(v10 + 804);
            v12 = v10 + 800;
            if ( v11 )
            {
              if ( (*(_DWORD *)(v12 + 8) - v11) >> 2 )
              {
                v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
                v14 = (float *)(*(int (**)(void))(*(_DWORD *)*a1 + 20))();
                v15 = v14[2] - v13[2];
                v16 = v14[1] - v13[1];
                if ( v17 > (float)((float)((float)((float)(*v14 - *v13) * (float)(*v14 - *v13)) + (float)(v15 * v15))
                                 + (float)(v16 * v16)) )
                {
                  v17 = (float)((float)((float)(*v14 - *v13) * (float)(*v14 - *v13)) + (float)(v15 * v15))
                      + (float)(v16 * v16);
                  sub_57D4F0((int)(a1 + 69), v9);
                }
              }
            }
          }
        }
      }
      ++v3;
      result = (a1[95] - a1[94]) >> 3;
    }
    while ( v3 < result );
  }
  return result;
}

//----- (006C3070) --------------------------------------------------------
void __thiscall Moho::CUnitMotion::TransitionBetweenLayers(float *a1@<edi>, int a2@<esi>)
{
  int v2; // eax
  float v3; // ST10_4
  float v4; // ST0C_4
  float v5; // xmm5_4
  float v6; // xmm6_4
  float *result; // eax
  float v8; // xmm0_4
  char v9; // [esp+14h] [ebp-14h]

  v2 = (*(int (**)(void))(**(_DWORD **)a2 + 28))();
  v3 = *(float *)(v2 + 752) * 10.0;
  v4 = *(float *)(a2 + 284) / v3;
  v5 = *(float *)(a2 + 308) + (float)((float)(*(float *)(a2 + 336) - *(float *)(a2 + 308)) * v4);
  v6 = *(float *)(a2 + 312) + (float)((float)(*(float *)(a2 + 340) - *(float *)(a2 + 312)) * v4);
  a1[4] = *(float *)(a2 + 304) + (float)((float)(*(float *)(a2 + 332) - *(float *)(a2 + 304)) * v4);
  a1[5] = v5;
  a1[6] = v6;
  result = sub_4EBA80((float *)(a2 + 316), (float *)(a2 + 288), (float *)&v9, v4);
  *a1 = *result;
  a1[1] = result[1];
  a1[2] = result[2];
  a1[3] = result[3];
  v8 = *(float *)(a2 + 284) + 1.0;
  *(float *)(a2 + 284) = v8;
  *(_BYTE *)(a2 + 144) = 0;
  if ( v8 >= v3 )
    *(_DWORD *)(a2 + 284) = 0;
  return result;
}

//----- (006C3180) --------------------------------------------------------
void __thiscall Moho::CUnitMotion::CalcMoveLand(int a1@<eax>, float *a2@<esi>)
{
  int v2; // ebx
  float *v3; // eax
  char v5; // [esp+8h] [ebp-20h]
  char v6; // [esp+Ch] [ebp-1Ch]

  v2 = a1;
  if ( (*(unsigned __int8 (**)(void))(**(_DWORD **)a1 + 40))() )
  {
    v5 = 0;
  }
  else
  {
    v5 = sub_6C1E20((int *)v2, (int)a2);
    if ( v5 && !(*(unsigned __int8 (__stdcall **)(signed int))(**(_DWORD **)v2 + 60))(19) )
      goto LABEL_5;
  }
  if ( *(_BYTE *)(v2 + 144) )
  {
LABEL_5:
    sub_6C2F00((_DWORD *)v2);
    v3 = sub_6C1610(a2, (_DWORD *)v2, (float *)&v6);
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    a2[3] = v3[3];
    a2[4] = v3[4];
    a2[5] = v3[5];
    a2[6] = v3[6];
    *(_BYTE *)(v2 + 144) = 0;
  }
  return sub_6C2A40((float **)v2, v5);
}

//----- (006C3220) --------------------------------------------------------
char __thiscall Moho::CUnitMotion::HandleDivingAndSurfacing(float *a1@<edi>)
{
  int v2; // esi
  float v3; // ST14_4
  float *v4; // eax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v8; // eax
  float v9; // xmm0_4
  long double v10; // st7
  float v11; // ST18_4
  float v12; // ST10_4
  float v13; // ecx
  float v14; // xmm0_4
  float v15; // eax
  int v16; // ecx
  float v17; // xmm1_4
  float v18; // eax
  int v19; // ecx
  float v20; // [esp+10h] [ebp-Ch]
  float v21; // [esp+10h] [ebp-Ch]
  float v22; // [esp+14h] [ebp-8h]
  float v23; // [esp+14h] [ebp-8h]

  v20 = *(float *)((*(int (**)(void))(**(_DWORD **)a1 + 64))() + 48);
  if ( v20 == 0.0 )
    return 0;
  if ( !(*(unsigned __int8 (__stdcall **)(signed int))(**(_DWORD **)a1 + 60))(11)
    && !(*(unsigned __int8 (__stdcall **)(signed int))(**(_DWORD **)a1 + 60))(10) )
  {
    a1[24] = 0.0;
    return 0;
  }
  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 336) + 2252);
  v3 = *(float *)((*(int (**)(void))(**(_DWORD **)a1 + 20))() + 8);
  v4 = (float *)(*(int (**)(void))(**(_DWORD **)a1 + 20))();
  v22 = sub_44FB90((int *)*(_DWORD *)v2, *v4, v3);
  if ( *(_BYTE *)(v2 + 5428) )
    v5 = *(float *)(v2 + 5432);
  else
    v5 = -10000.0;
  v6 = (float)(v22 + 0.25) - v5;
  if ( v6 > 0.0 )
    v6 = 0.0;
  v7 = v20;
  v23 = v20;
  if ( v6 > v20 )
  {
    v7 = v6;
    v23 = v6;
  }
  v21 = sub_40DAB0(a1[23] / v7);
  v8 = (*(int (**)(void))(**(_DWORD **)a1 + 28))();
  if ( v21 > 0.5 )
    v21 = 1.0 - v21;
  v9 = (float)(*(float *)(v8 + 668) * 0.1) * 0.1;
  v10 = sin(v21 * 3.1415927) * (float)(*(float *)(v8 + 668) * 0.1);
  v11 = v10;
  if ( v9 <= v11 )
  {
    v12 = v10;
    v9 = v12;
  }
  v13 = *a1;
  a1[24] = v9;
  if ( (*(unsigned __int8 (__stdcall **)(signed int))(*(_DWORD *)LODWORD(v13) + 60))(11) )
  {
    v14 = a1[23] + a1[24];
    if ( v14 > 0.0 )
      v14 = 0.0;
    a1[23] = v14;
    if ( v14 == 0.0 )
    {
      sub_67AFF0(*((_DWORD *)a1 + 29), (int *)(*(_DWORD *)a1 + 8));
      v15 = *a1;
      v16 = *(_DWORD *)(*(_DWORD *)a1 + 1188);
      *(_DWORD *)(LODWORD(v15) + 1184) &= 0xFFFFF7FF;
      *(_DWORD *)(LODWORD(v15) + 1188) = v16;
      sub_6B8F70(0, a1);
      return 1;
    }
  }
  else if ( (*(unsigned __int8 (__stdcall **)(signed int))(**(_DWORD **)a1 + 60))(10) )
  {
    v17 = v23;
    if ( (float)(a1[23] - a1[24]) > v23 )
      v17 = a1[23] - a1[24];
    a1[23] = v17;
    if ( v23 >= v17 )
    {
      sub_67AFF0(*((_DWORD *)a1 + 29), (int *)(*(_DWORD *)a1 + 8));
      v18 = *a1;
      v19 = *(_DWORD *)(*(_DWORD *)a1 + 1188);
      *(_DWORD *)(LODWORD(v18) + 1184) &= 0xFFFFFBFF;
      *(_DWORD *)(LODWORD(v18) + 1188) = v19;
      sub_6B8F70((_DWORD *)1, a1);
    }
  }
  return 1;
}

//----- (006C3480) --------------------------------------------------------
void __userpurge Moho::CUnitMotion::CalcMoveWater(int a1@<eax>, float *a2@<esi>, float a3@<xmm0>)
{
  int v3; // edi
  char v4; // bl
  char v5; // al
  int v6; // eax
  int v7; // eax
  float *v8; // eax
  const char *v10; // [esp+8h] [ebp-28h]
  int v11; // [esp+Ch] [ebp-24h]
  const char *v12; // [esp+10h] [ebp-20h]
  char v13; // [esp+14h] [ebp-1Ch]

  v3 = a1;
  if ( (*(unsigned __int8 (**)(void))(**(_DWORD **)a1 + 40))() )
    v4 = 0;
  else
    v4 = sub_6C1E20((int *)v3, (int)a2);
  LOBYTE(v11) = v4;
  v5 = sub_6C3220((float *)v3);
  if ( v4 )
  {
    v6 = *(_DWORD *)(v3 + 276);
    if ( v6 )
      v10 = (const char *)(v6 - 4);
    else
      v10 = 0;
    sub_6C2F00((_DWORD *)v3);
    if ( v10 )
    {
      v7 = *(_DWORD *)(v3 + 276);
      if ( !v7 || v7 == 4 )
      {
        v10 = sub_50AD80(1);
        v12 = sub_50AD80(8);
        sub_67F450((int *)(*(_DWORD *)v3 + 8), "OnLayerChange", (void **)&v12, (void **)&v10);
      }
    }
    goto LABEL_14;
  }
  if ( v5
    || (a3 = *(float *)(v3 + 112),
        (float)((float)((float)(*(float *)(v3 + 104) * *(float *)(v3 + 104))
                      + (float)(*(float *)(v3 + 108) * *(float *)(v3 + 108)))
              + (float)(a3 * a3)) > 0.000001) )
  {
LABEL_14:
    v8 = sub_6C1CB0(a2, (float *)v3, (float *)&v13, a3);
    *a2 = *v8;
    a2[1] = v8[1];
    a2[2] = v8[2];
    a2[3] = v8[3];
    a2[4] = v8[4];
    a2[5] = v8[5];
    a2[6] = v8[6];
  }
  return sub_6C2A40((float **)v3, v11);
}