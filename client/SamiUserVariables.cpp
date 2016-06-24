
#include "SamiUserVariables.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserVariables::SamiUserVariables() {
    init();
}

SamiUserVariables::~SamiUserVariables() {
    this->cleanup();
}

void
SamiUserVariables::init() {
    pUser = null;
pVariableId = null;
pDurationOfAction = null;
pFillingValue = null;
pJoinWith = null;
pMaximumAllowedValue = null;
pMinimumAllowedValue = null;
pOnsetDelay = null;
pExperimentStartTime = null;
pExperimentEndTime = null;
}

void
SamiUserVariables::cleanup() {
    if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
if(pVariableId != null) {
        
        delete pVariableId;
        pVariableId = null;
    }
if(pDurationOfAction != null) {
        
        delete pDurationOfAction;
        pDurationOfAction = null;
    }
if(pFillingValue != null) {
        
        delete pFillingValue;
        pFillingValue = null;
    }
if(pJoinWith != null) {
        
        delete pJoinWith;
        pJoinWith = null;
    }
if(pMaximumAllowedValue != null) {
        
        delete pMaximumAllowedValue;
        pMaximumAllowedValue = null;
    }
if(pMinimumAllowedValue != null) {
        
        delete pMinimumAllowedValue;
        pMinimumAllowedValue = null;
    }
if(pOnsetDelay != null) {
        
        delete pOnsetDelay;
        pOnsetDelay = null;
    }
if(pExperimentStartTime != null) {
        
        delete pExperimentStartTime;
        pExperimentStartTime = null;
    }
if(pExperimentEndTime != null) {
        
        delete pExperimentEndTime;
        pExperimentEndTime = null;
    }
}


SamiUserVariables*
SamiUserVariables::fromJson(String* json) {
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
SamiUserVariables::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = null;
            jsonToValue(pUser, pUserVal, L"Integer", L"Integer");
        }
        delete pUserKey;
JsonString* pVariableIdKey = new JsonString(L"variableId");
        IJsonValue* pVariableIdVal = null;
        pJsonObject->GetValue(pVariableIdKey, pVariableIdVal);
        if(pVariableIdVal != null) {
            
            pVariableId = null;
            jsonToValue(pVariableId, pVariableIdVal, L"Integer", L"Integer");
        }
        delete pVariableIdKey;
JsonString* pDurationOfActionKey = new JsonString(L"durationOfAction");
        IJsonValue* pDurationOfActionVal = null;
        pJsonObject->GetValue(pDurationOfActionKey, pDurationOfActionVal);
        if(pDurationOfActionVal != null) {
            
            pDurationOfAction = null;
            jsonToValue(pDurationOfAction, pDurationOfActionVal, L"Integer", L"Integer");
        }
        delete pDurationOfActionKey;
JsonString* pFillingValueKey = new JsonString(L"fillingValue");
        IJsonValue* pFillingValueVal = null;
        pJsonObject->GetValue(pFillingValueKey, pFillingValueVal);
        if(pFillingValueVal != null) {
            
            pFillingValue = null;
            jsonToValue(pFillingValue, pFillingValueVal, L"Integer", L"Integer");
        }
        delete pFillingValueKey;
JsonString* pJoinWithKey = new JsonString(L"joinWith");
        IJsonValue* pJoinWithVal = null;
        pJsonObject->GetValue(pJoinWithKey, pJoinWithVal);
        if(pJoinWithVal != null) {
            
            pJoinWith = new String();
            jsonToValue(pJoinWith, pJoinWithVal, L"String", L"String");
        }
        delete pJoinWithKey;
JsonString* pMaximumAllowedValueKey = new JsonString(L"maximumAllowedValue");
        IJsonValue* pMaximumAllowedValueVal = null;
        pJsonObject->GetValue(pMaximumAllowedValueKey, pMaximumAllowedValueVal);
        if(pMaximumAllowedValueVal != null) {
            
            pMaximumAllowedValue = new Float();
            jsonToValue(pMaximumAllowedValue, pMaximumAllowedValueVal, L"Float", L"Float");
        }
        delete pMaximumAllowedValueKey;
JsonString* pMinimumAllowedValueKey = new JsonString(L"minimumAllowedValue");
        IJsonValue* pMinimumAllowedValueVal = null;
        pJsonObject->GetValue(pMinimumAllowedValueKey, pMinimumAllowedValueVal);
        if(pMinimumAllowedValueVal != null) {
            
            pMinimumAllowedValue = new Float();
            jsonToValue(pMinimumAllowedValue, pMinimumAllowedValueVal, L"Float", L"Float");
        }
        delete pMinimumAllowedValueKey;
JsonString* pOnsetDelayKey = new JsonString(L"onsetDelay");
        IJsonValue* pOnsetDelayVal = null;
        pJsonObject->GetValue(pOnsetDelayKey, pOnsetDelayVal);
        if(pOnsetDelayVal != null) {
            
            pOnsetDelay = null;
            jsonToValue(pOnsetDelay, pOnsetDelayVal, L"Integer", L"Integer");
        }
        delete pOnsetDelayKey;
JsonString* pExperimentStartTimeKey = new JsonString(L"experimentStartTime");
        IJsonValue* pExperimentStartTimeVal = null;
        pJsonObject->GetValue(pExperimentStartTimeKey, pExperimentStartTimeVal);
        if(pExperimentStartTimeVal != null) {
            
            pExperimentStartTime = new String();
            jsonToValue(pExperimentStartTime, pExperimentStartTimeVal, L"String", L"String");
        }
        delete pExperimentStartTimeKey;
JsonString* pExperimentEndTimeKey = new JsonString(L"experimentEndTime");
        IJsonValue* pExperimentEndTimeVal = null;
        pJsonObject->GetValue(pExperimentEndTimeKey, pExperimentEndTimeVal);
        if(pExperimentEndTimeVal != null) {
            
            pExperimentEndTime = new String();
            jsonToValue(pExperimentEndTime, pExperimentEndTimeVal, L"String", L"String");
        }
        delete pExperimentEndTimeKey;
    }
}

SamiUserVariables::SamiUserVariables(String* json) {
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
SamiUserVariables::asJson ()
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
SamiUserVariables::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "Integer", ""));

    JsonString *pVariableIdKey = new JsonString(L"variableId");
    pJsonObject->Add(pVariableIdKey, toJson(getPVariableId(), "Integer", ""));

    JsonString *pDurationOfActionKey = new JsonString(L"durationOfAction");
    pJsonObject->Add(pDurationOfActionKey, toJson(getPDurationOfAction(), "Integer", ""));

    JsonString *pFillingValueKey = new JsonString(L"fillingValue");
    pJsonObject->Add(pFillingValueKey, toJson(getPFillingValue(), "Integer", ""));

    JsonString *pJoinWithKey = new JsonString(L"joinWith");
    pJsonObject->Add(pJoinWithKey, toJson(getPJoinWith(), "String", ""));

    JsonString *pMaximumAllowedValueKey = new JsonString(L"maximumAllowedValue");
    pJsonObject->Add(pMaximumAllowedValueKey, toJson(getPMaximumAllowedValue(), "Float", ""));

    JsonString *pMinimumAllowedValueKey = new JsonString(L"minimumAllowedValue");
    pJsonObject->Add(pMinimumAllowedValueKey, toJson(getPMinimumAllowedValue(), "Float", ""));

    JsonString *pOnsetDelayKey = new JsonString(L"onsetDelay");
    pJsonObject->Add(pOnsetDelayKey, toJson(getPOnsetDelay(), "Integer", ""));

    JsonString *pExperimentStartTimeKey = new JsonString(L"experimentStartTime");
    pJsonObject->Add(pExperimentStartTimeKey, toJson(getPExperimentStartTime(), "String", ""));

    JsonString *pExperimentEndTimeKey = new JsonString(L"experimentEndTime");
    pJsonObject->Add(pExperimentEndTimeKey, toJson(getPExperimentEndTime(), "String", ""));

    return pJsonObject;
}

Integer*
SamiUserVariables::getPUser() {
    return pUser;
}
void
SamiUserVariables::setPUser(Integer* pUser) {
    this->pUser = pUser;
}

Integer*
SamiUserVariables::getPVariableId() {
    return pVariableId;
}
void
SamiUserVariables::setPVariableId(Integer* pVariableId) {
    this->pVariableId = pVariableId;
}

Integer*
SamiUserVariables::getPDurationOfAction() {
    return pDurationOfAction;
}
void
SamiUserVariables::setPDurationOfAction(Integer* pDurationOfAction) {
    this->pDurationOfAction = pDurationOfAction;
}

Integer*
SamiUserVariables::getPFillingValue() {
    return pFillingValue;
}
void
SamiUserVariables::setPFillingValue(Integer* pFillingValue) {
    this->pFillingValue = pFillingValue;
}

String*
SamiUserVariables::getPJoinWith() {
    return pJoinWith;
}
void
SamiUserVariables::setPJoinWith(String* pJoinWith) {
    this->pJoinWith = pJoinWith;
}

Float*
SamiUserVariables::getPMaximumAllowedValue() {
    return pMaximumAllowedValue;
}
void
SamiUserVariables::setPMaximumAllowedValue(Float* pMaximumAllowedValue) {
    this->pMaximumAllowedValue = pMaximumAllowedValue;
}

Float*
SamiUserVariables::getPMinimumAllowedValue() {
    return pMinimumAllowedValue;
}
void
SamiUserVariables::setPMinimumAllowedValue(Float* pMinimumAllowedValue) {
    this->pMinimumAllowedValue = pMinimumAllowedValue;
}

Integer*
SamiUserVariables::getPOnsetDelay() {
    return pOnsetDelay;
}
void
SamiUserVariables::setPOnsetDelay(Integer* pOnsetDelay) {
    this->pOnsetDelay = pOnsetDelay;
}

String*
SamiUserVariables::getPExperimentStartTime() {
    return pExperimentStartTime;
}
void
SamiUserVariables::setPExperimentStartTime(String* pExperimentStartTime) {
    this->pExperimentStartTime = pExperimentStartTime;
}

String*
SamiUserVariables::getPExperimentEndTime() {
    return pExperimentEndTime;
}
void
SamiUserVariables::setPExperimentEndTime(String* pExperimentEndTime) {
    this->pExperimentEndTime = pExperimentEndTime;
}



} /* namespace Swagger */

