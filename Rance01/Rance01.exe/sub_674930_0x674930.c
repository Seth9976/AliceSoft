// 函数: sub_674930
// 地址: 0x674930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("ReloadDebugEXFile", arg1) != 0)
    return sub_675090

if (sub_402680("Handle", arg1) != 0)
    return sub_6750a0

if (sub_402680("AHandle", arg1) != 0)
    return sub_6750c0

if (sub_402680("A2Handle", arg1) != 0)
    return sub_6750e0

if (sub_402680("IA2Handle", arg1) != 0)
    return sub_675100

if (sub_402680("SA2Handle", arg1) != 0)
    return sub_675120

if (sub_402680("RA2Handle", arg1) != 0)
    return sub_675140

if (sub_402680(0x72fe94, arg1) != 0)
    return sub_675160

if (sub_402680(0x72fe98, arg1) != 0)
    return sub_675180

if (sub_402680("Type", arg1) != 0)
    return sub_6751a0

if (sub_402680("AType", arg1) != 0)
    return sub_6751c0

if (sub_402680("A2Type", arg1) != 0)
    return sub_6751e0

if (sub_402680("IA2Type", arg1) != 0)
    return sub_675200

if (sub_402680("SA2Type", arg1) != 0)
    return sub_675220

if (sub_402680("RA2Type", arg1) != 0)
    return sub_675240

if (sub_402680("Exists", arg1) != 0)
    return sub_675260

if (sub_402680("AExists", arg1) != 0)
    return sub_675280

if (sub_402680("A2Exists", arg1) != 0)
    return sub_6752a0

if (sub_402680("IA2Exists", arg1) != 0)
    return sub_6752c0

if (sub_402680("SA2Exists", arg1) != 0)
    return sub_6752e0

if (sub_402680("RA2Exists", arg1) != 0)
    return sub_675300

if (sub_402680(0x72ff0c, arg1) != 0)
    return sub_675320

if (sub_402680("Float", arg1) != 0)
    return sub_675360

if (sub_402680("String", arg1) != 0)
    return sub_6753a0

if (sub_402680("AInt", arg1) != 0)
    return sub_6753e0

if (sub_402680("AFloat", arg1) != 0)
    return sub_675430

if (sub_402680("AString", arg1) != 0)
    return sub_675480

if (sub_402680("GetRowAtIntKey", arg1) != 0)
    return sub_6754d0

if (sub_402680("GetRowAtStringKey", arg1) != 0)
    return sub_6754f0

if (sub_402680("A2Int", arg1) != 0)
    return sub_675510

if (sub_402680("A2Float", arg1) != 0)
    return sub_675570

if (sub_402680("A2String", arg1) != 0)
    return sub_6755d0

if (sub_402680("IA2Int", arg1) != 0)
    return sub_675620

if (sub_402680("IA2Float", arg1) != 0)
    return sub_675680

if (sub_402680("IA2String", arg1) != 0)
    return sub_6756e0

if (sub_402680("SA2Int", arg1) != 0)
    return sub_675730

if (sub_402680("SA2Float", arg1) != 0)
    return sub_675790

if (sub_402680("SA2String", arg1) != 0)
    return sub_6757f0

if (sub_402680("RA2Int", arg1) != 0)
    return sub_675840

if (sub_402680("RA2Float", arg1) != 0)
    return sub_6758a0

if (sub_402680("RA2String", arg1) != 0)
    return sub_675900

if (sub_402680("GetNodeNameCount", arg1) != 0)
    return sub_675950

if (sub_402680("GetEXNameCount", arg1) != 0)
    return sub_675970

if (sub_402680("GetNodeName", arg1) != 0)
    return sub_675990

uint32_t eax_89 = zx.d(sub_402680("GetEXName", arg1))
int32_t eax_90 = neg.d(eax_89)
return sbb.d(eax_90, eax_90, eax_89 != 0) & sub_6759b0
