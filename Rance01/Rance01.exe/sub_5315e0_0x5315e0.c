// 函数: sub_5315e0
// 地址: 0x5315e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_28
int32_t eax_1 = data_78c474 ^ &var_28
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x38e38e39, arg3[0xd] - arg3[0xc])
int32_t edx_1 = edx s>> 3
int32_t i

if (arg1 s< (edx_1 u>> 0x1f) + edx_1)
    int32_t* esi_1 = arg3[0xc] + arg1 * 0x24
    int32_t edx_3 = *arg4
    
    if (edx_3 s>= 0)
        int32_t ebp_3 = (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2
        int32_t var_24
        int32_t eax_6
        
        if (edx_3 u< ebp_3)
            eax_6 = *(*(arg2 + 8) + (edx_3 << 2))
            var_24 = eax_6
        
        if (edx_3 u>= ebp_3 || eax_6 == 0)
            sub_604c90("CGlobalLoader::WriteArray()\n")
            enum MESSAGEBOX_RESULT eax_7
            eax_7.b = 0
            sub_6b4885(eax_1 ^ &var_28)
            return eax_7
        
        int32_t ecx_7 = *esi_1
        int32_t var_18[0x4]
        
        if (ecx_7 s> 0)
            i = 0
            
            if (ecx_7 s> 0)
                do
                    int32_t ecx_8 = esi_1[1]
                    
                    if (i s>= (esi_1[2] - ecx_8) s>> 2)
                        goto label_531627
                    
                    var_18[i] = *(ecx_8 + (i << 2))
                    i += 1
                while (i s< *esi_1)
        
        if (*(var_24 + 0x40) == 0)
        label_5316f2:
            int32_t edx_5 = *esi_1
            
            if (edx_5 s<= 0)
                i.b = 1
                sub_6b4885(eax_1 ^ &var_28)
                return i
            
            i = *arg4
            
            if (i u< (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
                int32_t* ecx_14 = *(*(arg2 + 8) + (i << 2))
                
                if (ecx_14 != 0 && sub_550ca0(ecx_14, edx_5, &var_18, 0).b != 0)
                    i = *arg4
                    
                    if (i u< (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
                        i = *(*(arg2 + 8) + (i << 2))
                        
                        if (i != 0)
                            var_24 = 0
                            bool eax_9 = sub_5317b0(arg3, *esi_1, esi_1, i, &var_24, arg2) != 0
                            sub_6b4885(eax_1 ^ &var_28)
                            return eax_9
        else if (edx_3 u< ebp_3)
            int32_t edx_4 = *(*(arg2 + 8) + (edx_3 << 2))
            
            if (edx_4 != 0 && sub_5514f0(edx_4).b != 0)
                goto label_5316f2
else
    sub_604c90("WriteArray error")

label_531627:
i.b = 0
sub_6b4885(eax_1 ^ &var_28)
return i
