// 函数: sub_628d00
// 地址: 0x628d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_725ab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg1[0x33]
int32_t eax_9
int32_t edx
edx:eax_9 = sx.q(GetScrollPos(arg1[0x22], SB_VERT) * esi + (arg3 u>> 0x10))
int32_t edi_2 = divs.dp.d(edx:eax_9, esi)
int32_t eax_11 = arg1[0x36]
int32_t var_58 = edi_2
void* var_60
int32_t eax_24
char eax_32

switch (eax_11)
    case 0
        if (edi_2 s>= 0 && edi_2 s< (***(arg1[0x37] + 4))(eax_4))
            int32_t var_40_1 = 0xf
            int32_t var_44_1 = 0
            char var_54 = 0
            int32_t var_c_1 = 0
            sub_622ca0(arg1[0x37], &var_54, edi_2)
            char* edx_3 = var_54.d
            
            if (var_40_1 u< 0x10)
                edx_3 = &var_54
            
            void var_38
            sub_402be0(&var_38, edx_3)
            var_c_1.b = 1
            sub_6298a0(edi_2, arg1[0x3a], &var_38, 1)
            var_c_1.b = 0
            sub_401110(&var_38)
            void* eax_17 = arg1[0x37]
            arg1[0x4d] = edi_2
            
            if ((*(**(eax_17 + 4) + 0x14))(edi_2) == 2)
                sub_629c80(arg1, arg2, edi_2)
            
            int32_t var_c_2 = 0xffffffff
            sub_401110(&var_54)
    case 1
        void* esi_1 = arg1[0x37]
        
        if (edi_2 s>= 0 && edi_2 s< (*(esi_1 + 0x38) - *(esi_1 + 0x34)) s>> 2)
            edi_2 = sub_6251c0(edi_2, mods.dp.d(edx:eax_9, esi), esi_1)
            eax_24 = (*(**(esi_1 + 8) + 0x18))(edi_2)
        label_629012:
            
            if (eax_24 - 0xa u<= 0x25 && sub_629b10(eax_24 - 0xa) == 0)
                sub_629c80(arg1, arg2, edi_2)
    case 2
        void* esi_2 = arg1[0x37]
        
        if (edi_2 s>= 0 && edi_2 s<
                (*(**(esi_2 + 8) + 8))((*(**(esi_2 + 4) + 0x18))((*(**(esi_2 + 4) + 8))(eax_4))))
            eax_32 = sub_623530(arg1[0x37], edi_2, &var_60)
        label_628ec3:
            
            if (eax_32 != 0 && var_60 - 0xa u<= 0x25 && sub_629b10(var_60 - 0xa) == 0)
                sub_629c80(arg1, arg2, edi_2)
    case 4
        int32_t ecx_15 = arg1[0x3b]
        int32_t eax_36 = arg1[0x3c]
        
        if (ecx_15 != eax_36)
            void* esi_3 = *(arg1[0x3b] + (eax_36 - ecx_15) s/ 0x28 * 0x28 - 0x28)
            int32_t eax_44 = *(**(arg1[0x37] + 4) + 0x14)
            var_60 = esi_3
            int32_t eax_45
            int32_t ecx_19
            eax_45, ecx_19 = eax_44(esi_3)
            
            if (eax_45 == 1)
                int32_t eax_58
                int32_t ecx_22
                eax_58, ecx_22 = sub_6238f0(ecx_19, esi_3, arg1[0x37])
                
                if (edi_2 s>= 0 && edi_2 s< eax_58
                        && sub_623910(ecx_22, var_60, arg1[0x37], edi_2, &var_58) != 0)
                    eax_24 = var_58
                    goto label_629012
            else if (eax_45 == 3)
                if (edi_2 s>= 0 && edi_2 s< sub_624990(arg1[0x37], esi_3)
                        && sub_6249c0(&var_60, arg1[0x37]) != 0 && var_60 - 0xa u<= 0x25
                        && sub_629b10(var_60 - 0xa) == 0)
                    sub_629c80(arg1, arg2, var_58)
            else if (eax_45 == 4 && edi_2 s>= 0 && edi_2 s< sub_624620(ecx_19, esi_3, arg1[0x37]))
                eax_32 = sub_624640(&var_60, var_60, arg1[0x37], edi_2, &var_60)
                goto label_628ec3

sub_629b60(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return 0
