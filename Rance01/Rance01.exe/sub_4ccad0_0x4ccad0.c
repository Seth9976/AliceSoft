// 函数: sub_4ccad0
// 地址: 0x4ccad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

if (sub_51aef0(arg1 + 0x18).b != 0)
    result = *(arg1 + 0x28)
    
    if (result == 0)
    label_4ccb00:
        result = *(arg1 + 0x2c)
        
        if (result == 0)
        label_4ccb1c:
            
            for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
                if (*i != 0 && sub_4ccad0().b == 0)
                    result.b = 0
                    return result
            
            result.b = 1
            return result
        
        if (*(result + 8) != 0 && (*(**(result + 8) + 0x14))().b != 0)
            goto label_4ccb1c
    else if (*(result + 8) != 0 && (*(**(result + 8) + 0x14))().b != 0)
        goto label_4ccb00

result.b = 0
return result
