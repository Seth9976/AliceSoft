// 函数: sub_631700
// 地址: 0x631700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx
char* var_4 = ecx

if (*(arg1 + 0x14) != 0)
    int32_t* eax_1 = arg2
    char var_2c
    var_4 = &var_2c
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t edx_1 = sub_401180(&var_2c, 0xffffffff, eax_1, 0)
    int32_t* eax_2 = *(arg1 + 0x10)
    void** ecx_3 = *eax_2
    sub_631b70(eax_2, edx_1, ecx_3, &arg2, ecx_3, eax_2, var_2c)
    int32_t* eax_3 = *(arg1 + 0x10)
    int32_t* esi_2 = arg2
    
    if (esi_2 != eax_3)
        int32_t* result = esi_2[9]
        
        if (esi_2 != *eax_3)
            sub_6319b0(&esi_2[2], arg1 + 0x10)
            sub_6319f0(arg1 + 0x10, &arg2, esi_2)
        
        (**result)()
        return result

return 0
