// 函数: sub_40d240
// 地址: 0x40d240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = arg1
int32_t* var_4
sub_42e070(arg3 + 8, &var_4, &var_8)
int32_t* eax_1 = var_4

if (eax_1 != *(arg3 + 0xc))
    void* esi_1 = eax_1[4]
    
    if (esi_1 != 0)
        int32_t* ecx_1 = *(esi_1 + 0xd0)
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 4))()
            *(esi_1 + 0xd0) = 0
        
        (**arg4)()
        *(esi_1 + 0xd0) = arg4
        int32_t eax_4
        eax_4.b = 1
        return eax_4

eax_1.b = 0
return eax_1
