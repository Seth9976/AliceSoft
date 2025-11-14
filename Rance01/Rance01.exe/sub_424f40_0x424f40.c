// 函数: sub_424f40
// 地址: 0x424f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = data_797d44
int16_t result

if (sub_424db0(esi).b != 0 && (***(esi + 0x18))().b != 0)
    result = GetKeyState(arg1)
    
    if ((0x8000 & result) != 0)
        void var_8
        void var_4
        
        if (arg1 s> 0 && (arg1 s<= 2 || arg1 == 4))
            result = (***(esi + 8))(&var_4, &var_8)
        
        if (arg1 s<= 0 || (arg1 s> 2 && arg1 != 4) || result.b != 0)
            result.b = 1
            return result

result.b = 0
return result
