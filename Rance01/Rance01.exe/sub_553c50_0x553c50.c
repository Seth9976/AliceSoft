// 函数: sub_553c50
// 地址: 0x553c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_20
int32_t eax_1 = data_78c474 ^ &var_20

if (arg3 u< (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
    uint32_t ebp_1 = *(*(arg2 + 8) + (arg3 << 2))
    
    if (ebp_1 != 0)
        int32_t eax_3 = sub_5527e0(arg2)
        int32_t eax_4 = eax_3 << 2
        *(*(arg2 + 8) + eax_4) = sub_5524b0(arg2 + 0x20)
        *arg1 = eax_3
        
        if (eax_3 s>= 0 && eax_3 u< (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
            int32_t* esi_1 = *(eax_4 + *(arg2 + 8))
            
            if (esi_1 != 0)
                esi_1[0xf] = *(ebp_1 + 0x3c)
                esi_1[0xc] = *(ebp_1 + 0x30)
                esi_1[0xd] = *(ebp_1 + 0x34)
                esi_1[0xe] = *(ebp_1 + 0x38)
                
                if (*(ebp_1 + 0x40) == 0)
                    int32_t eax_9
                    eax_9.b = 1
                    sub_6b4885(eax_1 ^ &var_20)
                    return eax_9
                
                void var_14
                
                if (sub_551170(ebp_1, &var_14).b != 0
                        && sub_550ca0(esi_1, *(ebp_1 + 0x3c), &var_14, 0).b != 0)
                    bool cond:0 = sub_5511e0(esi_1, ebp_1) != 0
                    sub_6b4885(eax_1 ^ &var_20)
                    return cond:0

int32_t* eax_2
eax_2.b = 0
sub_6b4885(eax_1 ^ &var_20)
return eax_2
