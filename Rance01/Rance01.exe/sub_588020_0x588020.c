// 函数: sub_588020
// 地址: 0x588020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714418
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_a0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t edx
void** eax_4 = sub_58bb30(&arg1[0x14], edx, ebx)
void** result_4 = arg1[0x15]
void** var_84 = eax_4
char eax_6

if (eax_4 != result_4)
    int32_t edx_1 = eax_4[4]
    eax_6 = sub_58d3e0(*ebx, edx_1, eax_4[3], ebx[1], edx_1)
    ebx = arg2

void** result_2
void*** eax_7

if (eax_4 == result_4 || eax_6 != 0)
    result_2 = result_4
    eax_7 = &result_2
else
    eax_7 = &var_84

void** esi_1 = *eax_7
void** result

if (esi_1 == arg1[0x15])
    int32_t edi_2 = 0
    int32_t* eax_11 = nullptr
    int32_t ecx_4 = 0
    int32_t var_20 = 0
    int32_t* var_1c_1 = nullptr
    int32_t var_18_1 = 0
    int32_t* ebp_1 = arg2
    int32_t var_4 = 0
    void** edx_3 = *ebp_1
    int32_t esi_2 = 0
    var_84 = edx_3
    
    if (edx_3 != ebp_1[1])
        while (true)
            void* eax_12 = *edx_3
            
            if (eax_12 u> 0xa)
                int32_t eax_16 = var_20
                
                if (eax_16 != 0)
                    int32_t var_a4_3 = eax_16
                    sub_6b4d5b()
                
                break
            
            int16_t* eax_13
            
            switch (eax_12)
                case nullptr
                    int16_t var_78 = 0
                    int16_t var_76_1 = esi_2.w
                    int32_t var_74_1 = 0x90003
                    eax_13 = &var_78
                    esi_2 += 0x10
                case 1
                    int16_t var_6e_1 = esi_2.w
                    int16_t var_70 = 0
                    int32_t var_6c_1 = 2
                    esi_2 += 0xc
                    eax_13 = &var_70
                case 2
                    int16_t var_68 = 0
                    int16_t var_66_1 = esi_2.w
                    int32_t var_64_1 = 0x30002
                    esi_2 += 0xc
                    eax_13 = &var_68
                case 3
                    int16_t var_5e_1 = esi_2.w
                    int16_t var_60 = 0
                    int32_t var_5c_1 = 0x60002
                    esi_2 += 0xc
                    eax_13 = &var_60
                case 4
                    int16_t var_56_1 = esi_2.w
                    int16_t var_58 = 0
                    int32_t var_54_1 = 0xa0004
                    esi_2 += 4
                    eax_13 = &var_58
                case 5
                    int16_t var_50 = 0
                    int16_t var_4e_1 = esi_2.w
                    int32_t var_4c_1 = 0x10a0004
                    esi_2 += 4
                    eax_13 = &var_50
                case 6
                    int16_t var_46_1 = esi_2.w
                    int16_t var_48 = 0
                    int32_t var_44_1 = 0x50001
                    esi_2 += 8
                    eax_13 = &var_48
                case 7
                    int16_t var_3e_1 = esi_2.w
                    int16_t var_40 = 0
                    int32_t var_3c_1 = 0x1050001
                    esi_2 += 8
                    eax_13 = &var_40
                case 8
                    int16_t var_38 = 0
                    int16_t var_36_1 = esi_2.w
                    int32_t var_34_1 = 0x2050001
                    esi_2 += 8
                    eax_13 = &var_38
                case 9
                    int16_t var_2e_1 = esi_2.w
                    int16_t var_30 = 0
                    int32_t var_2c_1 = 0x20005
                    esi_2 += 4
                    eax_13 = &var_30
                case 0xa
                    int16_t var_28 = 0
                    int16_t var_26_1 = esi_2.w
                    int32_t var_24_1 = 0x10003
                    eax_13 = &var_28
                    esi_2 += 0x10
            
            sub_58b650(eax_13, &var_20)
            void* eax_15 = &var_84[1]
            var_84 = eax_15
            
            if (eax_15 == ebp_1[1])
                ecx_4 = var_18_1
                eax_11 = var_1c_1
                edi_2 = var_20
                goto label_58810d
            
            edx_3 = var_84
        
        result = nullptr
    else
    label_58810d:
        var_84.w = 0xff
        var_84 = 0x110000
        int16_t var_7e_1 = 0
        
        if (&var_84 u>= eax_11 || edi_2 u> &var_84)
            if (eax_11 == ecx_4)
                sub_58b960(&var_20)
                eax_11 = var_1c_1
                edi_2 = var_20
            
            if (eax_11 != 0)
                *eax_11 = var_84
                int32_t var_80
                eax_11[1] = var_80
        else
            int32_t ebp_3 = (&var_84 - edi_2) s>> 3
            
            if (eax_11 == ecx_4)
                sub_58b960(&var_20)
                eax_11 = var_1c_1
                edi_2 = var_20
            
            if (eax_11 != 0)
                *eax_11 = *(edi_2 + (ebp_3 << 3))
                eax_11[1] = *(edi_2 + (ebp_3 << 3) + 4)
            
            ebp_1 = arg2
        
        void* var_1c_2 = &eax_11[2]
        int32_t* eax_19 = *arg1
        result_2 = nullptr
        
        if ((*(*eax_19 + 0x158))(eax_19, edi_2, &result_2) s>= 0)
            void** result_3 = result_2
            (*(*result_3 + 4))(result_3)
            int32_t* var_a4_7 = ebp_1
            void* eax_23 = sub_58b310(&arg1[0x14])
            *eax_23 = result_2
            void** result_1 = result_2
            *arg3 = zx.d(esi_2.w)
            
            if (edi_2 != 0)
                int32_t var_a4_8 = edi_2
                sub_6b4d5b()
            
            result = result_1
        else if (edi_2 == 0)
            result = nullptr
        else
            int32_t var_a4_5 = edi_2
            sub_6b4d5b()
            result = nullptr
else
    *arg3 = sub_5875e0(ebx)
    int32_t* eax_9 = esi_1[7]
    (*(*eax_9 + 4))(eax_9)
    result = esi_1[7]

fsbase->NtTib.ExceptionList = ExceptionList
return result
