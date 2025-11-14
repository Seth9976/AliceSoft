// 函数: sub_40af00
// 地址: 0x40af00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b82e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_797d60
var_8c = arg6
void** eax_6 = *(ecx + 4)
void** esi = eax_6[1]
void** edi = eax_6

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x757718) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

void** esi_1 = *(data_797d60 + 4)
void** var_84 = edi
char eax_8

if (edi != esi_1)
    eax_8 = sub_40f4a0(0x757718, &edi[3])

void*** eax_9

if (edi == esi_1 || eax_8 != 0)
    void** var_88 = esi_1
    eax_9 = &var_88
else
    eax_9 = &var_84

void** result = *eax_9

if (result == esi_1)
    result.b = 0
else
    int32_t* esi_2 = result[7]
    
    if (esi_2 == 0)
        result.b = 0
    else
        arg1[2] = arg4
        *arg1 = arg2
        arg1[1] = arg3
        (**arg2)(eax_4)
        (**arg1[1])()
        (**arg1[2])()
        result = (**esi_2)(0x757728)
        
        if (result == 0)
            result.b = 0
        else
            int128_t* esi_3 = (**result)()
            char* ecx_7 = esi_3
            int32_t var_6c_1 = 0xf
            int32_t var_70_1 = 0
            char var_80 = 0
            int128_t* eax_16
            
            do
                eax_16.b = *ecx_7
                ecx_7 = &ecx_7[1]
            while (eax_16.b != 0)
            int32_t var_4 = 0
            var_4.b = 1
            char var_64
            int32_t var_2c
            char* eax_19
            int32_t* ecx_11
            eax_19, ecx_11 = sub_40c070(&var_80, 
                sub_401940(&var_2c, sub_401270(&var_80, ecx_7 - &ecx_7[1], esi_3), var_8c), 
                &var_2c, &var_64)
            char* var_a8_1 = eax_19
            var_4.b = 2
            char var_48
            sub_402c60(&var_48, "Font.fnl", ecx_11)
            var_4.b = 3
            sub_401180(&arg1[0x57], 0xffffffff, &var_48, 0)
            int32_t var_34
            
            if (var_34 u>= 0x10)
                int32_t var_a4_3 = var_48.d
                sub_6b4d5b()
            
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            var_48 = 0
            int32_t var_50
            
            if (var_50 u>= 0x10)
                int32_t var_a4_4 = var_64.d
                sub_6b4d5b()
            
            var_4.b = 0
            int32_t var_50_1 = 0xf
            int32_t var_54_1 = 0
            var_64 = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_a4_5 = var_2c
                sub_6b4d5b()
            
            int32_t* ecx_14 = arg1[0xa]
            
            if (ecx_14 != 0)
                (*(*ecx_14 + 4))()
                arg1[0xa] = 0
            
            int32_t* esi_5 = arg4
            arg1[0xa] = esi_5
            
            if (esi_5 != 0)
                (**esi_5)()
            
            int32_t* ecx_16 = arg1[0xb]
            
            if (ecx_16 != 0)
                (*(*ecx_16 + 4))()
                arg1[0xb] = 0
            
            arg1[0xb] = arg3
            
            if (arg3 != 0)
                (**arg3)()
            
            int32_t* ecx_18 = arg1[0x65]
            
            if (ecx_18 != 0)
                (*(*ecx_18 + 4))()
                arg1[0x65] = 0
            
            arg1[0x65] = esi_5
            
            if (esi_5 != 0)
                (**esi_5)()
            
            int32_t* ecx_20 = arg1[0x66]
            
            if (ecx_20 != 0)
                (*(*ecx_20 + 4))()
                arg1[0x66] = 0
            
            arg1[0x66] = arg3
            
            if (arg3 != 0)
                (**arg3)()
            
            arg1[0x9d] = esi_5
            arg1[0x9e] = arg3
            arg1[0xa1] = arg1[0x9d]
            arg1[0xa2] = arg1[0x9e]
            arg1[0x9f] = 0
            arg1[0xa0] = 0
            arg1[0xa3] = arg1[0xa1]
            arg1[0xa4] = arg1[0xa2]
            arg1[0xa9] = arg1[0x9d]
            arg1[0xaa] = arg1[0x9e]
            arg1[0xab] = arg1[0xa9]
            arg1[0xac] = arg1[0xaa]
            int32_t* eax_38 = operator new(0x48)
            var_8c = eax_38
            var_4.b = 4
            void* const eax_39
            
            if (eax_38 == 0)
                eax_39 = nullptr
            else
                eax_39 = sub_4373e0(eax_38)
                esi_5 = arg4
            
            var_4.b = 0
            arg1[0xb1] = eax_39
            *(eax_39 + 0xc) = esi_5
            *(arg1[0xb1] + 0x10) = arg3
            int32_t* esi_7 = *arg1
            int32_t eax_43 = (*(*esi_7 + 0x10))((*(*esi_7 + 0x14))())
            
            if (sub_437440(arg1[0xb1], eax_43) != 0)
                arg1[0xbd] = arg5
                arg1[0xbc] = fconvert.s(float.t(0))
                int32_t* ecx_27 = arg1[0xbd]
                arg1[0xba] = 0
                uint32_t eax_46
                
                if (ecx_27 == 0)
                    eax_46 = GetTickCount()
                else
                    eax_46 = (**ecx_27)()
                
                arg1[0xbb] = eax_46
                sub_401110(&var_80)
                result.b = 1
            else
                sub_401110(&var_80)
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return result
