// 函数: sub_575160
// 地址: 0x575160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = arg1
void** eax = *(ecx + 4)
void** ebx = arg3
int32_t* esi = eax[1]
void** edi = eax
eax.b = 1
int32_t* var_c = esi
char var_8 = 1

if (*(esi + 0x45) == 0)
    int32_t* var_4_1
    
    while (true)
        var_4_1 = esi
        
        if (sub_575ee0(&esi[3], &ebx[3]).b == 0)
            if (sub_575f80(&esi[3], &ebx[3]).b != 0)
                eax.b = 0
            else
                int32_t ebx_1 = esi[0xd]
                int32_t* ecx_1
                
                if (esi[0xe] u< 0x10)
                    ecx_1 = &esi[9]
                else
                    ecx_1 = esi[9]
                
                int32_t esi_1 = ebx[0xd]
                int32_t eax_1 = esi_1
                
                if (esi_1 u>= ebx_1)
                    eax_1 = ebx_1
                
                void* edx_1
                
                if (ebx[0xe] u< 0x10)
                    edx_1 = &ebx[9]
                else
                    edx_1 = ebx[9]
                
                eax = sub_402320(eax_1, edx_1, ecx_1, eax_1)
                bool cond:1_1 = eax s>= 0
                
                if (eax != 0)
                    goto label_575201
                
                if (esi_1 u< ebx_1)
                label_575203:
                    esi = var_c
                    ebx = arg3
                    eax.b = 1
                else
                    eax.b = esi_1 != ebx_1
                    cond:1_1 = eax s>= 0
                label_575201:
                    
                    if (not(cond:1_1))
                        goto label_575203
                    
                    sub_405dd0(&ebx[9], &esi[9])
                    esi = var_c
                    ebx = arg3
                    eax.b = 0
        else
            eax.b = 1
        
        var_8 = eax.b
        
        if (eax.b == 0)
            var_c = esi[2]
        else
            var_c = *esi
        
        if (*(var_c + 0x45) != 0)
            break
        
        esi = var_c
    
    edi = var_4_1
    ecx = arg1

void** esi_2 = edi
arg3 = esi_2

if (eax.b != 0)
    if (edi == **(ecx + 4))
        *arg2 = *sub_575310(edi, ecx, &arg3, 1, ebx)
        arg2[1].b = 1
        return arg2
    
    sub_5754f0(&arg3)
    esi_2 = arg3

if (sub_572ee0(&ebx[3], &esi_2[3]) != 0)
    *arg2 = *sub_575310(edi, arg1, &arg3, var_8, ebx)
    arg2[1].b = 1
    return arg2

if (ebx[0xe] u>= 0x10)
    int32_t var_20_7 = ebx[9]
    sub_6b4d5b()

ebx[0xe] = 0xf
ebx[0xd] = 0
void** var_20_8 = ebx
ebx[9].b = 0
sub_6b4d5b()
*arg2 = esi_2
arg2[1].b = 0
return arg2
