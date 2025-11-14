// 函数: sub_5d11f0
// 地址: 0x5d11f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("SetFullPathSaveFileName", arg1) != 0)
    return sub_5d12d0

if (sub_402680("LoadAtStartup", arg1) != 0)
    return j_sub_5ce4d0

if (sub_402680("SetDataInt", arg1) != 0)
    return sub_5d1310

if (sub_402680("SetDataFloat", arg1) != 0)
    return sub_5d1320

if (sub_402680("SetDataString", arg1) != 0)
    return sub_5d1340

if (sub_402680("SetDataBool", arg1) != 0)
    return sub_5d1350

if (sub_402680("GetDataInt", arg1) != 0)
    return sub_5d1360

if (sub_402680("GetDataFloat", arg1) != 0)
    return sub_5d1370

if (sub_402680("GetDataString", arg1) != 0)
    return sub_5d1380

uint32_t eax_19 = zx.d(sub_402680("GetDataBool", arg1))
int32_t eax_20 = neg.d(eax_19)
return sbb.d(eax_20, eax_20, eax_19 != 0) & sub_5d1390
