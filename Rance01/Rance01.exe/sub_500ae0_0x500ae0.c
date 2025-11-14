// 函数: sub_500ae0
// 地址: 0x500ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_15 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7223e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_5 = arg1
int32_t var_6c = 0
arg2[5] = 0xf
arg2[4] = 0
void** var_80 = eax_5
int32_t* var_68 = arg2
*arg2 = 0
int32_t var_4 = 0
int32_t var_6c_1 = 1

if (eax_5[5] u>= 0x10)
    eax_5 = *eax_5

void** var_9c = eax_5
char* eax_6 = sub_4104a0(0x754a44)
int32_t var_4_1 = 1
char var_48
int32_t* eax_7
int32_t edx
eax_7, edx = sub_500a60(arg3, &var_48)
var_4_1.b = 2
var_4_1.b = 3
char var_2c
sub_401ef0(arg2, sub_4b3c20(eax_7, edx, eax_6, &var_2c))
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_9c_3 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_34

if (var_34 u>= 0x10)
    int32_t var_9c_4 = var_48.d
    sub_6b4d5b()

var_4_1.b = 0
int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_64
int32_t var_50

if (var_50 u>= 0x10)
    int32_t var_9c_5 = var_64
    sub_6b4d5b()

void** edi_2 = var_80
int32_t* eax_10 = edi_2[0xc]
int32_t ecx_4 = edi_2[0xd]

if (eax_10 == ecx_4)
label_500c36:
    sub_402cb0(arg2, "\n\n\n\n", 4)
else
    while (*eax_10 == 0)
        eax_10 = &eax_10[1]
        
        if (eax_10 == ecx_4)
            goto label_500c36
    
    int32_t* eax_12 = edi_2[0xc]
    
    if (((ecx_4 - eax_12) & 0xfffffffc) s> 0 || eax_12 != ecx_4)
        void* edi_3 = *eax_12
        
        if (edi_3 == 0)
            edi_2 = var_80
            sub_402cb0(arg2, "\n\n\n\n", 4)
        else
            int32_t var_78_1
            
            if (*(edi_3 + 8) != 0)
                int32_t eax_15
                eax_15, ecx_4 = (*(**(edi_3 + 8) + 0x10))(eax_4)
                var_78_1 = eax_15
            else
                var_78_1 = 0
            
            int32_t var_7c_1
            
            if (*(edi_3 + 8) != 0)
                int32_t eax_17
                eax_17, ecx_4 = (*(**(edi_3 + 8) + 0x14))(eax_4)
                var_7c_1 = eax_17
            else
                var_7c_1 = 0
            
            ecx_4.b = *(edi_3 + 0x10)
            int32_t var_9c_6 = var_78_1
            char var_81_1 = ecx_4.b
            int32_t var_4_2 = 4
            sub_402000(arg2, sub_4104a0(0x754a48), 0, 0xffffffff)
            var_4_2.b = 0
            
            if (var_50 u>= 0x10)
                int32_t var_9c_7 = var_64
                sub_6b4d5b()
            
            int32_t var_9c_8 = var_7c_1
            int32_t var_4_3 = 5
            sub_402000(arg2, sub_4104a0(0x754a4c), 0, 0xffffffff)
            var_4_3.b = 0
            
            if (var_50 u>= 0x10)
                int32_t var_9c_9 = var_64
                sub_6b4d5b()
            
            int32_t eax_21
            eax_21.b = var_81_1 != 0
            int32_t var_9c_10 = eax_21
            int32_t var_4_4 = 6
            int32_t edx_9 = sub_402000(arg2, sub_4104a0(0x754a50), 0, 0xffffffff)
            var_4_4.b = 0
            
            if (var_50 u>= 0x10)
                int32_t var_9c_11 = var_64
                edx_9 = sub_6b4d5b()
            
            sub_401ab0(&var_64, edx_9, edi_3 + 0x14)
            int32_t* var_9c_12 = &var_64
            int32_t var_4_5 = 7
            sub_402c60(&var_48, 0x754a54, nullptr)
            var_4_5.b = 8
            sub_402000(arg2, &var_48, 0, 0xffffffff)
            
            if (var_34_1 u>= 0x10)
                int32_t var_9c_13 = var_48.d
                sub_6b4d5b()
            
            var_4_5.b = 0
            var_34_1 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            
            if (var_50 u>= 0x10)
                int32_t var_9c_14 = var_64
                sub_6b4d5b()
            
            edi_2 = var_80
    else
        sub_402cb0(arg2, "\n\n\n\n", 4)

if (edi_2[0x10] == 0)
    sub_402cb0(arg2, "\n\n\n\n", 4)
else
    void* eax_26 = edi_2[0x10]
    int32_t var_7c_2
    
    if (*(eax_26 + 8) != 0)
        var_7c_2 = (*(**(eax_26 + 8) + 0x10))(eax_4)
    else
        var_7c_2 = 0
    
    void* eax_31 = edi_2[0x10]
    int32_t var_78_2
    
    if (*(eax_31 + 8) != 0)
        var_78_2 = (*(**(eax_31 + 8) + 0x14))(eax_4)
    else
        var_78_2 = 0
    
    char edx_2 = *(edi_2[0x10] + 0x10)
    int32_t var_9c_15 = var_7c_2
    int32_t var_4_6 = 9
    sub_402000(arg2, sub_4104a0(0x754a68), 0, 0xffffffff)
    var_4_6.b = 0
    
    if (var_50 u>= 0x10)
        int32_t var_9c_16 = var_64
        sub_6b4d5b()
    
    int32_t var_9c_17 = var_78_2
    int32_t var_4_7 = 0xa
    sub_402000(arg2, sub_4104a0(0x754a6c), 0, 0xffffffff)
    var_4_7.b = 0
    
    if (var_50 u>= 0x10)
        int32_t var_9c_18 = var_64
        sub_6b4d5b()
    
    int32_t ecx_15
    ecx_15.b = edx_2 != 0
    int32_t var_9c_19 = ecx_15
    int32_t var_4_8 = 0xb
    int32_t edx_14 = sub_402000(arg2, sub_4104a0(0x754a70), 0, 0xffffffff)
    var_4_8.b = 0
    
    if (var_50 u>= 0x10)
        int32_t var_9c_20 = var_64
        edx_14 = sub_6b4d5b()
    
    sub_401ab0(&var_64, edx_14, eax_26 + 0x14)
    int32_t* var_9c_21 = &var_64
    int32_t var_4_9 = 0xc
    sub_402c60(&var_48, 0x754a74, nullptr)
    var_4_9.b = 0xd
    sub_402000(arg2, &var_48, 0, 0xffffffff)
    
    if (var_34_1 u>= 0x10)
        int32_t var_9c_22 = var_48.d
        sub_6b4d5b()
    
    var_4_9.b = 0
    var_34_1 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (var_50 u>= 0x10)
        int32_t var_9c_23 = var_64
        sub_6b4d5b()

if (edi_2[0x11] == 0)
    sub_402cb0(arg2, "\n\n\n\n", 4)
else
    void* eax_43 = edi_2[0x11]
    int32_t edi_4
    
    if (*(eax_43 + 8) != 0)
        edi_4 = (*(**(eax_43 + 8) + 0x10))(eax_4)
    else
        edi_4 = 0
    
    void* eax_47 = var_80[0x11]
    void* var_7c_3
    
    if (*(eax_47 + 8) != 0)
        var_7c_3 = (*(**(eax_47 + 8) + 0x14))(eax_4)
    else
        var_7c_3 = nullptr
    
    eax_47.b = *(var_80[0x11] + 0x10)
    int32_t var_9c_24 = edi_4
    char var_81_3 = eax_47.b
    int32_t var_4_10 = 0xe
    sub_402000(arg2, sub_4104a0(0x754a80), 0, 0xffffffff)
    var_4_10.b = 0
    
    if (var_50 u>= 0x10)
        int32_t var_9c_25 = var_64
        sub_6b4d5b()
    
    void* var_9c_26 = var_7c_3
    int32_t var_4_11 = 0xf
    sub_402000(arg2, sub_4104a0(0x754a84), 0, 0xffffffff)
    var_4_11.b = 0
    
    if (var_50 u>= 0x10)
        int32_t var_9c_27 = var_64
        sub_6b4d5b()
    
    int32_t ecx_23
    ecx_23.b = var_81_3 != 0
    int32_t var_9c_28 = ecx_23
    int32_t var_4_12 = 0x10
    int32_t edx_21 = sub_402000(arg2, sub_4104a0(0x754a88), 0, 0xffffffff)
    var_4_12.b = 0
    
    if (var_50 u>= 0x10)
        int32_t var_9c_29 = var_64
        edx_21 = sub_6b4d5b()
    
    sub_401ab0(&var_64, edx_21, eax_43 + 0x14)
    int32_t* var_9c_30 = &var_64
    int32_t var_4_13 = 0x11
    sub_402c60(&var_48, 0x754a8c, nullptr)
    var_4_13.b = 0x12
    sub_402000(arg2, &var_48, 0, 0xffffffff)
    
    if (var_34_1 u>= 0x10)
        int32_t var_9c_31 = var_48.d
        sub_6b4d5b()
    
    var_4_13.b = 0
    int32_t var_34_2 = 0xf
    int32_t var_38_3 = 0
    var_48 = 0
    
    if (var_50 u>= 0x10)
        int32_t var_9c_32 = var_64
        sub_6b4d5b()
    
    edi_2 = var_80

int32_t* i_1 = edi_2[0x13]

if (i_1 != edi_2[0x14])
    for (int32_t* i = i_1; i != var_80[0x14]; i = &i[1])
        if (*i != 0)
            int32_t var_4_14 = 0x13
            sub_402000(arg2, sub_500ae0(&var_64, arg3 + 1), 0, 0xffffffff)
            var_4_14.b = 0
            
            if (var_50 u>= 0x10)
                int32_t var_9c_34 = var_64
                sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return arg2
