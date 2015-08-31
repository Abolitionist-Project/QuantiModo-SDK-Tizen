
#include "SamiConnectorInfo.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiConnectorInfo::SamiConnectorInfo() {
    init();
}

SamiConnectorInfo::~SamiConnectorInfo() {
    this->cleanup();
}

void
SamiConnectorInfo::init() {
    pId = null;
    pConnected = null;
    pError = null;
    pHistory = null;
    
}

void
SamiConnectorInfo::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pConnected != null) {
        
        delete pConnected;
        pConnected = null;
    }
    if(pError != null) {
        
        delete pError;
        pError = null;
    }
    if(pHistory != null) {
        pHistory->RemoveAll(true);
        delete pHistory;
        pHistory = null;
    }
    
}


SamiConnectorInfo*
SamiConnectorInfo::fromJson(String* json) {
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
SamiConnectorInfo::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = null;
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
        JsonString* pConnectedKey = new JsonString(L"connected");
        IJsonValue* pConnectedVal = null;
        pJsonObject->GetValue(pConnectedKey, pConnectedVal);
        if(pConnectedVal != null) {
            
            pConnected = new Boolean(false);
            jsonToValue(pConnected, pConnectedVal, L"Boolean", L"Boolean");
        }
        delete pConnectedKey;
        JsonString* pErrorKey = new JsonString(L"error");
        IJsonValue* pErrorVal = null;
        pJsonObject->GetValue(pErrorKey, pErrorVal);
        if(pErrorVal != null) {
            
            pError = new String();
            jsonToValue(pError, pErrorVal, L"String", L"String");
        }
        delete pErrorKey;
        JsonString* pHistoryKey = new JsonString(L"history");
        IJsonValue* pHistoryVal = null;
        pJsonObject->GetValue(pHistoryKey, pHistoryVal);
        if(pHistoryVal != null) {
            pHistory = new ArrayList();
            
            jsonToValue(pHistory, pHistoryVal, L"IList", L"SamiConnectorInfoHistoryItem");
        }
        delete pHistoryKey;
        
    }
}

SamiConnectorInfo::SamiConnectorInfo(String* json) {
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
SamiConnectorInfo::asJson ()
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
SamiConnectorInfo::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pConnectedKey = new JsonString(L"connected");
    pJsonObject->Add(pConnectedKey, toJson(getPConnected(), "Boolean", ""));

    
    JsonString *pErrorKey = new JsonString(L"error");
    pJsonObject->Add(pErrorKey, toJson(getPError(), "String", ""));

    
    JsonString *pHistoryKey = new JsonString(L"history");
    pJsonObject->Add(pHistoryKey, toJson(getPHistory(), "SamiConnectorInfoHistoryItem", "array"));

    
    return pJsonObject;
}

Integer*
SamiConnectorInfo::getPId() {
    return pId;
}
void
SamiConnectorInfo::setPId(Integer* pId) {
    this->pId = pId;
}

Boolean*
SamiConnectorInfo::getPConnected() {
    return pConnected;
}
void
SamiConnectorInfo::setPConnected(Boolean* pConnected) {
    this->pConnected = pConnected;
}

String*
SamiConnectorInfo::getPError() {
    return pError;
}
void
SamiConnectorInfo::setPError(String* pError) {
    this->pError = pError;
}

IList*
SamiConnectorInfo::getPHistory() {
    return pHistory;
}
void
SamiConnectorInfo::setPHistory(IList* pHistory) {
    this->pHistory = pHistory;
}



} /* namespace Swagger */

