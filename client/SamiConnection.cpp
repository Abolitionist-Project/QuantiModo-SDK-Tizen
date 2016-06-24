
#include "SamiConnection.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiConnection::SamiConnection() {
    init();
}

SamiConnection::~SamiConnection() {
    this->cleanup();
}

void
SamiConnection::init() {
    pId = null;
pUser_id = null;
pConnector_id = null;
pConnect_status = null;
pConnect_error = null;
pUpdate_requested_at = null;
pUpdate_status = null;
pUpdate_error = null;
pLast_successful_updated_at = null;
pCreated_at = null;
pUpdated_at = null;
}

void
SamiConnection::cleanup() {
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
if(pConnect_status != null) {
        
        delete pConnect_status;
        pConnect_status = null;
    }
if(pConnect_error != null) {
        
        delete pConnect_error;
        pConnect_error = null;
    }
if(pUpdate_requested_at != null) {
        
        delete pUpdate_requested_at;
        pUpdate_requested_at = null;
    }
if(pUpdate_status != null) {
        
        delete pUpdate_status;
        pUpdate_status = null;
    }
if(pUpdate_error != null) {
        
        delete pUpdate_error;
        pUpdate_error = null;
    }
if(pLast_successful_updated_at != null) {
        
        delete pLast_successful_updated_at;
        pLast_successful_updated_at = null;
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


SamiConnection*
SamiConnection::fromJson(String* json) {
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
SamiConnection::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pConnect_statusKey = new JsonString(L"connect_status");
        IJsonValue* pConnect_statusVal = null;
        pJsonObject->GetValue(pConnect_statusKey, pConnect_statusVal);
        if(pConnect_statusVal != null) {
            
            pConnect_status = new String();
            jsonToValue(pConnect_status, pConnect_statusVal, L"String", L"String");
        }
        delete pConnect_statusKey;
JsonString* pConnect_errorKey = new JsonString(L"connect_error");
        IJsonValue* pConnect_errorVal = null;
        pJsonObject->GetValue(pConnect_errorKey, pConnect_errorVal);
        if(pConnect_errorVal != null) {
            
            pConnect_error = new String();
            jsonToValue(pConnect_error, pConnect_errorVal, L"String", L"String");
        }
        delete pConnect_errorKey;
JsonString* pUpdate_requested_atKey = new JsonString(L"update_requested_at");
        IJsonValue* pUpdate_requested_atVal = null;
        pJsonObject->GetValue(pUpdate_requested_atKey, pUpdate_requested_atVal);
        if(pUpdate_requested_atVal != null) {
            
            pUpdate_requested_at = new DateTime();
            jsonToValue(pUpdate_requested_at, pUpdate_requested_atVal, L"DateTime", L"DateTime");
        }
        delete pUpdate_requested_atKey;
JsonString* pUpdate_statusKey = new JsonString(L"update_status");
        IJsonValue* pUpdate_statusVal = null;
        pJsonObject->GetValue(pUpdate_statusKey, pUpdate_statusVal);
        if(pUpdate_statusVal != null) {
            
            pUpdate_status = new String();
            jsonToValue(pUpdate_status, pUpdate_statusVal, L"String", L"String");
        }
        delete pUpdate_statusKey;
JsonString* pUpdate_errorKey = new JsonString(L"update_error");
        IJsonValue* pUpdate_errorVal = null;
        pJsonObject->GetValue(pUpdate_errorKey, pUpdate_errorVal);
        if(pUpdate_errorVal != null) {
            
            pUpdate_error = new String();
            jsonToValue(pUpdate_error, pUpdate_errorVal, L"String", L"String");
        }
        delete pUpdate_errorKey;
JsonString* pLast_successful_updated_atKey = new JsonString(L"last_successful_updated_at");
        IJsonValue* pLast_successful_updated_atVal = null;
        pJsonObject->GetValue(pLast_successful_updated_atKey, pLast_successful_updated_atVal);
        if(pLast_successful_updated_atVal != null) {
            
            pLast_successful_updated_at = new DateTime();
            jsonToValue(pLast_successful_updated_at, pLast_successful_updated_atVal, L"DateTime", L"DateTime");
        }
        delete pLast_successful_updated_atKey;
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

SamiConnection::SamiConnection(String* json) {
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
SamiConnection::asJson ()
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
SamiConnection::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    JsonString *pConnector_idKey = new JsonString(L"connector_id");
    pJsonObject->Add(pConnector_idKey, toJson(getPConnectorId(), "Integer", ""));

    JsonString *pConnect_statusKey = new JsonString(L"connect_status");
    pJsonObject->Add(pConnect_statusKey, toJson(getPConnectStatus(), "String", ""));

    JsonString *pConnect_errorKey = new JsonString(L"connect_error");
    pJsonObject->Add(pConnect_errorKey, toJson(getPConnectError(), "String", ""));

    JsonString *pUpdate_requested_atKey = new JsonString(L"update_requested_at");
    pJsonObject->Add(pUpdate_requested_atKey, toJson(getPUpdateRequestedAt(), "DateTime", ""));

    JsonString *pUpdate_statusKey = new JsonString(L"update_status");
    pJsonObject->Add(pUpdate_statusKey, toJson(getPUpdateStatus(), "String", ""));

    JsonString *pUpdate_errorKey = new JsonString(L"update_error");
    pJsonObject->Add(pUpdate_errorKey, toJson(getPUpdateError(), "String", ""));

    JsonString *pLast_successful_updated_atKey = new JsonString(L"last_successful_updated_at");
    pJsonObject->Add(pLast_successful_updated_atKey, toJson(getPLastSuccessfulUpdatedAt(), "DateTime", ""));

    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    return pJsonObject;
}

Integer*
SamiConnection::getPId() {
    return pId;
}
void
SamiConnection::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiConnection::getPUserId() {
    return pUser_id;
}
void
SamiConnection::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}

Integer*
SamiConnection::getPConnectorId() {
    return pConnector_id;
}
void
SamiConnection::setPConnectorId(Integer* pConnector_id) {
    this->pConnector_id = pConnector_id;
}

String*
SamiConnection::getPConnectStatus() {
    return pConnect_status;
}
void
SamiConnection::setPConnectStatus(String* pConnect_status) {
    this->pConnect_status = pConnect_status;
}

String*
SamiConnection::getPConnectError() {
    return pConnect_error;
}
void
SamiConnection::setPConnectError(String* pConnect_error) {
    this->pConnect_error = pConnect_error;
}

DateTime*
SamiConnection::getPUpdateRequestedAt() {
    return pUpdate_requested_at;
}
void
SamiConnection::setPUpdateRequestedAt(DateTime* pUpdate_requested_at) {
    this->pUpdate_requested_at = pUpdate_requested_at;
}

String*
SamiConnection::getPUpdateStatus() {
    return pUpdate_status;
}
void
SamiConnection::setPUpdateStatus(String* pUpdate_status) {
    this->pUpdate_status = pUpdate_status;
}

String*
SamiConnection::getPUpdateError() {
    return pUpdate_error;
}
void
SamiConnection::setPUpdateError(String* pUpdate_error) {
    this->pUpdate_error = pUpdate_error;
}

DateTime*
SamiConnection::getPLastSuccessfulUpdatedAt() {
    return pLast_successful_updated_at;
}
void
SamiConnection::setPLastSuccessfulUpdatedAt(DateTime* pLast_successful_updated_at) {
    this->pLast_successful_updated_at = pLast_successful_updated_at;
}

DateTime*
SamiConnection::getPCreatedAt() {
    return pCreated_at;
}
void
SamiConnection::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiConnection::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiConnection::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}



} /* namespace Swagger */

