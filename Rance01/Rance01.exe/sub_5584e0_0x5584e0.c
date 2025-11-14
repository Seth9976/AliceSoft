// 函数: sub_5584e0
// 地址: 0x5584e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, *(arg2 + 0xbc) - *(arg2 + 0xb8))
int32_t edx_1 = edx s>> 5
int32_t esi_2 = (edx_1 u>> 0x1f) + edx_1
int32_t* result = sub_5604b0(arg1, esi_2)

if (result.b == 0)
    return result

int32_t edi = 0

if (esi_2 s> 0)
    int32_t ebp_1 = 0
    
    do
        int32_t eax_2
        int32_t edx_2
        edx_2:eax_2 = muls.dp.d(0x6bca1af3, *(arg2 + 0xbc) - *(arg2 + 0xb8))
        int32_t edx_3 = edx_2 s>> 5
        
        if (edi u>= (edx_3 u>> 0x1f) + edx_3)
            result.b = 0
            return result
        
        void* eax_5 = *(arg2 + 0xb8)
        
        if (eax_5 == neg.d(ebp_1))
            result.b = 0
            return result
        
        if (sub_560510(&(eax_5 + ebp_1)[1], edx_3, arg1).b == 0)
            result.b = 0
            return result
        
        edi += 1
        ebp_1 += 0x4c
    while (edi s< esi_2)

result.b = 1
return result
