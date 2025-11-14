// 函数: sub_42f9b0
// 地址: 0x42f9b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 8) == 0)
    return 

void* esi_1 = *(arg1 + 0xc)

if (esi_1 == 0 || *(arg1 + 0x10) == 0)
    return 

int32_t* eax
int32_t* var_8_1 = eax
int32_t* ecx
eax = sub_42e030(ecx, esi_1)
int32_t* ecx_1 = *(arg1 + 0x18)

if (ecx_1 == eax)
    return 

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()

*(arg1 + 0x18) = eax

if (eax != 0)
    (**eax)()

if (*(arg1 + 0x18) == 0)
    return 

int32_t* ecx_3 = *(arg1 + 0x14)

if (ecx_3 != 0)
    jump(*(*ecx_3 + 8))
