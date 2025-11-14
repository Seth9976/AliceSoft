// 函数: sub_560510
// 地址: 0x560510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg1[4]
int32_t* ebp

if (arg1[5] u< 0x10)
    ebp = arg1
else
    ebp = *arg1

if (ebx != 0xffffffff)
    int32_t eax = arg3[1]
    
    if (eax s< arg3[3] + ebx + 1)
        char eax_1 = sub_427ad0(arg3, eax + ebx + 1 + 0x40000)
        
        if (eax_1 == 0)
            return eax_1
    
    int32_t eax_2
    
    if (arg3[1] != 0)
        eax_2 = *arg3
    else
        eax_2 = 0
    
    sub_6c02a0(arg3[3] + eax_2, ebp, ebx + 1)
    arg3[3] += ebx + 1

arg1.b = 1
return arg1
