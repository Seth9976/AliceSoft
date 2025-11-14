// 函数: sub_509410
// 地址: 0x509410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *arg1
int32_t var_8 = 2
int32_t* var_4
sub_42e070(edi + 0x14c, &var_4, &var_8)
int32_t* eax_1 = var_4
int32_t eax_2

if (eax_1 != *(edi + 0x150))
    eax_2 = eax_1[4]
else
    eax_2 = 0

eax_2.b = eax_2 s> 0

if (eax_2.b == 0 || arg1[0x3f] s< 2)
    int32_t* ecx_4 = arg1[0x10e]
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 4))()
        arg1[0x10e] = 0
    
    int32_t* ecx_5 = arg1[0x105]
    
    if (ecx_5 != 0)
        (*(*ecx_5 + 4))()
        arg1[0x105] = 0
    
    arg1[0x10d].b = 0
    sub_4b40e0(&arg1[0xec])
else if (arg1[0x10d].b != 0)
label_50949f:
    
    if (sub_51a0a0(&arg1[0xf9]) == 0)
        return 0
    
    if (sub_51a0a0(&arg1[0x105]) == 0)
        return 0
else
    if (sub_4b8840(arg1[1], &arg1[0xeb], *(edi + 0x140), *(edi + 0x144), arg1[0x1a6]) == 0)
        return 0
    
    if (arg1[0x10d].b != 0)
        goto label_50949f

return 1
