// 函数: sub_546d80
// 地址: 0x546d80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
arg1[0xac] -= 4
uint32_t ebx = *arg1[0xac]
arg1[0xac] -= 4
float esi = *arg1[0xac]
arg1[0xac] -= 4
int32_t ebp = *arg1[0xac]
arg1[0xac] -= 4
int32_t ecx_5 = *arg1[0xac]
arg1[0xac] -= 4
int32_t ecx_7 = *arg1[0xac]
arg1[0xac] -= 4
int32_t* eax_2 = sub_5466f0("A_FIND", *arg1[0xac], ebp, esi, arg1, arg1, ecx_7)

if (eax_2 != 0)
    int32_t eax_3 = eax_2[0xd]
    
    if (eax_3 - 0xe u> 0x24)
    label_546e93:
        int32_t var_18_6 = eax_3
        sub_53d1c0(eax_3, eax_2, arg1, 0x74ff60)
        return 
    
    uint32_t ecx_9 = zx.d(*(eax_3 + &jump_table_546eac[2]:2))
    
    switch (ecx_9)
        case 0
            if (sub_546ef0(ecx_9, eax_2, ecx_5, arg1, ebp, esi, ebx).b != 0)
                eax_2.b = 1
                return 
        case 1
            int80_t st0_1
            st0_1, eax_2 = sub_546f90(ecx_5, eax_2, ebp, arg1, esi, ebx)
            
            if (eax_2.b == 0)
                return 
            
            eax_2.b = 1
            return 
        case 2
            if (sub_547020(ecx_9, eax_2, ecx_5, arg1, ebp, esi, ebx).b == 0)
                return 
            
            eax_2.b = 1
            return 
        case 3
            if (sub_5471c0(eax_2, ecx_5, arg1, ebp, esi, ebx).b == 0)
                return 
            
            eax_2.b = 1
            return 
        case 4
            if (sub_547260(ecx_9, eax_2, ecx_5, arg1, ebp, esi, ebx).b == 0)
                return 
            
            eax_2.b = 1
            return 
        case 5
            goto label_546e93

eax_2.b = 0
