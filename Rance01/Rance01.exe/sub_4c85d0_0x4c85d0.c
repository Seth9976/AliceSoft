// 函数: sub_4c85d0
// 地址: 0x4c85d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 0x1d0)

if (edi != 0)
    void* esi_1 = arg1 + 0x214
    
    if (*(arg1 + 0x214) != 0)
        goto label_4c8634
    
    int32_t ecx
    sub_4efb40(ecx, esi_1)
    
    if (edi != 0 && sub_4efbb0(edi, esi_1).b != 0)
        int80_t st0_1
        st0_1, arg1 = sub_4efc10(esi_1)
        
        if (arg1.b != 0)
            sub_4f2190(esi_1)
            *esi_1 = 1
        label_4c8634:
            float* var_10_2 = arg5
            int32_t var_14 = arg4
            int32_t var_18 = arg3
            int32_t eax_2 = sub_4f14d0(esi_1, arg2)
            unimplemented  {call 0x4f14d0}
            return eax_2
else
    long double x87_r7_1 = float.t(0)
    *arg5 = fconvert.s(x87_r7_1)
    arg5[1] = fconvert.s(x87_r7_1)
    arg5[2] = fconvert.s(x87_r7_1)

arg1.b = 0
return arg1
