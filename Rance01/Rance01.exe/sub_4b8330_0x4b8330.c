// 函数: sub_4b8330
// 地址: 0x4b8330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *arg2
int32_t* result

if (ecx != 0)
    int32_t edx_3
    edx_3:result = muls.dp.d(0x2aaaaaab, *(arg1 + 0x74) - *(arg1 + 0x70))
    int32_t edx_4 = edx_3 s>> 2
    int32_t ebp_3 = (edx_4 u>> 0x1f) + edx_4
    
    if (ebp_3 s<= 0)
        result.b = 1
        return result
    
    int32_t* esi_1 = (*(*ecx + 0x14))()
    
    if (esi_1 != 0)
        int32_t ebx_1 = 0
        
        if (ebp_3 s> 0)
            int32_t ebp_4 = 0
            
            do
                float var_18
                sub_4b8190(arg1, arg3, &var_18, ebx_1)
                float ecx_4 = *(*(arg1 + 0x70) + ebp_4 + 0xc) * 0x2c + *(arg1 + 0x60)
                float var_c
                sub_4b8470(arg3, ecx_4 i+ 0xc, &var_c, ecx_4, ecx_4 i+ 0x1c)
                long double x87_r6_1 = fconvert.t(0.014999999664723873)
                ebx_1 += 1
                esi_1 = &esi_1[8]
                ebp_4 += 0x18
                long double x87_r6_5 = fconvert.t(var_c)
                float var_24_1 =
                    fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_18) * x87_r6_1)) + x87_r6_5)
                float var_8
                long double x87_r6_7 = fconvert.t(var_8)
                float var_4
                long double x87_r5_4 = fconvert.t(var_4)
                esi_1[-8] = fconvert.s(x87_r6_5)
                esi_1[-7] = fconvert.s(x87_r6_7)
                esi_1[-6] = fconvert.s(x87_r5_4)
                esi_1[-5] = 0xffff0000
                esi_1[-4] = fconvert.s(fconvert.t(var_24_1))
                float var_14
                esi_1[-3] = fconvert.s(fconvert.t(fconvert.s(x87_r6_7
                    + fconvert.t(fconvert.s(fconvert.t(var_14) * x87_r6_1)))))
                float var_10
                esi_1[-2] = fconvert.s(fconvert.t(fconvert.s(x87_r5_4
                    + fconvert.t(fconvert.s(x87_r6_1 * fconvert.t(var_10))))))
                esi_1[-1] = 0xff00ff00
            while (ebx_1 s< ebp_3)
        
        if ((*(**arg2 + 0x18))().b != 0)
            arg2[1].b = 1
            result.b = 1
            return result

result.b = 0
return result
