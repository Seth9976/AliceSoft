// 函数: sub_509230
// 地址: 0x509230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
void* esi = *ebp
arg1 = 2
int32_t* var_c
sub_42e070(esi + 0x14c, &var_c, &arg1)
int32_t* eax_1 = var_c
int32_t eax_2

if (eax_1 != *(esi + 0x150))
    eax_2 = eax_1[4]
else
    eax_2 = 0

int32_t edi = ebp[0xe0]
int32_t ebx
ebx.b = eax_2 s> 0
int32_t result_1 = (*(*ebp[1] + 0x5c))()
int32_t result

if ((*(*ebp[1] + 0x60))(result_1) != 0)
    result = result_1
else
    sub_51ddc0(0x754740)
    result = 0

if (ebx.b == 0 || ebp[0x3f] s< 2)
    int32_t* ecx_8 = ebp[0xe2]
    
    if (ecx_8 != 0)
        (*(*ecx_8 + 4))()
        ebp[0xe2] = 0
    
    ebp[0xea].b = 0
    int32_t* ecx_9 = ebp[0xdc]
    
    if (ecx_9 != 0)
        (*(*ecx_9 + 4))()
        ebp[0xdc] = 0
    
    ebp[0xdd] = 0
    ebp[0xde] = 0
    ebp[0xe0] = 0
    ebp[0xdf].b = 0
    ebp[0xe1].b = 0
    result.b = 1
    return result

if (ebp[0xe1].b == 0 || edi != result)
    void* eax_6 = *ebp
    int32_t ecx_3 = *(eax_6 + 0x138)
    int32_t edx_2 = *(eax_6 + 0x13c)
    int32_t* edi_1 = *(eax_6 + 0x140)
    int32_t ebx_1 = *(eax_6 + 0x144)
    int32_t edx_3 = *(*ebp[1] + 0x5c)
    var_c = edi_1
    arg1 = ebx_1
    int32_t esi_2 = edx_3()
    
    if ((*(*ebp[1] + 0x60))(esi_2) == 0)
        sub_51ddc0(0x754740)
        esi_2 = 0
    
    if (sub_50a8a0(&ebp[0xdc], esi_2, edi_1, ebx_1, 1, 1, ebp[1]) == 0)
        return 0
    
    long double x87_r7_1 = float.t(1)
    float var_24_4 = fconvert.s(x87_r7_1)
    
    if (sub_519f30(ebp[1], &ebp[0xe2], fconvert.s(float.t(ecx_3)), fconvert.s(float.t(edx_2)), 
            fconvert.s(float.t(var_c)), fconvert.s(float.t(arg1)), -nanf, fconvert.s(x87_r7_1)) == 0)
        return 0

return sub_51a0a0(&ebp[0xe2]) != 0
