// 函数: sub_561b30
// 地址: 0x561b30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_797de0

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    data_797de0 = 0

int32_t* ecx_1 = data_797dd4

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    data_797dd4 = 0

void* eax_5 = data_797dcc

if (eax_5 != 0)
    (*(*(eax_5 + 4) + 4))(eax_2)
    data_797dcc = 0

void* eax_7 = data_797dc8

if (eax_7 != 0)
    (*(*(eax_7 + 0xb0) + 4))(eax_2)
    data_797dc8 = 0

int32_t* ecx_4 = data_797da8

if (ecx_4 != 0)
    (*(*ecx_4 + 4))(eax_2)
    data_797da8 = 0

int32_t eax_10 = data_797d30

if (eax_10 != 0)
    int32_t var_30_1 = eax_10
    sub_6b4d5b()
    data_797d30 = 0

int32_t* esi = data_797d40

if (esi != 0)
    sub_4230a0(esi)
    int32_t* var_30_2 = esi
    sub_6b4d5b()
    data_797d40 = 0

void* esi_1 = data_797d9c

if (esi_1 != 0)
    sub_5da500(esi_1)
    void* var_30_3 = esi_1
    sub_6b4d5b()
    data_797d9c = 0

int32_t* ecx_5 = data_797d88

if (ecx_5 != 0)
    (**ecx_5)(1)
    data_797d88 = 0

int32_t* esi_2 = data_797d68

if (esi_2 != 0)
    sub_59b420(&esi_2[7])
    sub_598bf0(esi_2)
    int32_t var_30_5 = *esi_2
    sub_6b4d5b()
    int32_t* var_30_6 = esi_2
    sub_6b4d5b()
    data_797d68 = 0

sub_699a40()
struct IDXPlugin::sealengine::CApp::VTable** eax_14 = data_797d4c

if (eax_14 != 0)
    sub_520e60(eax_14)
    data_797d4c = 0

char* eax_15 = data_797d94

if (eax_15 != 0)
    sub_5d9c10(eax_15)
    data_797d94 = 0

int32_t* ecx_6 = data_797d2c

if (ecx_6 != 0)
    (*(*ecx_6 + 4))(eax_2)
    data_797d2c = 0

int32_t* ecx_7 = data_797dd0

if (ecx_7 != 0)
    ecx_7 = (*(*ecx_7 + 8))(eax_2)
    data_797dd0 = 0

char* esi_3 = data_797d44

if (esi_3 != 0)
    sub_424e60(esi_3)
    char* var_30_9 = esi_3
    ecx_7 = sub_6b4d5b()
    data_797d44 = 0

int32_t* eax_18 = data_797d7c

if (eax_18 != 0)
    ecx_7 = sub_5ca9b0(eax_18)
    data_797d7c = 0

int32_t* eax_19 = data_797d84

if (eax_19 != 0)
    sub_5cde60(ecx_7, eax_19)
    data_797d84 = 0

int32_t eax_20 = data_797d8c

if (eax_20 != 0)
    int32_t var_30_12 = eax_20
    sub_6b4d5b()
    data_797d8c = 0

struct IDrawPluginManager::drawpluginmanager::CApp::VTable** eax_21 = data_797d38

if (eax_21 != 0)
    sub_40ef10(eax_21)
    struct IDrawPluginManager::drawpluginmanager::CApp::VTable** var_30_14 = eax_21
    sub_6b4d5b()
    data_797d38 = 0

struct IDrawPlugin::drawgraph::CApp::VTable** eax_22 = data_797d34

if (eax_22 != 0)
    struct IDrawPlugin::drawgraph::CApp::VTable** var_30_15 = eax_22
    *eax_22 = &drawgraph::CApp::`vftable'{for `IDrawPlugin'}
    sub_6b4d5b()
    data_797d34 = 0

struct IMarmotModelEngine::marmot::CMarmotModelEngine::VTable** esi_5 = data_797d5c

if (esi_5 != 0)
    sub_595cf0(esi_5)
    data_797d5c = 0

void* esi_6 = data_797d90

if (esi_6 != 0)
    sub_5d18e0(esi_6)
    void* var_30_16 = esi_6
    sub_6b4d5b()
    data_797d90 = 0

void* esi_7 = data_797d80

if (esi_7 != 0)
    sub_5cad70(esi_7)
    void* var_30_17 = esi_7
    sub_6b4d5b()
    data_797d80 = 0

int32_t eax_23 = data_797d58

if (eax_23 != 0)
    int32_t var_30_18 = eax_23
    sub_6b4d5b()
    data_797d58 = 0

int32_t* ecx_8 = data_797d70

if (ecx_8 != 0)
    ecx_8 = (*(*ecx_8 + 4))(eax_2)
    data_797d70 = 0

void* eax_25 = data_797d28

if (eax_25 != 0)
    sub_4026e0(ecx_8, eax_25)
    void* var_30_20 = eax_25
    sub_6b4d5b()
    data_797d28 = 0

int32_t* ecx_9 = data_797d78

if (ecx_9 != 0)
    (*(*ecx_9 + 4))(eax_2)
    data_797d78 = 0

int32_t* ecx_10 = data_797d3c

if (ecx_10 != 0)
    (*(*ecx_10 + 0x6c))(1)
    data_797d3c = 0

int32_t* ecx_11 = data_797d64

if (ecx_11 != 0)
    (*(*ecx_11 + 4))(eax_2)
    data_797d64 = 0

int32_t* ecx_12 = data_797dd8

if (ecx_12 != 0)
    (*(*ecx_12 + 4))(eax_2)
    data_797dd8 = 0

int32_t* result = data_797d60

if (result != 0)
    int32_t* result_2 = result
    int32_t var_4 = 0
    int32_t* ecx_13 = result[1]
    void var_10
    sub_40f580(result, &var_10, *ecx_13, ecx_13)
    int32_t var_30_22 = result[1]
    sub_6b4d5b()
    int32_t* result_1 = result
    result = sub_6b4d5b()
    data_797d60 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
