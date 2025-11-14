// 函数: sub_6b2600
// 地址: 0x6b2600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** lpLibFileName = arg1 + 4

if (lpLibFileName[5] u>= 0x10)
    lpLibFileName = *lpLibFileName

HMODULE eax = LoadLibraryA(lpLibFileName)

if (eax == 0)
    return eax

int32_t eax_1 = GetProcAddress(eax, "RunPatch")
int32_t esi = 0

if (eax_1 != 0)
    esi = eax_1(arg2, arg3, arg4, arg5)

FreeLibrary(eax)
return esi
