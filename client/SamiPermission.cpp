
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
pMinTimestamp = null;
pMaxTimestamp = null;
pMinTimeOfDay = null;
pMaxTimeOfDay = null;
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
if(pMinTimestamp != null) {
        
        delete pMinTimestamp;
        pMinTimestamp = null;
    }
if(pMaxTimestamp != null) {
        
        delete pMaxTimestamp;
        pMaxTimestamp = null;
    }
if(pMinTimeOfDay != null) {
        
        delete pMinTimeOfDay;
        pMinTimeOfDay = null;
    }
if(pMaxTimeOfDay != null) {
        
        delete pMaxTimeOfDay;
        pMaxTimeOfDay = null;
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
JsonString* pMinTimestampKey = new JsonString(L"minTimestamp");
        IJsonValue* pMinTimestampVal = null;
        pJsonObject->GetValue(pMinTimestampKey, pMinTimestampVal);
        if(pMinTimestampVal != null) {
            
            pMinTimestamp = null;
            jsonToValue(pMinTimestamp, pMinTimestampVal, L"Integer", L"Integer");
        }
        delete pMinTimestampKey;
JsonString* pMaxTimestampKey = new JsonString(L"maxTimestamp");
        IJsonValue* pMaxTimestampVal = null;
        pJsonObject->GetValue(pMaxTimestampKey, pMaxTimestampVal);
        if(pMaxTimestampVal != null) {
            
            pMaxTimestamp = null;
            jsonToValue(pMaxTimestamp, pMaxTimestampVal, L"Integer", L"Integer");
        }
        delete pMaxTimestampKey;
JsonString* pMinTimeOfDayKey = new JsonString(L"minTimeOfDay");
        IJsonValue* pMinTimeOfDayVal = null;
        pJsonObject->GetValue(pMinTimeOfDayKey, pMinTimeOfDayVal);
        if(pMinTimeOfDayVal != null) {
            
            pMinTimeOfDay = null;
            jsonToValue(pMinTimeOfDay, pMinTimeOfDayVal, L"Integer", L"Integer");
        }
        delete pMinTimeOfDayKey;
JsonString* pMaxTimeOfDayKey = new JsonString(L"maxTimeOfDay");
        IJsonValue* pMaxTimeOfDayVal = null;
        pJsonObject->GetValue(pMaxTimeOfDayKey, pMaxTimeOfDayVal);
        if(pMaxTimeOfDayVal != null) {
            
            pMaxTimeOfDay = null;
            jsonToValue(pMaxTimeOfDay, pMaxTimeOfDayVal, L"Integer", L"Integer");
        }
        delete pMaxTimeOfDayKey;
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

    JsonString *pMinTimestampKey = new JsonString(L"minTimestamp");
    pJsonObject->Add(pMinTimestampKey, toJson(getPMinTimestamp(), "Integer", ""));

    JsonString *pMaxTimestampKey = new JsonString(L"maxTimestamp");
    pJsonObject->Add(pMaxTimestampKey, toJson(getPMaxTimestamp(), "Integer", ""));

    JsonString *pMinTimeOfDayKey = new JsonString(L"minTimeOfDay");
    pJsonObject->Add(pMinTimeOfDayKey, toJson(getPMinTimeOfDay(), "Integer", ""));

    JsonString *pMaxTimeOfDayKey = new JsonString(L"maxTimeOfDay");
    pJsonObject->Add(pMaxTimeOfDayKey, toJson(getPMaxTimeOfDay(), "Integer", ""));

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
    return pMinTimestamp;
}
void
SamiPermission::setPMinTimestamp(Integer* pMinTimestamp) {
    this->pMinTimestamp = pMinTimestamp;
}

Integer*
SamiPermission::getPMaxTimestamp() {
    return pMaxTimestamp;
}
void
SamiPermission::setPMaxTimestamp(Integer* pMaxTimestamp) {
    this->pMaxTimestamp = pMaxTimestamp;
}

Integer*
SamiPermission::getPMinTimeOfDay() {
    return pMinTimeOfDay;
}
void
SamiPermission::setPMinTimeOfDay(Integer* pMinTimeOfDay) {
    this->pMinTimeOfDay = pMinTimeOfDay;
}

Integer*
SamiPermission::getPMaxTimeOfDay() {
    return pMaxTimeOfDay;
}
void
SamiPermission::setPMaxTimeOfDay(Integer* pMaxTimeOfDay) {
    this->pMaxTimeOfDay = pMaxTimeOfDay;
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

