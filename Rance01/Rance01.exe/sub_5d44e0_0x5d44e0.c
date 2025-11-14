// 函数: sub_5d44e0
// 地址: 0x5d44e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_c = arg1
void* eax

if (arg1[8] != 0)
    (*(*arg1 + 0x3c))()
    (*(*arg1 + 0x18))()
    int32_t* eax_3 = arg1[7]
    
    if (eax_3 != 0)
        (*(*eax_3 + 8))(eax_3)
        arg1[7] = 0
    
    int32_t* eax_4 = arg1[6]
    
    if (eax_4 != 0)
        (*(*eax_4 + 8))(eax_4)
        arg1[6] = 0
    
    int32_t* ecx_3 = arg1[8]
    arg1[0x11] = 0
    eax = (*(*ecx_3 + 8))(arg2)
    
    if (eax != 0)
        if (sub_5d4fd0(arg1, (*(*eax + 0x18))((*(*eax + 0x14))())) != 0)
            (*(*eax + 4))()
            
            if (sub_5d4f40(arg1).b != 0)
                void* esi_2 = arg1[9]
                
                if (esi_2 != 0 && sub_5d7090(arg2, esi_2).b != 0)
                    arg1[0xb] = sub_5d93c0(arg2, esi_2)
                    arg1[2] = arg2
                    int32_t eax_15
                    eax_15.b = 1
                    return eax_15
                
                arg1[2] = arg2
                arg1[0xb] = 1
                eax.b = 1
                return eax
        else
            sub_40da60("CDirectSoundBuffer::Prepare()\n")
            (*(*eax + 4))()

eax.b = 0
return eax
