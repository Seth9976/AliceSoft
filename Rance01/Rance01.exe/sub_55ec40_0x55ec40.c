// 函数: sub_55ec40
// 地址: 0x55ec40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_3 = *(arg1 + 4)
int32_t eax = ecx_3[1]

if (arg2 u>= eax u>> 2)
    sub_604c90(0x74c5d0)
    return 0

if (eax != 0)
    eax = *ecx_3

int32_t edx = *(eax + (arg2 << 2))
void* eax_1 = ecx_3[5]
void* esi_2

if (edx u< (*(eax_1 + 0xc) - *(eax_1 + 8)) s>> 2)
    esi_2 = *(*(eax_1 + 8) + (edx << 2))
else
    esi_2 = nullptr

if (*(esi_2 + 0x4c) == 0)
    struct IVMStruct3::sys43vm::CVMStructWrapper::VTable** eax_4 = operator new(8)
    
    if (eax_4 != 0)
        *eax_4 = &sys43vm::CVMStructWrapper::`vftable'{for `IVMStruct3'}
        eax_4[1] = 0
        *(esi_2 + 0x4c) = eax_4
        eax_4[1] = esi_2
        return *(esi_2 + 0x4c)
    
    *(esi_2 + 0x4c) = 0
    *4 = esi_2

return *(esi_2 + 0x4c)
