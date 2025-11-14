// 函数: sub_53e3b0
// 地址: 0x53e3b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x28c)
int32_t esi = *eax
int32_t* ecx = *(arg1 + 0x12c4)
*(arg1 + 0x28c) = &eax[1]
int32_t result = ecx[1]
int32_t entry_ebx

if (esi u>= result u>> 2)
    return sub_53d0e0(arg1, 0x74d2fc, esi, arg3, arg2, entry_ebx, __return_addr)

int32_t ecx_1

if (result != 0)
    ecx_1 = *ecx
else
    ecx_1 = 0

int32_t ebx = *(ecx_1 + (esi << 2))

if (ebx != 0xffffffff)
    if (sub_552880(arg1 + 0x1dc, ebx) == 0)
        sub_53d0e0(arg1, 0x750fac, ebx, arg3, arg2, entry_ebx, __return_addr)
    
    int32_t* eax_3 = *(arg1 + 0x12c4)
    int32_t ecx_4 = eax_3[1]
    
    if (esi u>= ecx_4 u>> 2)
        return sub_53d0e0(arg1, 0x74d330, ecx_4 u>> 2, esi, arg3, arg2, entry_ebx)
    
    if (ecx_4 == 0)
        *(esi << 2) = 0xffffffff
        int32_t eax_4
        eax_4.b = 1
        return 1
    
    *(*eax_3 + (esi << 2)) = 0xffffffff

result.b = 1
return result
