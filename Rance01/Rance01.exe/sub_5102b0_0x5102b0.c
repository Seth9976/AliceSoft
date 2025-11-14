// 函数: sub_5102b0
// 地址: 0x5102b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f850
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_78
int32_t eax_2 = data_78c474 ^ &var_78
int32_t __saved_edi
int32_t var_8c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_78 = arg14
struct fileimage::CFileImageMaker::VTable* const var_74 = &fileimage::CFileImageMaker::`vftable'
int32_t result_2 = 0
int128_t* var_6c = nullptr
int32_t var_68 = 0
int32_t var_90 = 0x14
int32_t var_4 = 0
char* eax_10 = sub_4104a0("static int nShaderModel\t\t= %d;\r\n")
var_4.b = 1
int32_t ecx_5 = *(eax_10 + 0x14)
int32_t esi = *(eax_10 + 0x10)
char* ebp

if (ecx_5 u< 0x10)
    ebp = eax_10
else
    ebp = *eax_10

if (ecx_5 u>= 0x10)
    eax_10 = *eax_10

int32_t* var_90_1 = var_78
sub_4102d0(&result_2, nullptr, eax_10, &ebp[esi])
var_4.b = 0
int128_t* var_2c
int32_t var_18

if (var_18 u>= 0x10)
    int128_t* var_90_2 = var_2c
    sub_6b4d5b()

int32_t var_90_3 = arg1
char* eax_11 = sub_4104a0("static int nNumofDirLight\t= %d;\r\n")
var_4.b = 2
int32_t ecx_7 = *(eax_11 + 0x14)
int32_t esi_2 = *(eax_11 + 0x10)
char* edx_5

if (ecx_7 u< 0x10)
    edx_5 = eax_11
else
    edx_5 = *eax_11

if (ecx_7 u>= 0x10)
    eax_11 = *eax_11

int32_t* var_90_4 = var_78
sub_4102d0(&result_2, var_6c, eax_11, &edx_5[esi_2])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_5 = var_2c
    sub_6b4d5b()

int32_t var_90_6 = 0
char* eax_13 = sub_4104a0("static int nNumofPointLight\t= %d;\r\n")
var_4.b = 3
int32_t ecx_9 = *(eax_13 + 0x14)
int32_t esi_4 = *(eax_13 + 0x10)
char* edx_8

if (ecx_9 u< 0x10)
    edx_8 = eax_13
else
    edx_8 = *eax_13

if (ecx_9 u>= 0x10)
    eax_13 = *eax_13

int32_t* var_90_7 = var_78
sub_4102d0(&result_2, var_6c, eax_13, &edx_8[esi_4])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_8 = var_2c
    sub_6b4d5b()

int32_t var_90_9 = arg2
char* eax_15 = sub_4104a0("static int nShadowMode\t\t= %d;\r\n")
var_4.b = 4
int32_t ecx_11 = *(eax_15 + 0x14)
int32_t esi_6 = *(eax_15 + 0x10)
char* edx_11

if (ecx_11 u< 0x10)
    edx_11 = eax_15
else
    edx_11 = *eax_15

if (ecx_11 u>= 0x10)
    eax_15 = *eax_15

int32_t* var_90_10 = var_78
sub_4102d0(&result_2, var_6c, eax_15, &edx_11[esi_6])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_11 = var_2c
    sub_6b4d5b()

int32_t var_90_12 = arg3
char* eax_17 = sub_4104a0("static int nBumpMode\t\t= %d;\r\n")
var_4.b = 5
int32_t ecx_13 = *(eax_17 + 0x14)
int32_t esi_8 = *(eax_17 + 0x10)
char* edx_14

if (ecx_13 u< 0x10)
    edx_14 = eax_17
else
    edx_14 = *eax_17

if (ecx_13 u>= 0x10)
    eax_17 = *eax_17

int32_t* var_90_13 = var_78
sub_4102d0(&result_2, var_6c, eax_17, &edx_14[esi_8])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_14 = var_2c
    sub_6b4d5b()

int32_t ecx
int32_t var_90_15 = ecx
char* eax_19 = sub_4104a0("static int nSpecularMode\t= %d;\r\n")
var_4.b = 6
int32_t ecx_16 = *(eax_19 + 0x14)
int32_t esi_11 = *(eax_19 + 0x10)
char* edx_16

if (ecx_16 u< 0x10)
    edx_16 = eax_19
else
    edx_16 = *eax_19

if (ecx_16 u>= 0x10)
    eax_19 = *eax_19

int32_t* var_90_16 = var_78
sub_4102d0(&result_2, var_6c, eax_19, &edx_16[esi_11])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_17 = var_2c
    sub_6b4d5b()

int32_t edx
int32_t var_90_18 = edx
char* eax_21 = sub_4104a0("static int nFog\t\t\t\t= %d;\r\n")
var_4.b = 7
int32_t ecx_19 = *(eax_21 + 0x14)
int32_t esi_14 = *(eax_21 + 0x10)
char* edx_18

if (ecx_19 u< 0x10)
    edx_18 = eax_21
else
    edx_18 = *eax_21

if (ecx_19 u>= 0x10)
    eax_21 = *eax_21

int32_t* var_90_19 = var_78
sub_4102d0(&result_2, var_6c, eax_21, &edx_18[esi_14])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_20 = var_2c
    sub_6b4d5b()

int32_t var_90_21 = arg4
char* eax_23 = sub_4104a0("static int nLightMap\t\t= %d;\r\n")
var_4.b = 8
int32_t ecx_22 = *(eax_23 + 0x14)
int32_t esi_17 = *(eax_23 + 0x10)
char* edx_20

if (ecx_22 u< 0x10)
    edx_20 = eax_23
else
    edx_20 = *eax_23

if (ecx_22 u>= 0x10)
    eax_23 = *eax_23

int32_t* var_90_22 = var_78
sub_4102d0(&result_2, var_6c, eax_23, &edx_20[esi_17])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_23 = var_2c
    sub_6b4d5b()

int32_t var_90_24 = 0
char* eax_25 = sub_4104a0("static int nGlare\t\t\t= %d;\r\n")
var_4.b = 9
int32_t ecx_24 = *(eax_25 + 0x14)
int32_t esi_20 = *(eax_25 + 0x10)
char* edx_22

if (ecx_24 u< 0x10)
    edx_22 = eax_25
else
    edx_22 = *eax_25

if (ecx_24 u>= 0x10)
    eax_25 = *eax_25

int32_t* var_90_25 = var_78
sub_4102d0(&result_2, var_6c, eax_25, &edx_22[esi_20])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_26 = var_2c
    sub_6b4d5b()

int32_t var_90_27 = arg5
char* eax_27 = sub_4104a0("static int nZ\t\t\t\t= %d;\r\n")
var_4.b = 0xa
int32_t ecx_27 = *(eax_27 + 0x14)
int32_t esi_23 = *(eax_27 + 0x10)
char* edx_24

if (ecx_27 u< 0x10)
    edx_24 = eax_27
else
    edx_24 = *eax_27

if (ecx_27 u>= 0x10)
    eax_27 = *eax_27

int32_t* var_90_28 = var_78
sub_4102d0(&result_2, var_6c, eax_27, &edx_24[esi_23])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_29 = var_2c
    sub_6b4d5b()

int32_t var_90_30 = 0
char* eax_29 = sub_4104a0("static int nWater\t\t\t= %d;\r\n")
var_4.b = 0xb
int32_t ecx_29 = *(eax_29 + 0x14)
int32_t esi_25 = *(eax_29 + 0x10)
char* edx_27

if (ecx_29 u< 0x10)
    edx_27 = eax_29
else
    edx_27 = *eax_29

if (ecx_29 u>= 0x10)
    eax_29 = *eax_29

int32_t* var_90_31 = var_78
sub_4102d0(&result_2, var_6c, eax_29, &edx_27[esi_25])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_32 = var_2c
    sub_6b4d5b()

int32_t var_90_33 = arg6
char* eax_31 = sub_4104a0("static int nLighting\t\t= %d;\r\n")
var_4.b = 0xc
int32_t ecx_32 = *(eax_31 + 0x14)
int32_t esi_27 = *(eax_31 + 0x10)
char* edx_30

if (ecx_32 u< 0x10)
    edx_30 = eax_31
else
    edx_30 = *eax_31

if (ecx_32 u>= 0x10)
    eax_31 = *eax_31

int32_t* var_90_34 = var_78
sub_4102d0(&result_2, var_6c, eax_31, &edx_30[esi_27])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_35 = var_2c
    sub_6b4d5b()

int32_t var_90_36 = 0
char* eax_33 = sub_4104a0("static int nSoftFogEdge\t\t= %d;\r\n")
var_4.b = 0xd
int32_t ecx_34 = *(eax_33 + 0x14)
int32_t esi_29 = *(eax_33 + 0x10)
char* edx_33

if (ecx_34 u< 0x10)
    edx_33 = eax_33
else
    edx_33 = *eax_33

if (ecx_34 u>= 0x10)
    eax_33 = *eax_33

int32_t* var_90_37 = var_78
sub_4102d0(&result_2, var_6c, eax_33, &edx_33[esi_29])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_38 = var_2c
    sub_6b4d5b()

int32_t var_90_39 = 0
char* eax_35 = sub_4104a0("static int nSSS\t\t\t\t= %d;\r\n")
var_4.b = 0xe
int32_t ecx_36 = *(eax_35 + 0x14)
int32_t esi_31 = *(eax_35 + 0x10)
char* edx_36

if (ecx_36 u< 0x10)
    edx_36 = eax_35
else
    edx_36 = *eax_35

if (ecx_36 u>= 0x10)
    eax_35 = *eax_35

int32_t* var_90_40 = var_78
sub_4102d0(&result_2, var_6c, eax_35, &edx_36[esi_31])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_41 = var_2c
    sub_6b4d5b()

int32_t var_90_42 = arg7
char* eax_37 = sub_4104a0("static int TextureLapping\t= %d;\r\n")
var_4.b = 0xf
int32_t ecx_39 = *(eax_37 + 0x14)
int32_t esi_33 = *(eax_37 + 0x10)
char* edx_39

if (ecx_39 u< 0x10)
    edx_39 = eax_37
else
    edx_39 = *eax_37

if (ecx_39 u>= 0x10)
    eax_37 = *eax_37

int32_t* var_90_43 = var_78
sub_4102d0(&result_2, var_6c, eax_37, &edx_39[esi_33])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_44 = var_2c
    sub_6b4d5b()

int32_t var_90_45 = arg8
char* eax_39 = sub_4104a0("static int nTexture\t\t\t= %d;\r\n")
var_4.b = 0x10
int32_t ecx_42 = *(eax_39 + 0x14)
int32_t esi_35 = *(eax_39 + 0x10)
char* edx_42

if (ecx_42 u< 0x10)
    edx_42 = eax_39
else
    edx_42 = *eax_39

if (ecx_42 u>= 0x10)
    eax_39 = *eax_39

int32_t* var_90_46 = var_78
sub_4102d0(&result_2, var_6c, eax_39, &edx_42[esi_35])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_47 = var_2c
    sub_6b4d5b()

int32_t var_90_48 = 0
char* eax_41 = sub_4104a0("static int nDebug\t\t\t= %d;\r\n")
var_4.b = 0x11
int32_t ecx_44 = *(eax_41 + 0x14)
int32_t esi_37 = *(eax_41 + 0x10)
char* edx_45

if (ecx_44 u< 0x10)
    edx_45 = eax_41
else
    edx_45 = *eax_41

if (ecx_44 u>= 0x10)
    eax_41 = *eax_41

int32_t* var_90_49 = var_78
sub_4102d0(&result_2, var_6c, eax_41, &edx_45[esi_37])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_50 = var_2c
    sub_6b4d5b()

int32_t var_90_51 = arg9
char* eax_43 = sub_4104a0("static int nVertexOperation\t= %d;\r\n")
var_4.b = 0x12
int32_t ecx_47 = *(eax_43 + 0x14)
int32_t esi_39 = *(eax_43 + 0x10)
char* edx_48

if (ecx_47 u< 0x10)
    edx_48 = eax_43
else
    edx_48 = *eax_43

if (ecx_47 u>= 0x10)
    eax_43 = *eax_43

int32_t* var_90_52 = var_78
sub_4102d0(&result_2, var_6c, eax_43, &edx_48[esi_39])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_53 = var_2c
    sub_6b4d5b()

int32_t var_90_54 = arg10
char* eax_45 = sub_4104a0("static int nEnvMapping\t\t= %d;\r\n")
var_4.b = 0x13
int32_t ecx_50 = *(eax_45 + 0x14)
int32_t esi_42 = *(eax_45 + 0x10)
char* edx_50

if (ecx_50 u< 0x10)
    edx_50 = eax_45
else
    edx_50 = *eax_45

if (ecx_50 u>= 0x10)
    eax_45 = *eax_45

int32_t* var_90_55 = var_78
sub_4102d0(&result_2, var_6c, eax_45, &edx_50[esi_42])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_56 = var_2c
    sub_6b4d5b()

int32_t var_90_57 = 0
char* eax_47 = sub_4104a0("static int nSSAO\t\t\t= %d;\r\n")
var_4.b = 0x14
int32_t ecx_52 = *(eax_47 + 0x14)
int32_t esi_45 = *(eax_47 + 0x10)
char* edx_52

if (ecx_52 u< 0x10)
    edx_52 = eax_47
else
    edx_52 = *eax_47

if (ecx_52 u>= 0x10)
    eax_47 = *eax_47

int32_t* var_90_58 = var_78
sub_4102d0(&result_2, var_6c, eax_47, &edx_52[esi_45])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_59 = var_2c
    sub_6b4d5b()

int32_t var_90_60 = arg11
char* eax_49 = sub_4104a0("static int SkyDome\t\t\t= %d;\r\n")
var_4.b = 0x15
int32_t ecx_55 = *(eax_49 + 0x14)
int32_t esi_48 = *(eax_49 + 0x10)
char* edx_54

if (ecx_55 u< 0x10)
    edx_54 = eax_49
else
    edx_54 = *eax_49

if (ecx_55 u>= 0x10)
    eax_49 = *eax_49

int32_t* var_90_61 = var_78
sub_4102d0(&result_2, var_6c, eax_49, &edx_54[esi_48])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_62 = var_2c
    sub_6b4d5b()

int32_t var_90_63 = arg12
char* eax_51 = sub_4104a0("static int ZOffset\t\t\t= %d;\r\n")
var_4.b = 0x16
int32_t ecx_58 = *(eax_51 + 0x14)
int32_t esi_51 = *(eax_51 + 0x10)
char* edx_56

if (ecx_58 u< 0x10)
    edx_56 = eax_51
else
    edx_56 = *eax_51

if (ecx_58 u>= 0x10)
    eax_51 = *eax_51

int32_t* var_90_64 = var_78
sub_4102d0(&result_2, var_6c, eax_51, &edx_56[esi_51])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_65 = var_2c
    sub_6b4d5b()

int32_t var_90_66 = arg13
char* eax_53 = sub_4104a0("static int Grayscale\t\t\t= %d;\r\n")
var_4.b = 0x17
int32_t ecx_61 = *(eax_53 + 0x14)
int32_t esi_53 = *(eax_53 + 0x10)
char* edx_59

if (ecx_61 u< 0x10)
    edx_59 = eax_53
else
    edx_59 = *eax_53

if (ecx_61 u>= 0x10)
    eax_53 = *eax_53

int32_t* var_90_67 = var_78
sub_4102d0(&result_2, var_6c, eax_53, &edx_59[esi_53])
var_4.b = 0

if (var_18 u>= 0x10)
    int128_t* var_90_68 = var_2c
    sub_6b4d5b()

if (arg2 s> 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c.b = 0
    sub_401270(&var_2c, 0x12, "\r\n#define SHADOW\r\n")
    var_4.b = 0x18
    int128_t** eax_55 = var_2c
    int128_t** edx_62 = eax_55
    
    if (var_18_1 u< 0x10)
        edx_62 = &var_2c
        eax_55 = &var_2c
    
    int32_t* var_90_69 = var_78
    sub_4102d0(&result_2, var_6c, eax_55, var_1c_1 + edx_62)
    var_4.b = 0
    
    if (var_18_1 u>= 0x10)
        int128_t* var_90_70 = var_2c
        sub_6b4d5b()

if (arg2 s>= 2)
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c.b = 0
    sub_401270(&var_2c, 0x16, "\r\n#define SOFTSHADOW\r\n")
    var_4.b = 0x19
    int128_t* eax_57 = var_2c
    int128_t* edx_64 = eax_57
    
    if (var_18_2 u< 0x10)
        edx_64 = &var_2c
        eax_57 = &var_2c
    
    int32_t* var_90_71 = var_78
    sub_4102d0(&result_2, var_6c, eax_57, var_1c_2 + edx_64)
    var_4.b = 0
    
    if (var_18_2 u>= 0x10)
        int128_t* var_90_72 = var_2c
        sub_6b4d5b()

sub_5134c0(var_78, &result_2)
int32_t result = result_2

if (result != 0)
    int32_t result_1 = result
    sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_78)
return result
