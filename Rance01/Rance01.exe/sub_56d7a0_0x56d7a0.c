// 函数: sub_56d7a0
// 地址: 0x56d7a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 8) != 0 && *(arg1 + 0x18) != 0 && *(arg1 + 0x14) != 0 && *(arg1 + 4) == 0
        && (*(**(arg1 + 0x14) + 0x10))().b != 0)
    int32_t __saved_edi_5
    int32_t __saved_edi = __saved_edi_5
    (*(**(arg1 + 8) + 0x74))()
    int32_t* __saved_edi_4 = *(arg1 + 8)
    int32_t* __saved_edi_1 = __saved_edi_4
    (*(*__saved_edi_4 + 0x44))(0, fconvert.s(float.t(1)))
    int32_t ebx = *(arg1 + 0x4c)
    
    if (ebx == 1 && *(arg1 + 0x44) == 0)
        ebx = 0
    
    sub_56d9e0(arg1, ebx)
    char eax_4 = (*(**(arg1 + 8) + 0x4c))()
    
    if (eax_4 != 0)
        if (ebx == 1)
            int32_t* ecx_4 = *(arg1 + 0x14)
            eax_4 = sub_56d8b0(arg1, (*(*ecx_4 + 0x20))((*(*ecx_4 + 0x24))()))
        
        if ((ebx != 1 || eax_4 != 0) && (*(**(arg1 + 0x14) + 0x30))(0) != 0
                && (*(**(arg1 + 0x40) + 0x20))(arg2) != 0)
            eax_4 = (*(**(arg1 + 0x40) + 0x2c))()
            
            if (eax_4 != 0)
                if (ebx == 1 && *(arg1 + 0x44) != 0)
                    eax_4 = (*(**(arg1 + 0x44) + 0x14))()
                
                if ((ebx != 1 || *(arg1 + 0x44) == 0 || eax_4 != 0)
                        && (*(**(arg1 + 8) + 0x50))() != 0)
                    return (*(**(arg1 + 8) + 0x54))() != 0
    
    return 0

arg1.b = 0
return arg1
