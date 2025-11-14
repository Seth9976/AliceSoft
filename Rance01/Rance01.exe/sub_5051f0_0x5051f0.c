// 函数: sub_5051f0
// 地址: 0x5051f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx_4 = *arg1

if (&ecx_4[4] u> arg1[1])
    int32_t eax
    eax.b = 0
    return eax

int32_t* eax_7 = ((zx.d(ecx_4[3]) << 8 | zx.d(ecx_4[2])) << 8 | zx.d(ecx_4[1])) << 8 | zx.d(*ecx_4)
*arg1 = &ecx_4[4]

if (eax_7 == 0 && sub_5068e0(arg2, arg1).b != 0)
    eax_7 = *arg1
    
    if (eax_7 + 1 u<= arg1[1])
        bool cond:0_1 = *eax_7 == 1
        *arg1 = eax_7 + 1
        uint32_t ebx_1
        ebx_1.b = cond:0_1
        arg2[0x82].b = 0
        eax_7 = sub_40fea0(arg1, arg2 + 0x209)
        
        if (eax_7.b != 0)
            if (arg2[0x52] s>= 1)
                eax_7 = sub_504ea0(arg2)
            
            if (arg2[0x52] s< 1 || eax_7.b != 0)
                arg2[0x7f] = 0
                
                if (sub_504dd0(arg2).b != 0)
                    arg2[0x82].b = ebx_1.b
                    eax_7.b = 1
                    return eax_7

eax_7.b = 0
return eax_7
