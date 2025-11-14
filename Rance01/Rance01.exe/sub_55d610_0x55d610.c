// 函数: sub_55d610
// 地址: 0x55d610
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_2c
int32_t eax_1 = data_78c474 ^ &var_2c
int32_t* ebx = arg2
int32_t* var_24 = ebx
int32_t var_28 = *(arg1[1] + 0x34)
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
bool cond:0 = sub_560510(&var_20, sub_401270(&var_20, 3, 0x74c690), ebx).b == 0

if (var_c u>= 0x10)
    int32_t var_40_1 = var_20.d
    sub_6b4d5b()

int32_t* eax_4

if (cond:0 == 0 && sub_5604b0(ebx, 0).b != 0)
    int32_t edi_1 = var_28
    
    if (sub_5604b0(ebx, edi_1).b != 0)
        void* const eax_8 = (*(*arg1 + 4))()
        
        if (eax_8 == 0)
            eax_8 = &data_72d943
        
        bool var_29_1 = sub_560510(&var_20, sub_402be0(&var_20, eax_8), ebx).b == 0
        
        if (var_c u>= 0x10)
            int32_t var_40_3 = var_20.d
            sub_6b4d5b()
        
        if (var_29_1 == 0 && sub_5604b0(ebx, (*(*arg1 + 8))()).b != 0)
            int32_t eax_17
            
            if (edi_1 - 0xe u> 0x24)
                sub_604c90("IVMArray2::Save()\n")
            else
                switch (edi_1 + &jump_table_55d938[0]:2)
                    case &lookup_table_55d948, &lookup_table_55d948[1], &lookup_table_55d948[0x10], 
                            &lookup_table_55d948[0x24]
                        int32_t esi_1 = 0
                        
                        if ((*(*arg1 + 8))() s<= 0)
                        label_55d900:
                            eax_17.b = 1
                            sub_6b4885(eax_1 ^ &var_2c)
                            return eax_17
                        
                        while (true)
                            eax_4 = (*(*arg1 + 0x10))(esi_1)
                            
                            if (eax_4 == 0)
                                break
                            
                            if (sub_5604b0(ebx, *eax_4).b == 0)
                                break
                            
                            esi_1 += 1
                            
                            if (esi_1 s>= (*(*arg1 + 8))())
                                int32_t eax_21
                                eax_21.b = 1
                                sub_6b4885(eax_1 ^ &var_2c)
                                return eax_21
                    case &lookup_table_55d948[2]
                        int32_t esi_2 = 0
                        
                        if ((*(*arg1 + 8))() s<= 0)
                            goto label_55d900
                        
                        while (true)
                            eax_4 = (*(*arg1 + 0x10))(esi_2)
                            
                            if (eax_4 == 0)
                                break
                            
                            ebx.b = sub_560510(&var_20, sub_402be0(&var_20, (**eax_4)()), ebx) == 0
                            sub_401110(&var_20)
                            
                            if (ebx.b != 0)
                                break
                            
                            esi_2 += 1
                            
                            if (esi_2 s>= (*(*arg1 + 8))())
                                int32_t eax_30
                                eax_30.b = 1
                                sub_6b4885(eax_1 ^ &var_2c)
                                return eax_30
                            
                            ebx = var_24
                    case &lookup_table_55d948[3]
                        int32_t ebx_1 = 0
                        
                        if ((*(*arg1 + 8))() s> 0)
                            do
                                eax_4 = (*(*arg1 + 0x10))(ebx_1)
                                
                                if (eax_4 == 0)
                                    goto label_55d92b
                                
                                int32_t* esi_3 = arg1[1]
                                var_28 = *eax_4
                                
                                if (sub_54f990(esi_3, ebx_1, &var_28).b == 0)
                                    goto label_55d92b
                                
                                eax_4 = sub_5529f0(esi_3[5], ebx_1, var_28)
                                
                                if (eax_4 == 0)
                                    goto label_55d92b
                                
                                int32_t* esi_5 = (*(*sub_5521d0(eax_4) + 0x24))()
                                
                                if (esi_5 == 0)
                                    goto label_55d92b
                                
                                if (sub_5604b0(var_24, (*(*esi_5 + 0x14))()).b == 0)
                                    goto label_55d92b
                                
                                if ((*(*esi_5 + 0x14))() s> 0)
                                    void* eax_42 = (*(*esi_5 + 0x14))()
                                    
                                    if (eax_42 != 0
                                            && sub_560450(var_24, (*(*esi_5 + 0x18))(), eax_42).b
                                            == 0)
                                        goto label_55d92b
                                
                                (*(*esi_5 + 4))()
                                ebx_1 += 1
                                eax_17 = (*(*arg1 + 8))()
                            while (ebx_1 s< eax_17)
                        
                        goto label_55d900
                    case &lookup_table_55d948[4], &lookup_table_55d948[5], &lookup_table_55d948[6], 
                            &lookup_table_55d948[7], &lookup_table_55d948[8], 
                            &lookup_table_55d948[9], &lookup_table_55d948[0xa], 
                            &lookup_table_55d948[0xb], &lookup_table_55d948[0xc], 
                            &lookup_table_55d948[0xd], &lookup_table_55d948[0xe], 
                            &lookup_table_55d948[0xf], &lookup_table_55d948[0x11], 
                            &lookup_table_55d948[0x12], &lookup_table_55d948[0x13], 
                            &lookup_table_55d948[0x14], &lookup_table_55d948[0x15], 
                            &lookup_table_55d948[0x16], &lookup_table_55d948[0x17], 
                            &lookup_table_55d948[0x18], &lookup_table_55d948[0x19], 
                            &lookup_table_55d948[0x1a], &lookup_table_55d948[0x1b], 
                            &lookup_table_55d948[0x1c], &lookup_table_55d948[0x1d], 
                            &lookup_table_55d948[0x1e], &lookup_table_55d948[0x1f], 
                            &lookup_table_55d948[0x20], &lookup_table_55d948[0x21], 
                            &lookup_table_55d948[0x22], &lookup_table_55d948[0x23]
                        sub_604c90("IVMArray2::Save()\n")

label_55d92b:
eax_4.b = 0
sub_6b4885(eax_1 ^ &var_2c)
return eax_4
