
#include "SamiPermission.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPermission::SamiPermission() {
    init();
}

SamiPermission::~SamiPermission() {
    this->cleanup();
}

void
SamiPermission::init() {
    pTarget = null;
    pVariableName = null;
    pMin_timestamp = null;
    pMax_timestamp = null;
    pMin_time_of_day = null;
    pMax_time_of_day = null;
    pWeek = null;
    
}

void
SamiPermission::cleanup() {
    if(pTarget != null) {
        
        delete pTarget;
        pTarget = null;
    }
    if(pVariableName != null) {
        
        delete pVariableName;
        pVariableName = null;
    }
    if(pMin_timestamp != null) {
        
        delete pMin_timestamp;
        pMin_timestamp = null;
    }
    if(pMax_timestamp != null) {
        
        delete pMax_timestamp;
        pMax_timestamp = null;
    }
    if(pMin_time_of_day != null) {
        
        delete pMin_time_of_day;
        pMin_time_of_day = null;
    }
    if(pMax_time_of_day != null) {
        
        delete pMax_time_of_day;
        pMax_time_of_day = null;
    }
    if(pWeek != null) {
        
        delete pWeek;
        pWeek = null;
    }
    
}


SamiPermission*
SamiPermission::fromJson(String* json) {
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
SamiPermission::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pTargetKey = new JsonString(L"target");
        IJsonValue* pTargetVal = null;
        pJsonObject->GetValue(pTargetKey, pTargetVal);
        if(pTargetVal != null) {
            
            pTarget = null;
            jsonToValue(pTarget, pTargetVal, L"Integer", L"Integer");
        }
        delete pTargetKey;
        JsonString* pVariableNameKey = new JsonString(L"variableName");
        IJsonValue* pVariableNameVal = null;
        pJsonObject->GetValue(pVariableNameKey, pVariableNameVal);
        if(pVariableNameVal != null) {
            
            pVariableName = new String();
            jsonToValue(pVariableName, pVariableNameVal, L"String", L"String");
        }
        delete pVariableNameKey;
        JsonString* pMin_timestampKey = new JsonString(L"min_timestamp");
        IJsonValue* pMin_timestampVal = null;
        pJsonObject->GetValue(pMin_timestampKey, pMin_timestampVal);
        if(pMin_timestampVal != null) {
            
            pMin_timestamp = null;
            jsonToValue(pMin_timestamp, pMin_timestampVal, L"Integer", L"Integer");
        }
        delete pMin_timestampKey;
        JsonString* pMax_timestampKey = new JsonString(L"max_timestamp");
        IJsonValue* pMax_timestampVal = null;
        pJsonObject->GetValue(pMax_timestampKey, pMax_timestampVal);
        if(pMax_timestampVal != null) {
            
            pMax_timestamp = null;
            jsonToValue(pMax_timestamp, pMax_timestampVal, L"Integer", L"Integer");
        }
        delete pMax_timestampKey;
        JsonString* pMin_time_of_dayKey = new JsonString(L"min_time_of_day");
        IJsonValue* pMin_time_of_dayVal = null;
        pJsonObject->GetValue(pMin_time_of_dayKey, pMin_time_of_dayVal);
        if(pMin_time_of_dayVal != null) {
            
            pMin_time_of_day = null;
            jsonToValue(pMin_time_of_day, pMin_time_of_dayVal, L"Integer", L"Integer");
        }
        delete pMin_time_of_dayKey;
        JsonString* pMax_time_of_dayKey = new JsonString(L"max_time_of_day");
        IJsonValue* pMax_time_of_dayVal = null;
        pJsonObject->GetValue(pMax_time_of_dayKey, pMax_time_of_dayVal);
        if(pMax_time_of_dayVal != null) {
            
            pMax_time_of_day = null;
            jsonToValue(pMax_time_of_day, pMax_time_of_dayVal, L"Integer", L"Integer");
        }
        delete pMax_time_of_dayKey;
        JsonString* pWeekKey = new JsonString(L"week");
        IJsonValue* pWeekVal = null;
        pJsonObject->GetValue(pWeekKey, pWeekVal);
        if(pWeekVal != null) {
            
            pWeek = new String();
            jsonToValue(pWeek, pWeekVal, L"String", L"String");
        }
        delete pWeekKey;
        
    }
}

SamiPermission::SamiPermission(String* json) {
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
SamiPermission::asJson ()
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
SamiPermission::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pTargetKey = new JsonString(L"target");
    pJsonObject->Add(pTargetKey, toJson(getPTarget(), "Integer", ""));

    
    JsonString *pVariableNameKey = new JsonString(L"variableName");
    pJsonObject->Add(pVariableNameKey, toJson(getPVariableName(), "String", ""));

    
    JsonString *pMin_timestampKey = new JsonString(L"min_timestamp");
    pJsonObject->Add(pMin_timestampKey, toJson(getPMinTimestamp(), "Integer", ""));

    
    JsonString *pMax_timestampKey = new JsonString(L"max_timestamp");
    pJsonObject->Add(pMax_timestampKey, toJson(getPMaxTimestamp(), "Integer", ""));

    
    JsonString *pMin_time_of_dayKey = new JsonString(L"min_time_of_day");
    pJsonObject->Add(pMin_time_of_dayKey, toJson(getPMinTimeOfDay(), "Integer", ""));

    
    JsonString *pMax_time_of_dayKey = new JsonString(L"max_time_of_day");
    pJsonObject->Add(pMax_time_of_dayKey, toJson(getPMaxTimeOfDay(), "Integer", ""));

    
    JsonString *pWeekKey = new JsonString(L"week");
    pJsonObject->Add(pWeekKey, toJson(getPWeek(), "String", ""));

    
    return pJsonObject;
}

Integer*
SamiPermission::getPTarget() {
    return pTarget;
}
void
SamiPermission::setPTarget(Integer* pTarget) {
    this->pTarget = pTarget;
}

String*
SamiPermission::getPVariableName() {
    return pVariableName;
}
void
SamiPermission::setPVariableName(String* pVariableName) {
    this->pVariableName = pVariableName;
}

Integer*
SamiPermission::getPMinTimestamp() {
    return pMin_timestamp;
}
void
SamiPermission::setPMinTimestamp(Integer* pMin_timestamp) {
    this->pMin_timestamp = pMin_timestamp;
}

Integer*
SamiPermission::getPMaxTimestamp() {
    return pMax_timestamp;
}
void
SamiPermission::setPMaxTimestamp(Integer* pMax_timestamp) {
    this->pMax_timestamp = pMax_timestamp;
}

Integer*
SamiPermission::getPMinTimeOfDay() {
    return pMin_time_of_day;
}
void
SamiPermission::setPMinTimeOfDay(Integer* pMin_time_of_day) {
    this->pMin_time_of_day = pMin_time_of_day;
}

Integer*
SamiPermission::getPMaxTimeOfDay() {
    return pMax_time_of_day;
}
void
SamiPermission::setPMaxTimeOfDay(Integer* pMax_time_of_day) {
    this->pMax_time_of_day = pMax_time_of_day;
}

String*
SamiPermission::getPWeek() {
    return pWeek;
}
void
SamiPermission::setPWeek(String* pWeek) {
    this->pWeek = pWeek;
}



} /* namespace Swagger */

