// 函数: sub_56dc50
// 地址: 0x56dc50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[2] == 0 || arg1[6] == 0 || arg1[1].b != 0 || arg1[3] == 0 || arg1[4] == 0)
    arg1.b = 0
    return arg1

void* edi = *(*arg1 + 0xc)
char eax_1

if (edi != 0)
    eax_1 = sub_58a680(edi)

if (edi == 0 || eax_1 != 0)
    (*(*arg1[2] + 0x74))()
    int32_t* ecx_2 = arg1[2]
    int32_t* var_c_1 = ecx_2
    
    if ((*(*ecx_2 + 0x44))(0, fconvert.s(float.t(1))) != 0 && (*(*arg1[2] + 0x4c))() != 0
            && (*(*arg1[3] + 0x14))() != 0 && (*(*arg1[4] + 8))() != 0)
        if (sub_56e0a0(arg1) != 0)
            if ((*(*arg1[4] + 0xc))() != 0 && (*(*arg1[3] + 0x18))() != 0)
                int32_t ebx
                int32_t var_c_3 = ebx
                int32_t ebx_1 = arg1[0x13]
                
                if (ebx_1 == 1 && arg1[0x11] == 0)
                    ebx_1 = 0
                
                sub_56d9e0(arg1, ebx_1)
                char eax_18
                
                if (ebx_1 == 1)
                    int32_t* ecx_11 = arg1[3]
                    eax_18 = sub_56d8b0(arg1, (*(*ecx_11 + 0x1c))((*(*ecx_11 + 0x20))()))
                
                if ((ebx_1 != 1 || eax_18 != 0) && (*(*arg1[3] + 0x24))(0) != 0
                        && (*(*arg1[0x10] + 0x20))(arg3, arg2) != 0)
                    eax_18 = (*(*arg1[0x10] + 0x2c))()
                    
                    if (eax_18 != 0)
                        if (ebx_1 == 1 && arg1[0x11] != 0)
                            eax_18 = (*(*arg1[0x11] + 0x14))()
                        
                        if ((ebx_1 != 1 || arg1[0x11] == 0 || eax_18 != 0)
                                && (*(*arg1[2] + 0x50))() != 0)
                            return (*(*arg1[2] + 0x54))() != 0
        else
            (*(*arg1[3] + 0x18))()
            (*(*arg1[2] + 0x50))()
            (*(*arg1[2] + 0x54))()

return 0
