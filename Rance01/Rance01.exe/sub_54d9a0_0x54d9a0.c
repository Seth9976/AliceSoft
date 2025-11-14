// 函数: sub_54d9a0
// 地址: 0x54d9a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t eax_1 = **(arg1 + 0x2b0)

if (eax_1 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    void* esi = *(*(arg1 + 0x1e4) + (eax_1 << 2))
    
    if (esi != 0)
        void* var_10_1 = esi
        
        if (sub_551e70() == 0)
            sub_53d0e0(arg1, "gcDelegate", arg5, arg4, arg3)
            int32_t eax_4
            eax_4.b = 0
            return eax_4
        
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = muls.dp.d(0x55555556, *(esi + 4) u>> 2)
        **(arg1 + 0x2b0) = (edx_1 u>> 0x1f) + edx_1
        *(arg1 + 0x2b0) += 4
        int32_t eax_8
        eax_8.b = 1
        return eax_8

sub_53d0e0(arg1, 0x751524, eax_1, arg5, arg4, arg3, __return_addr)
int32_t eax_2
eax_2.b = 0
return eax_2
