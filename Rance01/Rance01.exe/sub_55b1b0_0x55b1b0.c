// 函数: sub_55b1b0
// 地址: 0x55b1b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ecx
void** var_4 = ecx
int32_t* ebp = arg1
sub_55b300(ebp, &arg1, *ebp, ebp[1])
char* eax_1 = *arg2

if (&eax_1[4] u> arg2[1])
label_55b248:
    eax_1.b = 0
    return eax_1

int32_t ebx_7 = ((zx.d(eax_1[3]) << 8 | zx.d(eax_1[2])) << 8 | zx.d(eax_1[1])) << 8 | zx.d(*eax_1)
*arg2 = &eax_1[4]
void** eax_2

if (ebx_7 s> 0)
    sub_55b250(ebx_7, &eax_1[4], arg2, ebp)
    var_4 = nullptr
    
    if (ebx_7 s> 0)
        arg1 = nullptr
        
        do
            if (sub_55b070(arg2, *ebp + arg1).b == 0)
                goto label_55b248
            
            arg1 = &arg1[0x11]
            eax_2 = var_4 + 1
            var_4 = eax_2
        while (eax_2 s< ebx_7)

eax_2.b = 1
return eax_2
