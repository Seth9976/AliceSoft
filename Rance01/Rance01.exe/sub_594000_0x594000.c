// 函数: sub_594000
// 地址: 0x594000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[4] == 0)
    int32_t eax
    eax.b = 0
    return eax

(*(*arg1 + 0x3c))()
(*(*arg1 + 0x18))()
int32_t* ecx_1 = arg1[4]
arg1[0xb] = 0
arg1[0xc] = 0
int32_t* eax_4 = (*(*ecx_1 + 8))(arg2)

if (eax_4 != 0)
    if (sub_594680(arg1, (*(*eax_4 + 0x18))((*(*eax_4 + 0x14))())) != 0)
        (*(*eax_4 + 4))()
        void* esi_2 = arg1[5]
        
        if (esi_2 != 0 && sub_5d7090(arg2, esi_2) != 0)
            int32_t eax_15 = sub_5d93c0(arg2, esi_2)
            arg1[2] = arg2
            arg1[7] = eax_15
            eax_15.b = 1
            return eax_15
        
        arg1[2] = arg2
        arg1[7] = 1
        return 1
    
    sub_40da60("CDummySoundBuffer::Prepare()\n")
    (*(*eax_4 + 4))()

eax_4.b = 0
return eax_4
