// 函数: sub_565a10
// 地址: 0x565a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728353
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1[0x18a]
int32_t result

if (ebx == 0)
label_565de0:
    sub_565940(arg1)
else
    while (true)
        sub_6b2910(&arg1[0x90])
        (*(*ebx + 0xc))(eax_4)
        
        for (int32_t* i = arg1[0x18d]; i != arg1[0x18e]; i = &i[1])
            (*(**i + 4))()
        
        int128_t* ecx_3 = arg1[0x18e]
        int128_t* esi_2 = arg1[0x18d]
        
        if (esi_2 != ecx_3)
            int32_t edi_1 = 0 s>> 2 << 2
            sub_6b49d0(esi_2, ecx_3, edi_1)
            arg1[0x18e] = edi_1 + esi_2
        
        sub_5623d0(&arg1[0x19d])
        int32_t* ecx_4 = arg1[0x18a]
        arg1[0x18b] = 0
        
        if (ecx_4 != 0)
            (*(*ecx_4 + 4))()
            arg1[0x18a] = 0
        
        int32_t* ecx_5 = data_797d50
        
        if (ecx_5 != 0)
            (*(*ecx_5 + 4))()
            data_797d50 = 0
        
        if (arg1[0x1a5].b == 0)
            int32_t result_1 = arg1[0x70]
            sub_565940(arg1)
            result = result_1
            goto label_565deb
        
        sub_56ad60(&arg1[0x44])
        arg1[0x1a5].b = 0
        int32_t esi_5 = (arg1[0x176] - arg1[0x175]) s>> 2
        int32_t esi_6 = esi_5 - 1
        
        if (esi_5 - 1 s>= 0)
            int32_t temp2_1
            
            do
                int32_t eax_12 = arg1[0x175]
                
                if (*(eax_12 + (esi_6 << 2)) != 0)
                    FreeLibrary(*(eax_12 + (esi_6 << 2)))
                
                temp2_1 = esi_6
                esi_6 -= 1
            while (temp2_1 - 1 s>= 0)
        
        int128_t* ecx_8 = arg1[0x176]
        int128_t* esi_7 = arg1[0x175]
        
        if (esi_7 != ecx_8)
            int32_t edi_5 = 0 s>> 2 << 2
            sub_6b49d0(esi_7, ecx_8, edi_5)
            arg1[0x176] = edi_5 + esi_7
        
        int32_t* ecx_9 = arg1[0x189]
        
        if (ecx_9 != 0)
            (*(*ecx_9 + 4))()
            arg1[0x189] = 0
        
        sub_561b30()
        int128_t* ecx_10 = arg1[0x169]
        int128_t* esi_8 = arg1[0x168]
        
        if (esi_8 != ecx_10)
            int32_t edi_7 = 0 s>> 2 << 2
            sub_6b49d0(esi_8, ecx_10, edi_7)
            arg1[0x169] = edi_7 + esi_8
        
        if (sub_5656a0(arg1) == 0)
            break
        
        void* eax_22 = data_797d44
        char* ecx_11
        
        if (eax_22 != 0)
            if (*(eax_22 + 0x1c) == 0)
                int16_t* eax_23 = operator new(0x40)
                int16_t* var_30_1 = eax_23
                int32_t var_4 = 0
                char* eax_24
                
                if (eax_23 == 0)
                    eax_24 = nullptr
                else
                    eax_24 = sub_425860(eax_23)
                
                int32_t var_4_1 = 0xffffffff
                *(eax_22 + 0x1c) = eax_24
            
            ecx_11 = *(eax_22 + 0x1c)
        else
            ecx_11 = nullptr
        
        arg1[0xbf] = ecx_11
        arg1[0xe7] = ecx_11
        arg1[0xe9] = ecx_11
        
        if (ecx_11 != 0)
            sub_425f10(ecx_11, &arg1[0x133])
        
        if (arg1[0xbf] != 0)
            arg1[0xbf]->vFunc_15 = (*arg1[0x132]->vFunc_0)(0x74b750)
        
        void* eax_27 = arg1[0xe5]
        
        if (eax_27 != 0)
            *(eax_27 + 0x24) = arg1[0xbf]
        
        int32_t* esi_10 = arg1[0x13c]
        
        if (esi_10[2].b != 0)
            timeEndPeriod(*esi_10)
            esi_10[2].b = 0
        
        int32_t* ptc = arg1[0x13c]
        
        if (ptc[2].b != 0)
            timeEndPeriod(*ptc)
            ptc[2].b = 0
        
        if (timeGetDevCaps(ptc, 8) == 0 && timeBeginPeriod(*ptc) == 0)
            ptc[2].b = 1
        
        if (sub_56f0f0(&arg1[0x18a], arg1[4]) == 0)
            break
        
        ebx = arg1[0x18a]
        
        if (ebx == 0)
            goto label_565de0
        
        if ((*(*ebx + 8))(arg1, &arg1[1]) == 0)
            (*(*ebx + 4))()
            goto label_565de0
        
        if (arg1[0x18b] == 0)
            int32_t eax_37 = (*(arg1[0x18a]->vFunc_0 + 0x10))(0x74b508)
            arg1[0x18b] = eax_37
            
            if (eax_37 == 0)
                continue
        
        if ((*arg1[0x18b]->vFunc_0)() != 0)
            int128_t* eax_41 = arg1[0x13f]->vFunc_0()
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            char* ecx_20 = eax_41
            char i_1
            
            do
                i_1 = *ecx_20
                ecx_20 = &ecx_20[1]
            while (i_1 != 0)
            sub_401270(&var_2c, ecx_20 - (eax_41 + 1), eax_41)
            int32_t var_4_2 = 1
            sub_5621a0(&arg1[0x19d], &arg1[0x19a])
            int32_t var_4_3 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                int32_t var_4c_15 = var_2c.d
                sub_6b4d5b()
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0

result = 0
label_565deb:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
