
#include "SamiVote.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVote::SamiVote() {
    init();
}

SamiVote::~SamiVote() {
    this->cleanup();
}

void
SamiVote::init() {
    pId = null;
pClient_id = null;
pUser_id = null;
pCause_id = null;
pEffect_id = null;
pValue = null;
pCreated_at = null;
pUpdated_at = null;
}

void
SamiVote::cleanup() {
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
if(pCause_id != null) {
        
        delete pCause_id;
        pCause_id = null;
    }
if(pEffect_id != null) {
        
        delete pEffect_id;
        pEffect_id = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
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


SamiVote*
SamiVote::fromJson(String* json) {
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
SamiVote::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pCause_idKey = new JsonString(L"cause_id");
        IJsonValue* pCause_idVal = null;
        pJsonObject->GetValue(pCause_idKey, pCause_idVal);
        if(pCause_idVal != null) {
            
            pCause_id = new Integer();
            jsonToValue(pCause_id, pCause_idVal, L"Integer", L"Integer");
        }
        delete pCause_idKey;
JsonString* pEffect_idKey = new JsonString(L"effect_id");
        IJsonValue* pEffect_idVal = null;
        pJsonObject->GetValue(pEffect_idKey, pEffect_idVal);
        if(pEffect_idVal != null) {
            
            pEffect_id = new Integer();
            jsonToValue(pEffect_id, pEffect_idVal, L"Integer", L"Integer");
        }
        delete pEffect_idKey;
JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Integer();
            jsonToValue(pValue, pValueVal, L"Integer", L"Integer");
        }
        delete pValueKey;
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

SamiVote::SamiVote(String* json) {
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
SamiVote::asJson ()
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
SamiVote::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pClient_idKey = new JsonString(L"client_id");
    pJsonObject->Add(pClient_idKey, toJson(getPClientId(), "String", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    JsonString *pCause_idKey = new JsonString(L"cause_id");
    pJsonObject->Add(pCause_idKey, toJson(getPCauseId(), "Integer", ""));

    JsonString *pEffect_idKey = new JsonString(L"effect_id");
    pJsonObject->Add(pEffect_idKey, toJson(getPEffectId(), "Integer", ""));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Integer", ""));

    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    return pJsonObject;
}

Integer*
SamiVote::getPId() {
    return pId;
}
void
SamiVote::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiVote::getPClientId() {
    return pClient_id;
}
void
SamiVote::setPClientId(String* pClient_id) {
    this->pClient_id = pClient_id;
}

Integer*
SamiVote::getPUserId() {
    return pUser_id;
}
void
SamiVote::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}

Integer*
SamiVote::getPCauseId() {
    return pCause_id;
}
void
SamiVote::setPCauseId(Integer* pCause_id) {
    this->pCause_id = pCause_id;
}

Integer*
SamiVote::getPEffectId() {
    return pEffect_id;
}
void
SamiVote::setPEffectId(Integer* pEffect_id) {
    this->pEffect_id = pEffect_id;
}

Integer*
SamiVote::getPValue() {
    return pValue;
}
void
SamiVote::setPValue(Integer* pValue) {
    this->pValue = pValue;
}

DateTime*
SamiVote::getPCreatedAt() {
    return pCreated_at;
}
void
SamiVote::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiVote::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiVote::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}



} /* namespace Swagger */

