// 函数: sub_52bf00
// 地址: 0x52bf00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1
int32_t eax = arg2[1]
int32_t ecx_1

if (esi u< eax)
    ecx_1 = *arg2

if (esi u< eax && ecx_1 u<= esi)
    if (eax == arg2[2])
        sub_52bfc0(arg2)
    
    esi = ((esi - ecx_1) & 0xfffffff0) + *arg2
else if (eax == arg2[2])
    sub_52bfc0(arg2)

struct win32only::CHighResolutionTimer::VTable** result = arg2[1]

if (result != 0)
    *result = &win32only::CHighResolutionTimer::`vftable'
    result[2] = *(esi + 8)
    result[3] = *(esi + 0xc)

arg2[1] += 0x10
return result
