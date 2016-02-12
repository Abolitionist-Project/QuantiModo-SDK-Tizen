
#include "SamiTrackingReminder.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiTrackingReminder::SamiTrackingReminder() {
    init();
}

SamiTrackingReminder::~SamiTrackingReminder() {
    this->cleanup();
}

void
SamiTrackingReminder::init() {
    pId = null;
    pClient_id = null;
    pUser_id = null;
    pVariable_id = null;
    pDefault_value = null;
    pReminder_start_time = null;
    pReminder_end_time = null;
    pReminder_sound = null;
    pReminder_frequency = null;
    pPop_up = null;
    pSms = null;
    pEmail = null;
    pNotification_bar = null;
    pLast_reminded = null;
    pLast_tracked = null;
    pCreated_at = null;
    pUpdated_at = null;
    
}

void
SamiTrackingReminder::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pClient_id != null) {
        
        delete pClient_id;
        pClient_id = null;
    }
    if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
    if(pVariable_id != null) {
        
        delete pVariable_id;
        pVariable_id = null;
    }
    if(pDefault_value != null) {
        
        delete pDefault_value;
        pDefault_value = null;
    }
    if(pReminder_start_time != null) {
        
        delete pReminder_start_time;
        pReminder_start_time = null;
    }
    if(pReminder_end_time != null) {
        
        delete pReminder_end_time;
        pReminder_end_time = null;
    }
    if(pReminder_sound != null) {
        
        delete pReminder_sound;
        pReminder_sound = null;
    }
    if(pReminder_frequency != null) {
        
        delete pReminder_frequency;
        pReminder_frequency = null;
    }
    if(pPop_up != null) {
        
        delete pPop_up;
        pPop_up = null;
    }
    if(pSms != null) {
        
        delete pSms;
        pSms = null;
    }
    if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
    if(pNotification_bar != null) {
        
        delete pNotification_bar;
        pNotification_bar = null;
    }
    if(pLast_reminded != null) {
        
        delete pLast_reminded;
        pLast_reminded = null;
    }
    if(pLast_tracked != null) {
        
        delete pLast_tracked;
        pLast_tracked = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    if(pUpdated_at != null) {
        
        delete pUpdated_at;
        pUpdated_at = null;
    }
    
}


SamiTrackingReminder*
SamiTrackingReminder::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiTrackingReminder::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
        JsonString* pClient_idKey = new JsonString(L"client_id");
        IJsonValue* pClient_idVal = null;
        pJsonObject->GetValue(pClient_idKey, pClient_idVal);
        if(pClient_idVal != null) {
            
            pClient_id = new String();
            jsonToValue(pClient_id, pClient_idVal, L"String", L"String");
        }
        delete pClient_idKey;
        JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
        JsonString* pVariable_idKey = new JsonString(L"variable_id");
        IJsonValue* pVariable_idVal = null;
        pJsonObject->GetValue(pVariable_idKey, pVariable_idVal);
        if(pVariable_idVal != null) {
            
            pVariable_id = new Integer();
            jsonToValue(pVariable_id, pVariable_idVal, L"Integer", L"Integer");
        }
        delete pVariable_idKey;
        JsonString* pDefault_valueKey = new JsonString(L"default_value");
        IJsonValue* pDefault_valueVal = null;
        pJsonObject->GetValue(pDefault_valueKey, pDefault_valueVal);
        if(pDefault_valueVal != null) {
            
            pDefault_value = new Float();
            jsonToValue(pDefault_value, pDefault_valueVal, L"Float", L"Float");
        }
        delete pDefault_valueKey;
        JsonString* pReminder_start_timeKey = new JsonString(L"reminder_start_time");
        IJsonValue* pReminder_start_timeVal = null;
        pJsonObject->GetValue(pReminder_start_timeKey, pReminder_start_timeVal);
        if(pReminder_start_timeVal != null) {
            
            pReminder_start_time = new String();
            jsonToValue(pReminder_start_time, pReminder_start_timeVal, L"String", L"String");
        }
        delete pReminder_start_timeKey;
        JsonString* pReminder_end_timeKey = new JsonString(L"reminder_end_time");
        IJsonValue* pReminder_end_timeVal = null;
        pJsonObject->GetValue(pReminder_end_timeKey, pReminder_end_timeVal);
        if(pReminder_end_timeVal != null) {
            
            pReminder_end_time = new String();
            jsonToValue(pReminder_end_time, pReminder_end_timeVal, L"String", L"String");
        }
        delete pReminder_end_timeKey;
        JsonString* pReminder_soundKey = new JsonString(L"reminder_sound");
        IJsonValue* pReminder_soundVal = null;
        pJsonObject->GetValue(pReminder_soundKey, pReminder_soundVal);
        if(pReminder_soundVal != null) {
            
            pReminder_sound = new String();
            jsonToValue(pReminder_sound, pReminder_soundVal, L"String", L"String");
        }
        delete pReminder_soundKey;
        JsonString* pReminder_frequencyKey = new JsonString(L"reminder_frequency");
        IJsonValue* pReminder_frequencyVal = null;
        pJsonObject->GetValue(pReminder_frequencyKey, pReminder_frequencyVal);
        if(pReminder_frequencyVal != null) {
            
            pReminder_frequency = new Integer();
            jsonToValue(pReminder_frequency, pReminder_frequencyVal, L"Integer", L"Integer");
        }
        delete pReminder_frequencyKey;
        JsonString* pPop_upKey = new JsonString(L"pop_up");
        IJsonValue* pPop_upVal = null;
        pJsonObject->GetValue(pPop_upKey, pPop_upVal);
        if(pPop_upVal != null) {
            
            pPop_up = new Boolean(false);
            jsonToValue(pPop_up, pPop_upVal, L"Boolean", L"Boolean");
        }
        delete pPop_upKey;
        JsonString* pSmsKey = new JsonString(L"sms");
        IJsonValue* pSmsVal = null;
        pJsonObject->GetValue(pSmsKey, pSmsVal);
        if(pSmsVal != null) {
            
            pSms = new Boolean(false);
            jsonToValue(pSms, pSmsVal, L"Boolean", L"Boolean");
        }
        delete pSmsKey;
        JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new Boolean(false);
            jsonToValue(pEmail, pEmailVal, L"Boolean", L"Boolean");
        }
        delete pEmailKey;
        JsonString* pNotification_barKey = new JsonString(L"notification_bar");
        IJsonValue* pNotification_barVal = null;
        pJsonObject->GetValue(pNotification_barKey, pNotification_barVal);
        if(pNotification_barVal != null) {
            
            pNotification_bar = new Boolean(false);
            jsonToValue(pNotification_bar, pNotification_barVal, L"Boolean", L"Boolean");
        }
        delete pNotification_barKey;
        JsonString* pLast_remindedKey = new JsonString(L"last_reminded");
        IJsonValue* pLast_remindedVal = null;
        pJsonObject->GetValue(pLast_remindedKey, pLast_remindedVal);
        if(pLast_remindedVal != null) {
            
            pLast_reminded = new DateTime();
            jsonToValue(pLast_reminded, pLast_remindedVal, L"DateTime", L"DateTime");
        }
        delete pLast_remindedKey;
        JsonString* pLast_trackedKey = new JsonString(L"last_tracked");
        IJsonValue* pLast_trackedVal = null;
        pJsonObject->GetValue(pLast_trackedKey, pLast_trackedVal);
        if(pLast_trackedVal != null) {
            
            pLast_tracked = new DateTime();
            jsonToValue(pLast_tracked, pLast_trackedVal, L"DateTime", L"DateTime");
        }
        delete pLast_trackedKey;
        JsonString* pCreated_atKey = new JsonString(L"created_at");
        IJsonValue* pCreated_atVal = null;
        pJsonObject->GetValue(pCreated_atKey, pCreated_atVal);
        if(pCreated_atVal != null) {
            
            pCreated_at = new DateTime();
            jsonToValue(pCreated_at, pCreated_atVal, L"DateTime", L"DateTime");
        }
        delete pCreated_atKey;
        JsonString* pUpdated_atKey = new JsonString(L"updated_at");
        IJsonValue* pUpdated_atVal = null;
        pJsonObject->GetValue(pUpdated_atKey, pUpdated_atVal);
        if(pUpdated_atVal != null) {
            
            pUpdated_at = new DateTime();
            jsonToValue(pUpdated_at, pUpdated_atVal, L"DateTime", L"DateTime");
        }
        delete pUpdated_atKey;
        
    }
}

SamiTrackingReminder::SamiTrackingReminder(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiTrackingReminder::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiTrackingReminder::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pClient_idKey = new JsonString(L"client_id");
    pJsonObject->Add(pClient_idKey, toJson(getPClientId(), "String", ""));

    
    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    
    JsonString *pVariable_idKey = new JsonString(L"variable_id");
    pJsonObject->Add(pVariable_idKey, toJson(getPVariableId(), "Integer", ""));

    
    JsonString *pDefault_valueKey = new JsonString(L"default_value");
    pJsonObject->Add(pDefault_valueKey, toJson(getPDefaultValue(), "Float", ""));

    
    JsonString *pReminder_start_timeKey = new JsonString(L"reminder_start_time");
    pJsonObject->Add(pReminder_start_timeKey, toJson(getPReminderStartTime(), "String", ""));

    
    JsonString *pReminder_end_timeKey = new JsonString(L"reminder_end_time");
    pJsonObject->Add(pReminder_end_timeKey, toJson(getPReminderEndTime(), "String", ""));

    
    JsonString *pReminder_soundKey = new JsonString(L"reminder_sound");
    pJsonObject->Add(pReminder_soundKey, toJson(getPReminderSound(), "String", ""));

    
    JsonString *pReminder_frequencyKey = new JsonString(L"reminder_frequency");
    pJsonObject->Add(pReminder_frequencyKey, toJson(getPReminderFrequency(), "Integer", ""));

    
    JsonString *pPop_upKey = new JsonString(L"pop_up");
    pJsonObject->Add(pPop_upKey, toJson(getPPopUp(), "Boolean", ""));

    
    JsonString *pSmsKey = new JsonString(L"sms");
    pJsonObject->Add(pSmsKey, toJson(getPSms(), "Boolean", ""));

    
    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "Boolean", ""));

    
    JsonString *pNotification_barKey = new JsonString(L"notification_bar");
    pJsonObject->Add(pNotification_barKey, toJson(getPNotificationBar(), "Boolean", ""));

    
    JsonString *pLast_remindedKey = new JsonString(L"last_reminded");
    pJsonObject->Add(pLast_remindedKey, toJson(getPLastReminded(), "DateTime", ""));

    
    JsonString *pLast_trackedKey = new JsonString(L"last_tracked");
    pJsonObject->Add(pLast_trackedKey, toJson(getPLastTracked(), "DateTime", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    return pJsonObject;
}

Integer*
SamiTrackingReminder::getPId() {
    return pId;
}
void
SamiTrackingReminder::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiTrackingReminder::getPClientId() {
    return pClient_id;
}
void
SamiTrackingReminder::setPClientId(String* pClient_id) {
    this->pClient_id = pClient_id;
}

Integer*
SamiTrackingReminder::getPUserId() {
    return pUser_id;
}
void
SamiTrackingReminder::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}

Integer*
SamiTrackingReminder::getPVariableId() {
    return pVariable_id;
}
void
SamiTrackingReminder::setPVariableId(Integer* pVariable_id) {
    this->pVariable_id = pVariable_id;
}

Float*
SamiTrackingReminder::getPDefaultValue() {
    return pDefault_value;
}
void
SamiTrackingReminder::setPDefaultValue(Float* pDefault_value) {
    this->pDefault_value = pDefault_value;
}

String*
SamiTrackingReminder::getPReminderStartTime() {
    return pReminder_start_time;
}
void
SamiTrackingReminder::setPReminderStartTime(String* pReminder_start_time) {
    this->pReminder_start_time = pReminder_start_time;
}

String*
SamiTrackingReminder::getPReminderEndTime() {
    return pReminder_end_time;
}
void
SamiTrackingReminder::setPReminderEndTime(String* pReminder_end_time) {
    this->pReminder_end_time = pReminder_end_time;
}

String*
SamiTrackingReminder::getPReminderSound() {
    return pReminder_sound;
}
void
SamiTrackingReminder::setPReminderSound(String* pReminder_sound) {
    this->pReminder_sound = pReminder_sound;
}

Integer*
SamiTrackingReminder::getPReminderFrequency() {
    return pReminder_frequency;
}
void
SamiTrackingReminder::setPReminderFrequency(Integer* pReminder_frequency) {
    this->pReminder_frequency = pReminder_frequency;
}

Boolean*
SamiTrackingReminder::getPPopUp() {
    return pPop_up;
}
void
SamiTrackingReminder::setPPopUp(Boolean* pPop_up) {
    this->pPop_up = pPop_up;
}

Boolean*
SamiTrackingReminder::getPSms() {
    return pSms;
}
void
SamiTrackingReminder::setPSms(Boolean* pSms) {
    this->pSms = pSms;
}

Boolean*
SamiTrackingReminder::getPEmail() {
    return pEmail;
}
void
SamiTrackingReminder::setPEmail(Boolean* pEmail) {
    this->pEmail = pEmail;
}

Boolean*
SamiTrackingReminder::getPNotificationBar() {
    return pNotification_bar;
}
void
SamiTrackingReminder::setPNotificationBar(Boolean* pNotification_bar) {
    this->pNotification_bar = pNotification_bar;
}

DateTime*
SamiTrackingReminder::getPLastReminded() {
    return pLast_reminded;
}
void
SamiTrackingReminder::setPLastReminded(DateTime* pLast_reminded) {
    this->pLast_reminded = pLast_reminded;
}

DateTime*
SamiTrackingReminder::getPLastTracked() {
    return pLast_tracked;
}
void
SamiTrackingReminder::setPLastTracked(DateTime* pLast_tracked) {
    this->pLast_tracked = pLast_tracked;
}

DateTime*
SamiTrackingReminder::getPCreatedAt() {
    return pCreated_at;
}
void
SamiTrackingReminder::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiTrackingReminder::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiTrackingReminder::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}



} /* namespace Swagger */

