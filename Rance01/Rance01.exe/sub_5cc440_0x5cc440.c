// 函数: sub_5cc440
// 地址: 0x5cc440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

enum MESSAGEBOX_RESULT result

if (arg1[4] != 0)
    if (arg1[7].b != 0)
        goto label_5cc487
    
    if (sub_5cc7e0(arg1).b != 0)
        arg1[7].b = 1
    label_5cc487:
        void* var_10
        void arg_4
        sub_416820(&arg1[8], &var_10, &arg_4)
        
        if (var_10 != arg1[9])
            result.b = 1
            return result
        
        sub_416b60(&var_10, &arg1[8], sub_416d20(&arg1[8], &arg_4))
        
        if (sub_5ccb30(arg1).b != 0)
            result.b = 1
            return result
else
    sub_604c90(0x73750c)

result.b = 0
return result
