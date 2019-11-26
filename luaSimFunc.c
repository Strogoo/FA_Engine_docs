//calls to engine from lua sim//

//----- (006CC5A0) ------------
bool __thiscall unit::GetStat(int a1@<ebx>, int a2@<edi>, int a3@<esi>, double a4@<st0>....) //char "statName", int defaultValue
{
  int *v43; // ecx
  int v44; // eax
  int v45; // ebx
  int *v46; // edi
  int v47; // eax
  char *v48; // ebx
  int v49; // eax
  _DWORD *v50; // esi
  int v51; // eax
  void *v52; // eax
  int v54; // [esp-14h] [ebp-BCh]
  int *v55; // [esp-10h] [ebp-B8h]
  int v56; // [esp-Ch] [ebp-B4h]
  int v57; // [esp-8h] [ebp-B0h]
  int v58; // [esp-4h] [ebp-ACh]
  float v59; // [esp+0h] [ebp-A8h]
  int v60; // [esp+4h] [ebp-A4h]
  int *v61; // [esp+8h] [ebp-A0h]
  int v62; // [esp+Ch] [ebp-9Ch]
  int *v63; // [esp+10h] [ebp-98h]
  int v64; // [esp+14h] [ebp-94h]
  int *v65; // [esp+18h] [ebp-90h]
  int v66; // [esp+1Ch] [ebp-8Ch]
  int *v67; // [esp+20h] [ebp-88h]
  int v68; // [esp+24h] [ebp-84h]
  int *v69; // [esp+28h] [ebp-80h]
  int v70; // [esp+2Ch] [ebp-7Ch]
  int *v71; // [esp+30h] [ebp-78h]
  int v72; // [esp+34h] [ebp-74h]
  int *v73; // [esp+38h] [ebp-70h]
  int v74; // [esp+3Ch] [ebp-6Ch]
  int *v75; // [esp+40h] [ebp-68h]
  int v76; // [esp+44h] [ebp-64h]
  int v77; // [esp+48h] [ebp-60h]
  int v78; // [esp+4Ch] [ebp-5Ch]
  int v79; // [esp+50h] [ebp-58h]
  int v80; // [esp+54h] [ebp-54h]
  int v81; // [esp+58h] [ebp-50h]
  _DWORD *v82; // [esp+5Ch] [ebp-4Ch]
  int v83; // [esp+60h] [ebp-48h]
  int v84; // [esp+64h] [ebp-44h]
  int v85; // [esp+68h] [ebp-40h]
  int v86; // [esp+6Ch] [ebp-3Ch]
  int v87; // [esp+70h] [ebp-38h]
  int v88; // [esp+74h] [ebp-34h]
  int v89; // [esp+78h] [ebp-30h]
  int v90; // [esp+7Ch] [ebp-2Ch]
  int v91; // [esp+80h] [ebp-28h]
  int v92; // [esp+84h] [ebp-24h]
  int v93; // [esp+88h] [ebp-20h]
  int v94; // [esp+8Ch] [ebp-1Ch]
  int v95; // [esp+90h] [ebp-18h]
  int v96; // [esp+94h] [ebp-14h]
  int v97; // [esp+98h] [ebp-10h]
  int (*v98)(); // [esp+9Ch] [ebp-Ch]
  int v99; // [esp+A0h] [ebp-8h]

  v43 = (int *)sub_90A510(a5);
  v99 = -1;
  v98 = sub_B8E0E8;
  v97 = v44;
  v58 = a1;
  v45 = dword_10B73A4;
  v57 = a3;
  v56 = a2;
  v46 = v43;
  v47 = sub_90C590(*v43);
  if ( v47 < 2 || v47 > 3 )
    sub_90C1D0(v46, "%s\n  expected between %d and %d args, but got %d", v45, 2, 3, v47);
  sub_90C5A0(*v46, 3);
  v71 = v46;
  v72 = 1;
  sub_908A70(&v82, (int *)&v71);
  v99 = 0;
  v48 = sub_5936C0((int)&v82, v46);
  v99 = -1;
  sub_9075D0(&v82);
  if ( sub_90C740((_DWORD *)*v46, 3) )
  {
    if ( sub_90C740((_DWORD *)*v46, 3) == 3 )
    {
      v74 = 3;
      v73 = v46;
      v60 = sub_41B520((int *)&v73);
      v69 = v46;
      v70 = 2;
      v51 = sub_90CA90((_DWORD *)*v46, 2);
      if ( !v51 )
        sub_4154B0((int *)&v69, (int)"use as string");
      v55 = &v60;
      v54 = v51;
      v50 = (_DWORD *)(*(int (__thiscall **)(char *, int, int *, int, int, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int, int, int, int, int, _DWORD *, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)v48 + 80))(
      {v48,
                        v51,
                        &v60,
                        v56,
                        v57,
                        v58,
                        &v54,
                        v60,
                        v61,
                        v62,
                        v63,
                        v64,
                        v65,
                        v66,
                        v67,
                        v68,
                        v69,
                        v70,
                        v71,
                        v72,
                        v73,
                        v74,
                        v75,
                        v76,
                        v77,
                        v78,
                        v79,
                        v80,
                        v81,
                        v82,
                        v83,
                        v84,
                        v85,
                        v86,
                        v87,
                        v88,
                        v89,
                        v90,
                        v91,
                        v92,
                        v93,
                        v94,
                        v95,
      v96);}
    }
    else if ( sub_90C740((_DWORD *)*v46, 3) == 3 )
    {
      v62 = 3;
      v61 = v46;
      sub_5459F0((int *)&v61);
      v59 = a4;
      v55 = (int *)&v59;
      v75 = v46;
      v76 = 2;
      v54 = sub_415530((int *)&v75);
      v50 = (_DWORD *)(*(int (__thiscall **)(char *, int, float *, int, int, int, float, int *, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int, int, int, int, int, _DWORD *, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)v48 + 76))(
      {v48,
                        v54,
                        &v59,
                        v56,
                        v57,
                        v58,
                        COERCE_FLOAT(LODWORD(v59)),
                        &v54,
                        v61,
                        v62,
                        v63,
                        v64,
                        v65,
                        v66,
                        v67,
                        v68,
                        v69,
                        v70,
                        v71,
                        v72,
                        v73,
                        v74,
                        v75,
                        v76,
                        v77,
                        v78,
                        v79,
                        v80,
                        v81,
                        v82,
                        v83,
                        v84,
                        v85,
                        v86,
                        v87,
                        v88,
                        v89,
                        v90,
                        v91,
                        v92,
                        v93,
                        v94,
                        v95,
      v96);}
    }
    else
    {
      v63 = v46;
      v64 = 3;
      v52 = (void *)sub_415530((int *)&v63);
      sub_405550((int)&v89, v52);
      v99 = 1;
      v55 = &v89;
      v67 = v46;
      v68 = 2;
      v54 = sub_415530((int *)&v67);
      v50 = (_DWORD *)(*(int (__thiscall **)(char *, int, int *, int, int, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int, int, int, int, int, _DWORD *, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)v48 + 72))(
      {v48,
                        v54,
                        &v89,
                        v56,
                        v57,
                        v58,
                        &v54,
                        v60,
                        v61,
                        v62,
                        v63,
                        v64,
                        v65,
                        v66,
                        v67,
                        v68,
                        v69,
                        v70,
                        v71,
                        v72,
                        v73,
                        v74,
                        v75,
                        v76,
                        v77,
                        v78,
                        v79,
                        v80,
                        v81,
                        v82,
                        v83,
                        v84,
                        v85,
                        v86,
                        v87,
                        v88,
                        v89,
                        v90,
                        v91,
                        v92,
                        v93,
                        v94,
                        v95,
      v96);}
      a43 = -1;
      sub_402370(&a33);
    }
  }
  else
  {
    v65 = v46;
    v66 = 2;
    v49 = sub_90CA90((_DWORD *)*v46, 2);
    if ( !v49 )
      sub_4154B0((int *)&v65, (int)"use as string");
    v55 = (int *)v49;
    v50 = (_DWORD *)(*(int (__thiscall **)(char *, int, int, int, int, int **, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int *, int, int, int, int, int, int, _DWORD *, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)v48 + 84))(
    {v48,
                      v49,
                      v56,
                      v57,
                      v58,
                      &v55,
                      v60,
                      v61,
                      v62,
                      v63,
                      v64,
                      v65,
                      v66,
                      v67,
                      v68,
                      v69,
                      v70,
                      v71,
                      v72,
                      v73,
                      v74,
                      v75,
                      v76,
                      v77,
                      v78,
                      v79,
                      v80,
                      v81,
                      v82,
                      v83,
                      v84,
                      v85,
                      v86,
                      v87,
                      v88,
                      v89,
                      v90,
                      v91,
                      v92,
                      v93,
                      v94,
                      v95,
    v96);}
  }
  if ( v50 )
  {
    sub_9072A0(&a21);
    a43 = 2;
    sub_41B390((int)v46, v50, (int *)&a21);
    sub_907D80(&a21, &a31, v46);
    a43 = -1;
    sub_9075D0((_DWORD **)&a21);
  }
  else
  {
    sub_90CD00(*v46);
    sub_90C590(*v46);
  }
  return 1;
}


