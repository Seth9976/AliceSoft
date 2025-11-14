// 函数: sub_5d6130
// 地址: 0x5d6130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
char* esi = data_797d94

if (sub_5d57f0(esi) != 0)
    void* esi_1 = *(esi + 0x38)
    bool cond:0_1 = *(esi_1 + 4) == 0
    int32_t arg_4 = arg_4
    
    if (not(cond:0_1))
        sub_42e070(esi_1 + 0x14, &var_4, &arg_4)
        int32_t* eax_5 = var_4
        
        if (eax_5 != *(esi_1 + 0x18))
            int32_t* eax_6 = eax_5[4]
            
            if (eax_6 != 0)
                return (*(**eax_6 + 0x34))()

return 0
