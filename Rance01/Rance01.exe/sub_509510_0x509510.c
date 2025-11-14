// 函数: sub_509510
// 地址: 0x509510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
void* esi = *ebp
int32_t* eax

if (*(esi + 0x17c) s<= 0)
    arg1 = 2
    int32_t* var_4
    sub_42e070(esi + 0x14c, &var_4, &arg1)
    eax = var_4

char ecx

if (*(esi + 0x17c) s<= 0 && (eax == *(esi + 0x150) || eax[4] s<= 0)
        && (*(esi + 0x180) s<= 0 || *(ebp + 0x103) == 0))
    ecx = 0
else
    ecx = 1

if (ebp[0x3f] s< 2 || *(ebp + 0x101) == 0)
    eax.b = 0
else
    eax.b = 1

if (ecx == 0 || eax.b == 0)
    if (ebp[0x154].b != 0)
        int32_t* ecx_3 = ebp[0x155]
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 4))()
            ebp[0x155] = 0
        
        ebp[0x156] = 0
        ebp[0x157] = 0
        ebp[0x158].b = 0
        ebp[0x159] = 0
        ebp[0x15a].b = 0
        ebp[0x154].b = 0
else if (ebp[0x154].b == 0)
    char eax_3 = sub_50a8a0(&ebp[0x155], 0, *(esi + 0x140), *(esi + 0x144), 2, 1, ebp[1])
    
    if (eax_3 == 0)
        return eax_3
    
    ebp[0x154].b = 1
    return 1

eax.b = 1
return eax
