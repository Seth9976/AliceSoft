// 函数: sub_5cdb70
// 地址: 0x5cdb70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = arg1
void** eax = *(ecx + 4)
int32_t* ebx = arg3
void** ebp = eax[1]
void** edi = eax
eax.b = 1
char var_4 = 1
void** var_8

if (*(ebp + 0x29) == 0)
    do
        bool cond:1_1 = ebp[8] u< 0x10
        int32_t edi_1 = ebp[7]
        var_8 = ebp
        int32_t* ecx_1
        
        if (cond:1_1)
            ecx_1 = &ebp[3]
        else
            ecx_1 = ebp[3]
        
        int32_t esi_1 = ebx[7]
        int32_t eax_1 = esi_1
        
        if (esi_1 u>= edi_1)
            eax_1 = edi_1
        
        void* edx_1
        
        if (ebx[8] u< 0x10)
            edx_1 = &ebx[3]
        else
            edx_1 = ebx[3]
        
        eax = sub_402320(eax_1, edx_1, ecx_1, eax_1)
        bool cond:2_1 = eax s< 0
        
        if (eax == 0)
            if (esi_1 u>= edi_1)
                eax.b = esi_1 != edi_1
            else
                eax = 0xffffffff
            
            cond:2_1 = eax s< 0
        
        eax.b = cond:2_1
        var_4 = eax.b
        
        if (eax.b == 0)
            ebp = ebp[2]
        else
            ebp = *ebp
    while (*(ebp + 0x29) == 0)
    
    edi = var_8
    ecx = arg1

void** esi_2 = edi
var_8 = esi_2

if (eax.b != 0)
    if (edi == **(ecx + 4))
        *arg2 = *sub_4fda40(edi, ecx, &arg3, 1, ebx)
        arg2[1].b = 1
        return arg2
    
    sub_4fdca0(&var_8)
    esi_2 = var_8

if (sub_405dd0(&ebx[3], &esi_2[3]) != 0)
    *arg2 = *sub_4fda40(edi, arg1, &arg3, var_4, ebx)
    arg2[1].b = 1
    return arg2

if (ebx[8] u>= 0x10)
    int32_t var_1c_4 = ebx[3]
    sub_6b4d5b()

ebx[8] = 0xf
ebx[7] = 0
int32_t* var_1c_5 = ebx
ebx[3].b = 0
sub_6b4d5b()
*arg2 = esi_2
arg2[1].b = 0
return arg2
