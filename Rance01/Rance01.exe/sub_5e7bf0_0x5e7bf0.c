// 函数: sub_5e7bf0
// 地址: 0x5e7bf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_5e7950(arg1, arg2) != 0)
    if (arg2[4] == 0)
        return 1
    
    char eax
    
    switch (arg3)
        case 0
            return 1
        case 1
            eax = sub_5e7c70(arg1)
        label_5e7c19:
            
            if (eax != 0)
                return 1
        case 2
            eax = sub_5e7d00(arg1)
            goto label_5e7c19
        case 3
            eax = sub_5e7d90(0, arg1, 0)
            goto label_5e7c19
        case 4
            if (sub_5e7ee0(0, arg1, 0) != 0)
                return 1

return 0
