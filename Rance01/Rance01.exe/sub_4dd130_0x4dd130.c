// 函数: sub_4dd130
// 地址: 0x4dd130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_2 = arg6
int32_t* var_40
void* const var_3c
int32_t var_14

if (arg1 * 2 s<= ecx_2)
    int32_t eax_4
    
    do
        int32_t var_2c_1 = arg7
        void* ecx = &arg2[arg1]
        int32_t* var_18_1 = &var_40
        void* edi_1 = ecx + (arg1 << 2)
        var_40 = nullptr
        var_3c = nullptr
        int32_t var_38_1 = 0
        int32_t var_34_1 = 0
        int32_t var_30_1 = arg5
        int32_t edx = sub_4dd440(&var_14, arg2, ecx, ecx, edi_1, var_40, var_3c)[4]
        int32_t eax_3 = var_14
        arg5 = edx
        
        if (eax_3 != 0)
            int32_t var_2c_2 = eax_3
            sub_6b4d5b()
        
        eax_4 = arg1 * 2
        ecx_2 = arg6 - eax_4
        arg2 = edi_1
        arg6 = ecx_2
    while (ecx_2 s>= eax_4)

if (ecx_2 s> arg1)
    int32_t var_2c_4 = arg7
    var_40 = nullptr
    var_3c = nullptr
    int32_t var_38_3 = 0
    int32_t var_34_3 = 0
    arg6 = &var_40
    int32_t var_30_3 = arg5
    int32_t* esi_1 = &arg2[arg1]
    sub_4dd440(&var_14, arg2, esi_1, esi_1, arg3, var_40, var_3c)
else
    var_3c = nullptr
    int32_t var_38_2 = 0
    int32_t var_34_2 = 0
    int32_t var_30_2 = 0
    arg6 = &var_3c
    int32_t var_2c_3 = arg5
    var_40 = arg2
    sub_4dd2c0(&var_14, arg3, arg5, var_40)

int32_t eax_8 = var_14

if (eax_8 != 0)
    int32_t var_2c_5 = eax_8
    sub_6b4d5b()

if (arg4 == 0)
    return arg4

int32_t var_2c_6 = arg4
return sub_6b4d5b()
