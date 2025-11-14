// 函数: sub_434bc0
// 地址: 0x434bc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_2 = arg1[1]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    arg1[1] = 0

int32_t* esi = *arg1

if (esi != 0)
    *esi -= 1
    
    if (*esi s<= 0)
        sub_40c6b0(esi)
    
    *arg1 = 0

int32_t* ecx = arg1[0x35]

if (ecx != 0)
    (*(*ecx + 4))()
    arg1[0x35] = 0

int32_t* esi_1 = arg1[0x34]

if (esi_1 != 0)
    *esi_1 -= 1
    
    if (*esi_1 s<= 0)
        int32_t* ecx_1 = esi_1[1]
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 4))()
            __builtin_memset(&esi_1[1], 0, 0x14)
        
        int32_t* var_c_1 = esi_1
        sub_6b4d5b()
    
    arg1[0x34] = 0

arg1[2] = 0
arg1[3] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[9] = 0xff
arg1[0xa] = 0xff
arg1[0xb] = 0xff
arg1[0xc] = 0xff
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[8] = 0
return 0xff
