// 函数: sub_4ff5d0
// 地址: 0x4ff5d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_2 = arg6
int32_t* var_40
int32_t var_3c
int32_t var_14

if (arg1 * 2 s<= ecx_2)
    int32_t eax_5
    
    do
        int32_t var_2c_1 = arg7
        int32_t* ecx = &arg2[arg1]
        void* edi_1 = &ecx[arg1]
        void** var_18_1 = &var_40
        var_40 = nullptr
        var_3c = 0
        int32_t var_38_1 = 0
        int32_t var_34_1 = 0
        int32_t* var_30_1 = arg5
        int32_t* edx = sub_4ffaa0(&var_40, arg2, ecx, &var_14, ecx, ecx, edi_1, var_40)[4]
        int32_t eax_4 = var_14
        arg5 = edx
        
        if (eax_4 != 0)
            int32_t var_2c_2 = eax_4
            sub_6b4d5b()
        
        eax_5 = arg1 * 2
        ecx_2 = arg6 - eax_5
        arg2 = edi_1
        arg6 = ecx_2
    while (ecx_2 s>= eax_5)

if (ecx_2 s> arg1)
    int32_t var_2c_4 = arg7
    var_40 = nullptr
    var_3c = 0
    int32_t var_38_3 = 0
    int32_t var_34_3 = 0
    int32_t* var_30_3 = arg5
    arg6 = &var_40
    int32_t* esi_1 = &arg2[arg1]
    sub_4ffaa0(arg3, arg2, arg5, &var_14, esi_1, esi_1, arg3, var_40)
else
    var_3c = 0
    int32_t var_38_2 = 0
    int32_t var_34_2 = 0
    int32_t var_30_2 = 0
    arg6 = &var_3c
    int32_t* var_2c_3 = arg5
    var_40 = arg2
    sub_4dd2c0(&var_14, arg3, arg5, var_40)

int32_t eax_9 = var_14

if (eax_9 != 0)
    int32_t var_2c_5 = eax_9
    sub_6b4d5b()

if (arg4 == 0)
    return arg4

int32_t var_2c_6 = arg4
return sub_6b4d5b()
