// 函数: sub_40c700
// 地址: 0x40c700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_5 = *(arg1 + 0xcc)

if (ecx_5 != 0)
    (*(*ecx_5 + 4))()
    *(arg1 + 0xcc) = 0

*(arg1 + 0xcc) = arg2

if (arg2 != 0)
    (**arg2)()

int32_t* ecx_1 = *(arg1 + 0xcc)

if (ecx_1 == 0)
    *(arg1 + 0x28) = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0
    int32_t eax
    eax.b = 1
    return eax

char eax_4 = (*(*ecx_1 + 0x24))()
int32_t* ecx_2 = *(arg1 + 0xcc)
*(arg1 + 0x28) = eax_4
char eax_6 = (*(*ecx_2 + 0x28))()
int32_t* ecx_3 = *(arg1 + 0xcc)
*(arg1 + 0x29) = eax_6
int32_t eax_8 = (*(*ecx_3 + 0x10))()
int32_t* ecx_4 = *(arg1 + 0xcc)
*(arg1 + 0x14) = eax_8
*(arg1 + 0x18) = (*(*ecx_4 + 0x14))()
int32_t eax_10
eax_10.b = 1
return eax_10
