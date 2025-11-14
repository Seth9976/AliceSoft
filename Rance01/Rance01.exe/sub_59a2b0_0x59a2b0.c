// 函数: sub_59a2b0
// 地址: 0x59a2b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

int128_t* __saved_edi_4

if ((*(*arg2 + 8))(0) == 0xa && sub_59a400(arg2).b != 0)
    *arg1 = *(*(*arg2 + 0xc))(0)
    __saved_edi_4 = (*(*arg2 + 0xc))(1)
    
    if (__saved_edi_4 != 0)
        int128_t* eax_7 = (**__saved_edi_4)()
        char* ecx_4 = eax_7
        char i
        
        do
            i = *ecx_4
            ecx_4 = &ecx_4[1]
        while (i != 0)
        sub_401270(&arg1[1], ecx_4 - &ecx_4[1], eax_7)
        __saved_edi_4 = (*(*arg2 + 0xc))(2)
        
        if (__saved_edi_4 != 0)
            int128_t* __saved_edi_1 = __saved_edi_4
            
            if (sub_59a570(&arg1[8]).b != 0)
                arg1[0xc] = *(*(*arg2 + 0xc))(3)
                arg1[0xd] = *(*(*arg2 + 0xc))(4)
                arg1[0xe] = *(*(*arg2 + 0xc))(5)
                arg1[0xf] = *(*(*arg2 + 0xc))(6)
                arg1[0x10] = *(*(*arg2 + 0xc))(7)
                __saved_edi_4 = (*(*arg2 + 0xc))(8)
                
                if (__saved_edi_4 != 0 && sub_59a4a0(&arg1[0x11], __saved_edi_4).b != 0)
                    __saved_edi_4 = (*(*arg2 + 0xc))(9)
                    
                    if (__saved_edi_4 != 0 && sub_59a4a0(&arg1[0x15], __saved_edi_4).b != 0)
                        __saved_edi_4.b = 1
                        return __saved_edi_4

__saved_edi_4.b = 0
return __saved_edi_4
