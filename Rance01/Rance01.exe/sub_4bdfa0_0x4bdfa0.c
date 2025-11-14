// 函数: sub_4bdfa0
// 地址: 0x4bdfa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_164
int32_t eax_1 = data_78c474 ^ &var_164
float var_160 = fconvert.s(fconvert.t(arg4))
void var_4c

if (arg5 == 0)
    sub_529cb0(arg3, sub_4be0b0(arg2, &var_4c))
else if (arg5 == 1)
    void* var_17c_1 = arg1
    struct sealengine::CEmitterRotate::VTable* var_12c
    sub_4bdf40(arg2, &var_12c, arg1)
    struct sealengine::CEmitterRotate::VTable* var_15c
    sub_4bdf70(&var_12c, &var_15c, fconvert.s(fconvert.t(var_160)))
    struct sealengine::CEmitterRotate::VTable* var_14c
    sub_4bdf10(&var_15c, &var_14c, arg2)
    void var_cc
    sub_529cb0(arg3, sub_4be0b0(&var_14c, &var_cc))
else
    float var_13c[0x4]
    float var_11c[0x4]
    float var_10c[0x10]
    float var_8c[0x10]
    
    if (arg5 == 2)
        sub_52a520(sub_529cb0(&var_13c, sub_4be0b0(arg1, &var_10c)), 
            sub_529cb0(&var_11c, sub_4be0b0(arg2, &var_8c)), arg3, fconvert.s(fconvert.t(var_160)))
    else
        sub_529cb0(arg3, sub_4be0b0(arg2, &var_10c))
sub_6b4885(eax_1 ^ &var_164)
return arg3
