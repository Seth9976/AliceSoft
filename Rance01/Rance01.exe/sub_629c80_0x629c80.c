// 函数: sub_629c80
// 地址: 0x629c80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718f66
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_484
int32_t eax_2 = data_78c474 ^ &var_484
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *(arg1 + 0xd8)
float ebx = 0f
int32_t var_47c = 0
float var_480 = 0f
int32_t var_474 = 0
int32_t result_1 = 0
int32_t edi_1

switch (result)
    case 0
        edi_1 = 0xc
        var_480 = arg3
    label_629e6f:
        result = edi_1 - 0xa
        char* var_4a8_1
        void* const var_4a0_3
        void var_414
        
        switch (result)
            case 0, 0x25
                float var_49c_12 = var_480
                var_4a0_3 = &data_733d44
                int32_t var_4a4_1 = 0x400
                var_4a8_1 = &var_414
            label_629f05:
                _swprintf(var_4a8_1, 0x400, var_4a0_3)
                goto label_629f12
            case 1
                float var_4a0
                var_4a0.q = fconvert.d(fconvert.t(var_480))
                _swprintf(&var_414, 0x400, 0x733d48)
            label_629f12:
                POINT point
                GetCursorPos(&point)
                int32_t eax_33 = point.x - 0x50
                int32_t ecx_13 = point.y - 0xc
                int32_t var_460_1 = 0
                struct dpvariable::CDialog::dpvariable::CInputDlg::VTable* const var_464 =
                    &dpvariable::CInputDlg::`vftable'{for `dpvariable::CDialog'}
                int32_t var_448_1 = 0xf
                int32_t var_44c_1 = 0
                char var_45c = 0
                int32_t var_440_1 = 0
                int32_t var_43c_1 = 0
                int32_t var_438_1 = 0
                int32_t var_434_1 = 0
                int32_t var_4 = 0
                result = sub_61ed10(&var_414, &var_464, arg2, eax_33, ecx_13)
                
                if (result.b != 0)
                    char* edx_12 = var_45c.d
                    
                    if (var_448_1 u< 0x10)
                        edx_12 = &var_45c
                    
                    int32_t* var_430
                    sub_402be0(&var_430, edx_12)
                    var_4.b = 1
                    int32_t var_41c
                    
                    if (edi_1 == 0xa)
                    label_629fc6:
                        int32_t* eax_41 = var_430
                        
                        if (var_41c u< 0x10)
                            eax_41 = &var_430
                        
                        int32_t* var_49c_18 = &var_480
                        
                        if (sub_6b51b5(eax_41, 0x733d50) == 1)
                            goto label_629fec
                        
                    label_62a066:
                        result = sub_401110(&var_430)
                        var_464 = &dpvariable::CInputDlg::`vftable'{for `dpvariable::CDialog'}
                        
                        if (var_448_1 u>= 0x10)
                            int32_t var_49c_22 = var_45c.d
                            result = sub_6b4d5b()
                    else
                        if (edi_1 != 0xb)
                            if (edi_1 == 0x2f)
                                goto label_629fc6
                            
                        label_629fec:
                            
                            if (edi_1 != 0xc)
                                goto label_62a087
                            
                            int32_t var_420
                            
                            if ((*(*result_1 + 8))(var_420 + 1) != 0)
                                int32_t* eax_45 = var_430
                                
                                if (var_41c u< 0x10)
                                    eax_45 = &var_430
                                
                                sub_6c02a0((*(*result_1 + 0x18))(eax_45, var_420 + 1, eax_4))
                            
                            goto label_62a19a
                        
                        int32_t** eax_48 = var_430
                        
                        if (var_41c u< 0x10)
                            eax_48 = &var_430
                        
                        int32_t* var_49c_21 = &var_480
                        
                        if (sub_6b51b5(eax_48, 0x733d54) != 1)
                            goto label_62a066
                        
                    label_62a087:
                        int32_t eax_50 = *(arg1 + 0xd8)
                        
                        if (eax_50 == 1)
                            if (edi_1 s< 0xa || (edi_1 s> 0xb && edi_1 != 0x2f))
                                goto label_62a19a
                            
                            if (sub_622ea0(*(arg1 + 0xdc), arg3, var_480) == 0)
                                goto label_62a066
                            
                            goto label_62a19a
                        
                        if (eax_50 == 2)
                            if (edi_1 s< 0xa || (edi_1 s> 0xb && edi_1 != 0x2f))
                                goto label_62a19a
                            
                            if (sub_623830(*(arg1 + 0xdc), arg3, var_480) != 0)
                                goto label_62a19a
                            
                            goto label_62a066
                        
                        if (eax_50 != 4)
                            goto label_62a19a
                        
                        if (var_474 == 1)
                            sub_6239c0(*(arg1 + 0xdc), arg3, ebx, var_480)
                        label_62a19a:
                            result = sub_401110(&var_430)
                            var_464 = &dpvariable::CInputDlg::`vftable'{for `dpvariable::CDialog'}
                            
                            if (var_448_1 u>= 0x10)
                                int32_t var_49c_29 = var_45c.d
                                result = sub_6b4d5b()
                        else
                            if (var_474 != 3)
                                if (var_474 != 4)
                                    goto label_62a19a
                                
                                if (sub_6239c0(*(arg1 + 0xdc), arg3, ebx, var_480) != 0)
                                    goto label_62a19a
                                
                                goto label_62a066
                            
                            if (sub_6239c0(*(arg1 + 0xdc), arg3, ebx, var_480) != 0)
                                goto label_62a19a
                            
                            result = sub_401110(&var_430)
                            var_464 = &dpvariable::CInputDlg::`vftable'{for `dpvariable::CDialog'}
                            
                            if (var_448_1 u>= 0x10)
                                int32_t var_49c_25 = var_45c.d
                                result = sub_6b4d5b()
                else
                    var_464 = &dpvariable::CInputDlg::`vftable'{for `dpvariable::CDialog'}
                    
                    if (var_448_1 u>= 0x10)
                        int32_t var_49c_17 = var_45c.d
                        result = sub_6b4d5b()
            case 2
                result = (*(**(*(arg1 + 0xdc) + 4) + 4))(var_480)
                result_1 = result
                
                if (result != 0)
                    int32_t var_49c_14 = (*(*result + 0x18))(eax_4)
                    var_4a0_3 = &data_733d4c
                    int32_t var_4a4_2 = 0x400
                    var_4a8_1 = &var_414
                    goto label_629f05
    case 1
        var_47c = (*(**(*(arg1 + 0xdc) + 8) + 0x18))(arg3)
        result = sub_622e30(*(arg1 + 0xdc), arg3, &var_480)
        
        if (result.b != 0)
        label_629e6b:
            edi_1 = var_47c
            goto label_629e6f
    case 2
        if (sub_623530(*(arg1 + 0xdc), arg3, &var_47c) != 0)
            sub_6237d0(*(arg1 + 0xdc), arg3, &var_480)
        
        goto label_629e6b
    case 4
        int32_t esi_1 = *(arg1 + 0xec)
        int32_t eax_13
        int32_t edx_2
        edx_2:eax_13 = muls.dp.d(0x66666667, *(arg1 + 0xf0) - esi_1)
        int32_t edx_3 = edx_2 s>> 4
        ebx = *(esi_1 + ((edx_3 u>> 0x1f) + edx_3) * 0x28 - 0x28)
        int32_t eax_19
        int32_t ecx_7
        eax_19, ecx_7 = (*(**(*(arg1 + 0xdc) + 4) + 0x14))(ebx)
        var_474 = eax_19
        
        if (eax_19 == 1)
            result = sub_623910(ecx_7, ebx, *(arg1 + 0xdc), arg3, &var_47c)
            
            if (result.b != 0)
                result = sub_6246f0(*(arg1 + 0xdc), arg3, ebx, &var_480)
            label_629e61:
                
                if (result.b != 0)
                    goto label_629e6b
        else if (eax_19 == 3)
            result = sub_6249c0(&var_47c, *(arg1 + 0xdc))
            
            if (result.b != 0)
                result = sub_6246f0(*(arg1 + 0xdc), arg3, ebx, &var_480)
                goto label_629e61
        else
            result = eax_19 - 4
            
            if (eax_19 == 4)
                result = sub_624640(&var_47c, ebx, *(arg1 + 0xdc), arg3, &var_47c)
                
                if (result.b != 0)
                    result = sub_6246f0(*(arg1 + 0xdc), arg3, ebx, &var_480)
                    goto label_629e61

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_484)
return result
