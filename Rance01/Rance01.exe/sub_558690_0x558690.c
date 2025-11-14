// 函数: sub_558690
// 地址: 0x558690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi_1 = arg3 - *(arg1 + 0x164)

if (esi_1 == 0xffffffff)
    return 0

int32_t edi = *(arg1 + 0x9c)
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x78787879, *(arg1 + 0xa0) - edi)
int32_t edx_1 = edx s>> 5

if (esi_1 u< (edx_1 u>> 0x1f) + edx_1)
    int32_t eax_5 = edi + esi_1 * 0x44
    
    if (eax_5 != 0)
        return eax_5 + 0x10

return 0
