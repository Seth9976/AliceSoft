// 函数: sub_5c4b30
// 地址: 0x5c4b30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = arg1
int32_t eax = i[0x72]
int32_t result = 0
int32_t var_50 = 0
int32_t var_5c = 0xffffffff
void* var_48
int32_t eax_1
int32_t edx
eax_1, edx = sub_5c4290(i, &var_48, 0xffffffff, 0xffffffff)

if (edx s>= 0 && (edx s> 0 || eax_1 u>= 0))
    while (true)
        void* ebp_1 = var_48
        
        if ((*(ebp_1 + 5) & 2) != 0)
            break
        
        if ((((zx.d(*(ebp_1 + 0x11)) << 8 | zx.d(*(ebp_1 + 0x10))) << 8 | zx.d(*(ebp_1 + 0xf))) << 8
                | zx.d(*(ebp_1 + 0xe))) == eax)
            int32_t edx_8 = sub_5b9a70(&var_48, &i[0x1e])
            
            while (i != 0xffffff88)
                if (i[0x1e] == 0)
                    break
                
                int32_t var_70_1 = 1
                int32_t var_24
                int32_t eax_6
                eax_6, edx_8 = sub_5b9e20(&i[0x1e], &var_24, edx_8)
                
                if (eax_6 == 0)
                    break
                
                if (eax_6 s> 0)
                    void* esi_3 = *(arg2 + 0x1c)
                    int32_t var_38
                    __builtin_memset(&var_38, 0, 0x14)
                    int32_t eax_7 = var_24
                    int32_t var_2c_1 = eax_7
                    int32_t var_30_1 = eax_7
                    int32_t var_20
                    int32_t var_28_1 = var_20
                    int32_t eax_8
                    eax_8, edx_8 = sub_5b4d20(1, &var_38)
                    int32_t esi_4
                    
                    if (eax_8 == 0)
                        int32_t j = *(esi_3 + 8)
                        int32_t eax_9 = 0
                        
                        while (j s> 1)
                            j s>>= 1
                            eax_9 += 1
                        
                        int32_t eax_10
                        eax_10, edx_8 = sub_5b4d20(eax_9, &var_38)
                        
                        if (eax_10 != 0xffffffff)
                            esi_4 = *(esi_3 + (**(esi_3 + (eax_10 << 2) + 0x20) << 2))
                        else
                            esi_4 = 0xffffff78
                    else
                        esi_4 = 0xffffff79
                    
                    if (var_5c != 0xffffffff)
                        int32_t eax_15
                        edx_8:eax_15 = sx.q((var_5c + esi_4) s>> 2)
                        int32_t result_1 = result
                        result += eax_15
                        var_50 = adc.d(var_50, edx_8, result_1 + eax_15 u< result_1)
                    
                    var_5c = esi_4
            
            int32_t eax_17
            int32_t edx_10
            edx_10:eax_17 = sx.q(zx.d(*(ebp_1 + 0xd)))
            int32_t eax_20
            int32_t edx_12
            edx_12:eax_20 = sx.q(zx.d(*(ebp_1 + 0xc)))
            int32_t ecx_5 = eax_17 << 8 | eax_20
            int32_t eax_22
            int32_t edx_13
            edx_13:eax_22 = sx.q(zx.d(*(ebp_1 + 0xb)))
            int32_t ecx_7 = ecx_5 << 8 | eax_22
            int32_t eax_24
            int32_t edx_14
            edx_14:eax_24 = sx.q(zx.d(*(ebp_1 + 0xa)))
            int32_t ecx_9 = ecx_7 << 8 | eax_24
            int32_t eax_26
            int32_t edx_15
            edx_15:eax_26 = sx.q(zx.d(*(ebp_1 + 9)))
            int32_t ecx_11 = ecx_9 << 8 | eax_26
            int32_t esi_12 = (((edx_10 << 8 | eax_17 u>> 0xffffffe8 | edx_12) << 8
                | ecx_5 u>> 0xffffffe8 | edx_13) << 8 | ecx_7 u>> 0xffffffe8 | edx_14) << 8
                | ecx_9 u>> 0xffffffe8 | edx_15
            int32_t eax_28
            int32_t edx_16
            edx_16:eax_28 = sx.q(zx.d(*(ebp_1 + 8)))
            int32_t ecx_13 = ecx_11 << 8 | eax_28
            int32_t eax_30
            int32_t edx_17
            edx_17:eax_30 = sx.q(zx.d(*(ebp_1 + 7)))
            int32_t ecx_15 = ecx_13 << 8 | eax_30
            int32_t eax_32
            int32_t edx_18
            edx_18:eax_32 = sx.q(zx.d(*(ebp_1 + 6)))
            
            if (((ecx_15 << 8 | eax_32) & (((esi_12 << 8 | ecx_11 u>> 0xffffffe8 | edx_16) << 8
                    | ecx_13 u>> 0xffffffe8 | edx_17) << 8 | ecx_15 u>> 0xffffffe8 | edx_18))
                    != 0xffffffff)
                int32_t eax_35
                int32_t edx_20
                eax_35, edx_20 = sub_5b95e0(&var_48)
                int32_t edx_21 = sbb.d(edx_20, var_50, eax_35 u< result)
                result = eax_35 - result
                var_50 = edx_21
                break
            
            i = arg1
        
        int32_t eax_33
        int32_t edx_19
        eax_33, edx_19 = sub_5c4290(i, &var_48, 0xffffffff, 0xffffffff)
        
        if (edx_19 s<= 0)
            if (edx_19 s< 0)
                break
            
            if (eax_33 u< 0)
                break
    
    if (var_50 s<= 0 && (var_50 s< 0 || result u< 0))
        result = 0
        var_50 = 0

return result
