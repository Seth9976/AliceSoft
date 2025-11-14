// 函数: sub_576950
// 地址: 0x576950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[2].b != 0 && arg1[9] == arg3 && arg1[0xa] == arg4 && arg1[3] == arg5)
    int32_t eax_1
    eax_1.b = 1
    return eax_1

(*(*arg1 + 0x10))()
arg1[2].b = 0
arg1[3] = 0

if (arg1[0xb] == 0)
    arg1[0xb] = arg2
    (**arg2)()

int32_t* ecx_3 = arg1[4]

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    arg1[4] = 0

int32_t* eax_6 = (*(*arg2 + 0x28))()
arg1[4] = eax_6

if (eax_6 != 0)
    void* ebx_1 = *eax_6
    int32_t eax_8 = (*(*arg2 + 0x5c))(1)
    arg1[4]
    
    if ((*(ebx_1 + 8))(arg4, arg4, 1, 1, eax_8).b != 0)
        int32_t* ecx_8 = arg1[5]
        
        if (ecx_8 != 0)
            (*(*ecx_8 + 4))()
            arg1[5] = 0
        
        eax_6 = (*(*arg2 + 0x28))()
        arg1[5] = eax_6
        
        if (eax_6 != 0)
            void* ebx_2 = *eax_6
            int32_t eax_12 = (*(*arg2 + 0x5c))(1)
            arg1[5]
            
            if ((*(ebx_2 + 8))(arg4, arg4, 1, 1, eax_12).b != 0)
                arg1[9] = arg4
                arg1[0xa] = arg4
                arg1[3] = arg5
                arg1[2].b = 1
                eax_6.b = 1
                return eax_6

eax_6.b = 0
return eax_6
