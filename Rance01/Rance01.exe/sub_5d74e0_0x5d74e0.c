// 函数: sub_5d74e0
// 地址: 0x5d74e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t ebp = arg3
int32_t* edi = sub_5d7950(ebx, arg1, 1)

if (edi != 0 && (*(**edi + 0xc))(ebp).b != 0)
    void* esi = ebx[3]
    char eax_4
    
    if (esi != 0)
        eax_4 = sub_5d7090(ebp, esi)
    
    if (esi == 0 || eax_4 == 0)
        edi[1] = ebx[0xf]
        edi[3] = 0x64
    else
        arg3 = ebp
        sub_42e070(esi + 8, &arg2, &arg3)
        int32_t* eax_6 = arg2
        
        if (eax_6 == *(esi + 0xc))
            arg3 = ebx[0xf]
        else
            void* eax_7 = eax_6[4]
            
            if (eax_7 == 0)
                arg3 = ebx[0xf]
            else
                int32_t eax_8 = *(eax_7 + 0x10)
                arg3 = eax_8
                
                if (eax_8 == 0xffffffff)
                    arg3 = ebx[0xf]
        
        int32_t eax_10 = sub_5d7150(ebp, esi)
        
        if (eax_10 s<= 0)
            eax_10 = 0x64
        
        edi[1] = arg3
        edi[3] = eax_10
    
    (*(**edi + 0x44))(0, sub_5d7a00(ebx, edi), 0)
    int32_t eax_13
    eax_13.b = 1
    return eax_13

int32_t* eax_1
eax_1.b = 0
return eax_1
