// 函数: sub_42ccc0
// 地址: 0x42ccc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722b08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_80
int32_t eax_2 = data_78c474 ^ &var_80
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg1

if (ecx != 0)
    (*(*ecx + 4))(eax_4)
    *arg1 = 0

uint32_t ecx_1 = zx.d(sub_4022d0(0x7569d8, 0x7580fc).b)
int32_t ecx_2 = neg.d(ecx_1)
int32_t* ecx_4 = sbb.d(ecx_2, ecx_2, ecx_1 != 0) & data_797d28
*arg1 = ecx_4
int32_t* result

if (ecx_4 != 0)
    (**ecx_4)(eax_4)
    result = sub_597300(0x7569e8)
    
    if (result == 0)
        result.b = 0
    else
        int32_t* eax_8 = (**result)(0x756a08)
        arg1[1].b = 0
        
        if (eax_8 != 0)
            arg1[1].b = (**eax_8)()
        
        arg1[1].b = 1
        result = (**result)(0x7569f8)
        
        if (result == 0)
            result.b = 0
        else
            int32_t var_4 = 0
            int32_t var_48
            int32_t var_2c
            sub_401940(&var_48, sub_402be0(&var_2c, (*(*result + 0x14))()), &var_2c)
            int32_t* var_98_1 = &var_48
            var_4.b = 1
            int32_t* var_64
            sub_402c60(&var_64, "Flat.afa", nullptr)
            int32_t var_34
            
            if (var_34 u>= 0x10)
                int32_t var_98_2 = var_48
                sub_6b4d5b()
            
            int32_t var_6c_1 = 0xf
            int32_t var_70_1 = 0
            var_80 = 0
            var_4.b = 4
            sub_401180(&var_80, 0xffffffff, &data_79341c, 0)
            sub_587150(&var_80)
            sub_5870d0(&var_80)
            sub_402000(&var_80, &var_64, 0, 0xffffffff)
            int32_t var_50
            
            if (sub_602830(&var_80) != 0)
                int32_t* eax_19 = var_64
                
                if (var_50 u< 0x10)
                    eax_19 = &var_64
                
                (*(**arg1 + 0xc))(3, eax_19)
            
            var_4.b = 5
            sub_401180(&arg1[2], 0xffffffff, sub_42cb80(&var_48), 0)
            
            if (var_34 u>= 0x10)
                int32_t var_98_6 = var_48
                sub_6b4d5b()
            
            if (var_6c_1 u>= 0x10)
                int32_t var_98_7 = var_80.d
                sub_6b4d5b()
            
            int32_t var_6c_2 = 0xf
            int32_t var_70_2 = 0
            var_80 = 0
            
            if (var_50 u>= 0x10)
                int32_t* var_98_8 = var_64
                sub_6b4d5b()
            
            int32_t var_50_1 = 0xf
            int32_t var_54_1 = 0
            var_64.b = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_98_9 = var_2c
                sub_6b4d5b()
            
            result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_80)
return result
