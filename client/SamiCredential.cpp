
#include "SamiCredential.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCredential::SamiCredential() {
    init();
}

SamiCredential::~SamiCredential() {
    this->cleanup();
}

void
SamiCredential::init() {
    pUser_id = null;
    pConnector_id = null;
    pAttr_key = null;
    pAttr_value = null;
    pCreated_at = null;
    pUpdated_at = null;
    
}

void
SamiCredential::cleanup() {
    if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
    if(pConnector_id != null) {
        
        delete pConnector_id;
        pConnector_id = null;
    }
    if(pAttr_key != null) {
        
        delete pAttr_key;
        pAttr_key = null;
    }
    if(pAttr_value != null) {
        
        delete pAttr_value;
        pAttr_value = null;
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


SamiCredential*
SamiCredential::fromJson(String* json) {
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
SamiCredential::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = null;
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
        JsonString* pConnector_idKey = new JsonString(L"connector_id");
        IJsonValue* pConnector_idVal = null;
        pJsonObject->GetValue(pConnector_idKey, pConnector_idVal);
        if(pConnector_idVal != null) {
            
            pConnector_id = null;
            jsonToValue(pConnector_id, pConnector_idVal, L"Integer", L"Integer");
        }
        delete pConnector_idKey;
        JsonString* pAttr_keyKey = new JsonString(L"attr_key");
        IJsonValue* pAttr_keyVal = null;
        pJsonObject->GetValue(pAttr_keyKey, pAttr_keyVal);
        if(pAttr_keyVal != null) {
            
            pAttr_key = new String();
            jsonToValue(pAttr_key, pAttr_keyVal, L"String", L"String");
        }
        delete pAttr_keyKey;
        JsonString* pAttr_valueKey = new JsonString(L"attr_value");
        IJsonValue* pAttr_valueVal = null;
        pJsonObject->GetValue(pAttr_valueKey, pAttr_valueVal);
        if(pAttr_valueVal != null) {
            
            pAttr_value = new String();
            jsonToValue(pAttr_value, pAttr_valueVal, L"String", L"String");
        }
        delete pAttr_valueKey;
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

SamiCredential::SamiCredential(String* json) {
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
SamiCredential::asJson ()
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
SamiCredential::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    
    JsonString *pConnector_idKey = new JsonString(L"connector_id");
    pJsonObject->Add(pConnector_idKey, toJson(getPConnectorId(), "Integer", ""));

    
    JsonString *pAttr_keyKey = new JsonString(L"attr_key");
    pJsonObject->Add(pAttr_keyKey, toJson(getPAttrKey(), "String", ""));

    
    JsonString *pAttr_valueKey = new JsonString(L"attr_value");
    pJsonObject->Add(pAttr_valueKey, toJson(getPAttrValue(), "String", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    return pJsonObject;
}

Integer*
SamiCredential::getPUserId() {
    return pUser_id;
}
void
SamiCredential::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}

Integer*
SamiCredential::getPConnectorId() {
    return pConnector_id;
}
void
SamiCredential::setPConnectorId(Integer* pConnector_id) {
    this->pConnector_id = pConnector_id;
}

String*
SamiCredential::getPAttrKey() {
    return pAttr_key;
}
void
SamiCredential::setPAttrKey(String* pAttr_key) {
    this->pAttr_key = pAttr_key;
}

String*
SamiCredential::getPAttrValue() {
    return pAttr_value;
}
void
SamiCredential::setPAttrValue(String* pAttr_value) {
    this->pAttr_value = pAttr_value;
}

DateTime*
SamiCredential::getPCreatedAt() {
    return pCreated_at;
}
void
SamiCredential::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiCredential::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiCredential::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}



} /* namespace Swagger */

