// 函数: sub_4f2c40
// 地址: 0x4f2c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_4f2ce0(arg1)
struct sealengine::CPOLMaterial::VTable* var_8 = arg2
void* var_4 = arg2 + arg3

if (sub_4f2d40(&var_8, arg1) != 0)
    if (*(arg1 + 4) s>= 4)
        char eax_2 = sub_4f32b0(arg1, &var_8)
        
        if (eax_2 == 0)
            return eax_2
        
        goto label_4f2c9f
    
    if (sub_4f2e20(&var_8, arg1) != 0)
    label_4f2c9f:
        
        if (sub_4f36a0(&var_8, arg1) != 0)
            char eax_1
            int80_t st0_1
            st0_1, eax_1 = sub_4f4cc0(arg1, &var_8)
            
            if (eax_1 != 0)
                if (*(arg1 + 0x28) != *(arg1 + 0x2c))
                    eax_1 = sub_4f5210(arg1)
                
                if (*(arg1 + 0x28) == *(arg1 + 0x2c) || eax_1 != 0)
                    sub_4f5100(arg1)
                    void* eax_5
                    eax_5.b = 1
                    return eax_5

return 0
