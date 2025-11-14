// 函数: sub_55f980
// 地址: 0x55f980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_30
int32_t eax_1 = data_78c474 ^ &var_30
var_30 = arg1
void* eax_3 = arg1[1]
int32_t ecx = *(eax_3 + 0x1c)
void* eax_5 = *(*(eax_3 + 0x14) + 4)

if (ecx u< (*(eax_5 + 0x12c) - *(eax_5 + 0x128)) s>> 4)
    int32_t ecx_1 = ecx << 4
    
    if (ecx_1 != neg.d(*(eax_5 + 0x128)))
        void* ebp_1 = *(ecx_1 + *(eax_5 + 0x128) + 4)
        
        if (ebp_1 != 0)
            int32_t var_c = 0xf
            int32_t var_10 = 0
            char var_20 = 0
            int32_t* ebx
            ebx.b = sub_560510(&var_20, sub_401270(&var_20, 3, 0x74c394), arg2).b == 0
            
            if (var_c u>= 0x10)
                int32_t var_44_1 = var_20.d
                sub_6b4d5b()
            
            int32_t* eax_8
            
            if (ebx.b == 0)
                int32_t edx_4
                eax_8, edx_4 = sub_5604b0(arg2, 0)
                
                if (eax_8.b != 0 && sub_560510(ebp_1 + 0x10, edx_4, arg2).b != 0)
                    int32_t eax_12
                    int32_t edx_5
                    edx_5:eax_12 = muls.dp.d(0x2e8ba2e9, *(ebp_1 + 0x38) - *(ebp_1 + 0x34))
                    int32_t edx_6 = edx_5 s>> 3
                    
                    if (sub_5604b0(arg2, (edx_6 u>> 0x1f) + edx_6).b != 0)
                        void* ebx_1 = ebp_1
                        int32_t esi_2 = *(ebx_1 + 0x34)
                        int32_t eax_17
                        int32_t edx_7
                        edx_7:eax_17 = muls.dp.d(0x2e8ba2e9, *(ebx_1 + 0x38) - esi_2)
                        int32_t edx_8 = edx_7 s>> 3
                        int32_t ebp_2 = 0
                        
                        if ((edx_8 u>> 0x1f) + edx_8 s> 0)
                            int32_t var_28_1 = 0
                            
                            while (true)
                                if (sub_5604b0(arg2, *(var_28_1 + esi_2 + 0x1c)).b == 0)
                                    goto label_55fc97
                                
                                int32_t* eax_31
                                
                                switch (*(var_28_1 + esi_2 + 0x1c))
                                    case 0, 0xa, 0xb, 0x1b, 0x2f
                                        eax_8 = (*(*var_30 + 0xc))(ebp_2)
                                        
                                        if (eax_8 == 0)
                                            goto label_55fc97
                                        
                                        if (sub_5604b0(arg2, *eax_8).b == 0)
                                            goto label_55fc97
                                        
                                    label_55fc42:
                                        esi_2 = *(ebx_1 + 0x34)
                                        var_28_1 += 0x2c
                                        int32_t edx_23
                                        edx_23:eax_17 =
                                            muls.dp.d(0x2e8ba2e9, *(ebx_1 + 0x38) - esi_2)
                                        int32_t edx_24 = edx_23 s>> 3
                                        ebp_2 += 1
                                        
                                        if (ebp_2 s>= (edx_24 u>> 0x1f) + edx_24)
                                            break
                                        
                                        continue
                                    case 0xc
                                        eax_8 = (*(*var_30 + 0xc))(ebp_2)
                                        
                                        if (eax_8 == 0)
                                            goto label_55fc97
                                        
                                        ebx_1.b = sub_560510(&var_20, 
                                            sub_402be0(&var_20, (**eax_8)()), arg2) == 0
                                        sub_401110(&var_20)
                                        
                                        if (ebx_1.b != 0)
                                            goto label_55fc97
                                        
                                        ebx_1 = ebp_1
                                        goto label_55fc42
                                    case 0xd
                                        int32_t* esi_5 = var_30[1]
                                        eax_8 = sub_54fa10(esi_5, ebp_2)
                                        
                                        if (eax_8 == 0)
                                            goto label_55fc97
                                        
                                        eax_8 = sub_5529f0(esi_5[5], ebp_2, *eax_8)
                                        
                                        if (eax_8 == 0)
                                            goto label_55fc97
                                        
                                        eax_31 = sub_5521d0(eax_8)
                                    label_55fbe2:
                                        int32_t* esi_9 = (*(*eax_31 + 0x24))()
                                        
                                        if (esi_9 == 0)
                                            goto label_55fc97
                                        
                                        if (sub_5604b0(arg2, (*(*esi_9 + 0x14))()).b == 0)
                                            goto label_55fc97
                                        
                                        if ((*(*esi_9 + 0x14))() s> 0)
                                            void* eax_40 = (*(*esi_9 + 0x14))()
                                            
                                            if (eax_40 != 0 &&
                                                    sub_560450(arg2, (*(*esi_9 + 0x18))(), eax_40).b == 0)
                                                goto label_55fc97
                                        
                                        (*(*esi_9 + 4))()
                                        goto label_55fc42
                                    case 0xe, 0xf, 0x10, 0x11, 0x32, 0x42
                                        int32_t* esi_7 = var_30[1]
                                        eax_8 = sub_54fa10(esi_7, ebp_2)
                                        
                                        if (eax_8 == 0)
                                            goto label_55fc97
                                        
                                        eax_8 = sub_5529f0(esi_7[5], ebp_2, *eax_8)
                                        
                                        if (eax_8 == 0)
                                            goto label_55fc97
                                        
                                        eax_31 = sub_552250(eax_8)
                                        goto label_55fbe2
                                
                                sub_604c90("IVMStruct3::Save()\n")
                                goto label_55fc97
                        
                        eax_17.b = 1
                        sub_6b4885(eax_1 ^ &var_30)
                        return eax_17
            
        label_55fc97:
            eax_8.b = 0
            sub_6b4885(eax_1 ^ &var_30)
            return eax_8

void* eax_6
eax_6.b = 0
sub_6b4885(eax_1 ^ &var_30)
return eax_6
