// 函数: sub_42f910
// 地址: 0x42f910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg2

if (edi == 0 || arg3 == 0)
    return 

sub_42f8c0(arg1)
*(arg1 + 8) = edi
(**edi)()
*(arg1 + 0xc) = arg3
(**arg3)()
int32_t* ebx_2 = *(arg1 + 0xc) + 0x28

if (sub_4291e0(*(arg1 + 8), ebx_2).b == 0)
    return 

int32_t* eax_3 = sub_4295c0(*(arg1 + 8), ebx_2)
int32_t eax_5 = (*(*eax_3 + 0x14))()
int32_t eax_7 = (*(*eax_3 + 0x18))()
void* eax_8 = *(arg1 + 0x10)
void* eax_9
int32_t ecx_5
eax_9, ecx_5 = sub_5f99d0(eax_8 + 0xc, eax_8, eax_8 + 0xc)

if (eax_9 == 0)
    *(arg1 + 0x14) = eax_9
    return 

uint32_t eax_11 = zx.d(sub_5f9860(ecx_5, eax_9, eax_7, eax_5))
int32_t eax_12 = neg.d(eax_11)
*(arg1 + 0x14) = sbb.d(eax_12, eax_12, eax_11 != 0) & eax_9
