
#include "SamiUpdate.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUpdate::SamiUpdate() {
    init();
}

SamiUpdate::~SamiUpdate() {
    this->cleanup();
}

void
SamiUpdate::init() {
    pId = null;
    pUser_id = null;
    pConnector_id = null;
    pNumber_of_measurements = null;
    pSuccess = null;
    pMessage = null;
    pCreated_at = null;
    pUpdated_at = null;
    
}

void
SamiUpdate::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
    if(pConnector_id != null) {
        
        delete pConnector_id;
        pConnector_id = null;
    }
    if(pNumber_of_measurements != null) {
        
        delete pNumber_of_measurements;
        pNumber_of_measurements = null;
    }
    if(pSuccess != null) {
        
        delete pSuccess;
        pSuccess = null;
    }
    if(pMessage != null) {
        
        delete pMessage;
        pMessage = null;
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


SamiUpdate*
SamiUpdate::fromJson(String* json) {
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
SamiUpdate::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
        JsonString* pConnector_idKey = new JsonString(L"connector_id");
        IJsonValue* pConnector_idVal = null;
        pJsonObject->GetValue(pConnector_idKey, pConnector_idVal);
        if(pConnector_idVal != null) {
            
            pConnector_id = new Integer();
            jsonToValue(pConnector_id, pConnector_idVal, L"Integer", L"Integer");
        }
        delete pConnector_idKey;
        JsonString* pNumber_of_measurementsKey = new JsonString(L"number_of_measurements");
        IJsonValue* pNumber_of_measurementsVal = null;
        pJsonObject->GetValue(pNumber_of_measurementsKey, pNumber_of_measurementsVal);
        if(pNumber_of_measurementsVal != null) {
            
            pNumber_of_measurements = new Integer();
            jsonToValue(pNumber_of_measurements, pNumber_of_measurementsVal, L"Integer", L"Integer");
        }
        delete pNumber_of_measurementsKey;
        JsonString* pSuccessKey = new JsonString(L"success");
        IJsonValue* pSuccessVal = null;
        pJsonObject->GetValue(pSuccessKey, pSuccessVal);
        if(pSuccessVal != null) {
            
            pSuccess = new Boolean(false);
            jsonToValue(pSuccess, pSuccessVal, L"Boolean", L"Boolean");
        }
        delete pSuccessKey;
        JsonString* pMessageKey = new JsonString(L"message");
        IJsonValue* pMessageVal = null;
        pJsonObject->GetValue(pMessageKey, pMessageVal);
        if(pMessageVal != null) {
            
            pMessage = new String();
            jsonToValue(pMessage, pMessageVal, L"String", L"String");
        }
        delete pMessageKey;
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

SamiUpdate::SamiUpdate(String* json) {
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
SamiUpdate::asJson ()
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
SamiUpdate::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    
    JsonString *pConnector_idKey = new JsonString(L"connector_id");
    pJsonObject->Add(pConnector_idKey, toJson(getPConnectorId(), "Integer", ""));

    
    JsonString *pNumber_of_measurementsKey = new JsonString(L"number_of_measurements");
    pJsonObject->Add(pNumber_of_measurementsKey, toJson(getPNumberOfMeasurements(), "Integer", ""));

    
    JsonString *pSuccessKey = new JsonString(L"success");
    pJsonObject->Add(pSuccessKey, toJson(getPSuccess(), "Boolean", ""));

    
    JsonString *pMessageKey = new JsonString(L"message");
    pJsonObject->Add(pMessageKey, toJson(getPMessage(), "String", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    return pJsonObject;
}

Integer*
SamiUpdate::getPId() {
    return pId;
}
void
SamiUpdate::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiUpdate::getPUserId() {
    return pUser_id;
}
void
SamiUpdate::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}

Integer*
SamiUpdate::getPConnectorId() {
    return pConnector_id;
}
void
SamiUpdate::setPConnectorId(Integer* pConnector_id) {
    this->pConnector_id = pConnector_id;
}

Integer*
SamiUpdate::getPNumberOfMeasurements() {
    return pNumber_of_measurements;
}
void
SamiUpdate::setPNumberOfMeasurements(Integer* pNumber_of_measurements) {
    this->pNumber_of_measurements = pNumber_of_measurements;
}

Boolean*
SamiUpdate::getPSuccess() {
    return pSuccess;
}
void
SamiUpdate::setPSuccess(Boolean* pSuccess) {
    this->pSuccess = pSuccess;
}

String*
SamiUpdate::getPMessage() {
    return pMessage;
}
void
SamiUpdate::setPMessage(String* pMessage) {
    this->pMessage = pMessage;
}

DateTime*
SamiUpdate::getPCreatedAt() {
    return pCreated_at;
}
void
SamiUpdate::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiUpdate::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiUpdate::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}



} /* namespace Swagger */

