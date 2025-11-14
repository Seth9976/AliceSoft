// 函数: sub_616b90
// 地址: 0x616b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax = *arg1
void* result

if (eax u< 0x81)
    if (eax u< 0xe0)
        goto label_616ba9
    
    result = &arg1[2]
else if (eax u<= 0x9f || eax u>= 0xe0)
    result = &arg1[2]
else
label_616ba9:
    
    if (eax u<= 0x20 || eax == 0x7f)
        return &arg1[1]
    
    if ((eax u< 0x61 || eax u> 0x7a) && (eax u< 0x41 || eax u> 0x5a) && eax != 0x5f)
        return &arg1[1]
    
    result = &arg1[1]

arg1.b = *result

if (arg1.b != 0)
    while (true)
        if (arg1.b u< 0x81)
            if (arg1.b u< 0xe0)
                goto label_616bdf
            
            result += 2
        else if (arg1.b u<= 0x9f || arg1.b u>= 0xe0)
            result += 2
        else
        label_616bdf:
            
            if (arg1.b u<= 0x20)
                break
            
            if (arg1.b == 0x7f)
                break
            
            if ((arg1.b u< 0x61 || arg1.b u> 0x7a) && (arg1.b u< 0x41 || arg1.b u> 0x5a)
                    && arg1.b != 0x5f)
                break
            
            result += 1
        
        arg1.b = *result
        
        if (arg1.b == 0)
            return result

return result
