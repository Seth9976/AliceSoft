// 函数: sub_6040d0
// 地址: 0x6040d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t eax = arg3
int128_t* ebp = arg2
void* ebx = ebp * 2 + 2
int128_t* var_4 = ebp
bool cond:0 = ebx != eax

if (ebx s< eax)
    do
        void** edx_1 = &arg1[ebx * 0x1c]
        int128_t* ecx_3 = edx_1[-3]
        void* eax_3 = &edx_1[-7]
        
        if (edx_1[-2] u>= 0x10)
            eax_3 = *eax_3
        
        int128_t* esi_1 = edx_1[4]
        int128_t* edi_1 = esi_1
        
        if (esi_1 u>= ecx_3)
            edi_1 = ecx_3
        
        if (edx_1[5] u>= 0x10)
            edx_1 = *edx_1
        
        int32_t eax_4 = sub_402320(eax_3, edx_1, eax_3, edi_1)
        bool cond:1_1 = eax_4 s>= 0
        
        if (eax_4 != 0)
            goto label_60414d
        
        if (esi_1 u< ecx_3)
            ebx -= 1
        else
            int32_t edx_2
            edx_2.b = esi_1 != ecx_3
            cond:1_1 = edx_2 s>= 0
        label_60414d:
            
            if (not(cond:1_1))
                ebx -= 1
        
        sub_401ef0(&arg1[ebp * 0x1c], &arg1[ebx * 0x1c])
        ebp = ebx
        ebx = ebx * 2 + 2
    while (ebx s< arg3)
    
    eax = arg3
    cond:0 = ebx != eax

if (not(cond:0))
    sub_401ef0(&arg1[ebp * 0x1c], &arg1[eax * 0x1c - 0x1c])
    ebp = arg3 - 1

int32_t var_18_2 = arg4
int128_t* var_1c = var_4
return sub_604270(ebp, var_4, arg4, arg1)
