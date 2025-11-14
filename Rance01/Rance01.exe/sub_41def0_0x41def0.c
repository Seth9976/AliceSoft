// 函数: sub_41def0
// 地址: 0x41def0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = (*(arg1 + 0x24) - *(arg1 + 0x20)) s>> 2
int32_t ebp = 0
int32_t result_1 = result

if (result s> 0)
    do
        if (*(*(arg1 + 0x10) + (ebp << 2)) != 0)
            int32_t ebx_1 = *(*(arg1 + 0x20) + (ebp << 2))
            
            if (ebx_1 == 1)
                void* eax_3 = sub_5f7370(*data_797da0, *(arg1 + 4))
                
                if (eax_3 != 0 && *(*(eax_3 + 0xc) + 0x4c) != 0)
                    bool cond:0_1 = *(arg1 + 0x31) == 0
                    *(arg1 + 0x30) = 0
                    
                    if (cond:0_1)
                        sub_41e890(arg1)
                    else
                        char* edi_2 = data_797d44
                        int32_t var_8 = 0
                        int32_t var_c = 0
                        
                        if (sub_424db0(edi_2) != 0 && (***(edi_2 + 8))(&var_8, &var_c) != 0)
                            sub_41d680(arg1 + 0x58, var_8, var_c)
                            sub_41e8f0(arg1)
            
            for (int32_t* i = *(arg1 + 0x58); i != *(arg1 + 0x5c); i = &i[1])
                (*(**i + 0x3c))(*(arg1 + 0x68), ebx_1)
        
        result = *(arg1 + 0x10)
        *(result + (ebp << 2)) = 0
        ebp += 1
    while (ebp s< result_1)

return result
