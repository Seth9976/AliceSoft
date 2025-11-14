// 函数: sub_5c44d0
// 地址: 0x5c44d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1
int32_t ecx = edi[2]
int32_t eax = edi[3]
int32_t var_30 = ecx
int32_t var_2c = eax
int32_t var_38 = 0xffffffff
int32_t var_34 = 0xffffffff
int32_t var_20 = 0xffffffff
int32_t var_1c = 0xffffffff
int32_t var_28 = 0xffffffff
int32_t var_24 = 0xffffffff
int32_t ebp = 0xffffffff
int32_t var_14 = 0xffffffff

while (true)
    int32_t eax_1 = adc.d(eax, 0xffffffff, ecx u>= 0x10000)
    int32_t var_40_1 = ecx - 0x10000
    int32_t var_3c_1 = eax_1
    
    if (eax_1 s<= 0 && (eax_1 s< 0 || ecx - 0x10000 u< 0))
        var_40_1 = 0
        var_3c_1 = 0
    
    int32_t ecx_2 = *edi
    int32_t eax_5
    
    if (ecx_2 == 0)
        eax_5 = 0xffffff7f
    else
        int32_t eax_2 = edi[0xb1]
        int32_t eax_3
        
        if (eax_2 != 0)
            eax_3 = eax_2(ecx_2, var_40_1, var_3c_1, 0)
        
        if (eax_2 == 0 || eax_3 == 0xffffffff)
            eax_5 = 0xffffff80
        else
            edi[2] = var_40_1
            edi[3] = var_3c_1
            
            if (edi[7] s>= 0)
                __builtin_memset(&edi[8], 0, 0x14)
            
            eax_5 = 0
    
    int32_t eax_46
    int32_t edx_2
    edx_2:eax_46 = sx.q(eax_5)
    
    if ((eax_46 | edx_2) != 0)
        return eax_46
    
    int32_t edx_3 = edi[3]
    
    if (edx_3 s<= var_2c && (edx_3 s< var_2c || edi[2] u< var_30))
        while (true)
            void* var_10
            int32_t eax_7
            int32_t edx_6
            eax_7, edx_6 =
                sub_5c4290(edi, &var_10, var_30 - edi[2], sbb.d(var_2c, edi[3], var_30 u< edi[2]))
            
            if (eax_7 == 0xffffff80 && edx_6 == 0xffffffff)
                return 0xffffff80
            
            if (edx_6 s< 0)
                break
            
            if (edx_6 s<= 0 && eax_7 u< 0)
                break
            
            void* ecx_7 = var_10
            int32_t eax_15
            int32_t edx_10
            edx_10:eax_15 = sx.q(((zx.d(*(ecx_7 + 0x11)) << 8 | zx.d(*(ecx_7 + 0x10))) << 8
                | zx.d(*(ecx_7 + 0xf))) << 8 | zx.d(*(ecx_7 + 0xe)))
            var_28 = eax_15
            int32_t eax_17
            int32_t edx_11
            edx_11:eax_17 = sx.q(zx.d(*(ecx_7 + 0xd)))
            int32_t eax_20
            int32_t edx_13
            edx_13:eax_20 = sx.q(zx.d(*(ecx_7 + 0xc)))
            int32_t edi_2 = eax_17 << 8 | eax_20
            int32_t eax_22
            int32_t edx_14
            edx_14:eax_22 = sx.q(zx.d(*(ecx_7 + 0xb)))
            int32_t edi_4 = edi_2 << 8 | eax_22
            int32_t eax_24
            int32_t edx_15
            edx_15:eax_24 = sx.q(zx.d(*(ecx_7 + 0xa)))
            int32_t edi_6 = edi_4 << 8 | eax_24
            int32_t eax_26
            int32_t edx_16
            edx_16:eax_26 = sx.q(zx.d(*(ecx_7 + 9)))
            int32_t edi_8 = edi_6 << 8 | eax_26
            int32_t ebp_8 = (((edx_11 << 8 | eax_17 u>> 0xffffffe8 | edx_13) << 8
                | edi_2 u>> 0xffffffe8 | edx_14) << 8 | edi_4 u>> 0xffffffe8 | edx_15) << 8
                | edi_6 u>> 0xffffffe8 | edx_16
            int32_t eax_28
            int32_t edx_17
            edx_17:eax_28 = sx.q(zx.d(*(ecx_7 + 8)))
            int32_t edi_10 = edi_8 << 8 | eax_28
            int32_t eax_30
            int32_t edx_18
            edx_18:eax_30 = sx.q(zx.d(*(ecx_7 + 7)))
            int32_t eax_31 = eax_30 | edi_10 << 8
            int32_t eax_34
            int32_t edx_19
            edx_19:eax_34 = sx.q(zx.d(*(ecx_7 + 6)))
            ebp = eax_31 << 8 | eax_34
            int32_t edi_14 = ((ebp_8 << 8 | edi_8 u>> 0xffffffe8 | edx_17) << 8
                | edi_10 u>> 0xffffffe8 | edx_18) << 8 | eax_31 u>> 0xffffffe8 | edx_19
            int32_t eax_36
            int32_t edx_20
            edx_20:eax_36 = sx.q(*arg4)
            var_14 = edi_14
            var_20 = eax_7
            var_1c = edx_6
            
            if (var_28 == eax_36 && edx_10 == edx_20)
                var_38 = eax_7
                var_34 = edx_6
                *arg5 = ebp
                arg5[1] = edi_14
            
            int32_t* eax_38 = arg2
            int32_t ecx_10 = arg3
            
            if (eax_38 == 0 || ecx_10 == 0)
            label_5c46f4:
                var_38 = 0xffffffff
                var_34 = 0xffffffff
            else
                while (true)
                    ecx_10 -= 1
                    
                    if (*eax_38 == var_28)
                        break
                    
                    eax_38 = &eax_38[1]
                    
                    if (ecx_10 == 0)
                        goto label_5c46f4
            
            edi = arg1
            int32_t edx_22 = edi[3]
            
            if (edx_22 s>= var_2c)
                if (edx_22 s> var_2c)
                    break
                
                if (edi[2] u>= var_30)
                    break
    
    if ((var_20 & var_1c) != 0xffffffff)
        break
    
    ecx = var_40_1
    eax = var_3c_1

if (var_34 s>= 0 && (var_34 s> 0 || var_38 u>= 0))
    return var_38

*arg4 = var_28
*arg5 = ebp
arg5[1] = var_14
return var_20
