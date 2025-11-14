// 函数: sub_5cc560
// 地址: 0x5cc560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result_1 = arg1

if (arg2[4] != 0)
    if (arg2[7].b != 0)
        goto label_5cc59d
    
    if (sub_5cc7e0(arg2) != 0)
        arg2[7].b = 1
    label_5cc59d:
        void arg_4
        sub_416820(&arg2[8], &result_1, &arg_4)
        struct _EXCEPTION_REGISTRATION_RECORD** result = result_1
        
        if (result != arg2[9])
            sub_58c020(&arg2[8], &arg_4, result)
            result = sub_5ccb30(arg2)
            
            if (result.b == 0)
                return result
        
        result.b = 1
        return result
else
    sub_604c90(0x73750c)

return 0
