
#include "SamiConnector.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiConnector::SamiConnector() {
    init();
}

SamiConnector::~SamiConnector() {
    this->cleanup();
}

void
SamiConnector::init() {
    pId = null;
    pName = null;
    pDisplayName = null;
    pImage = null;
    pGetItUrl = null;
    pConnected = null;
    pConnectInstructions = null;
    pLastUpdate = null;
    pLatestData = null;
    pNoDataYet = null;
    
}

void
SamiConnector::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pDisplayName != null) {
        
        delete pDisplayName;
        pDisplayName = null;
    }
    if(pImage != null) {
        
        delete pImage;
        pImage = null;
    }
    if(pGetItUrl != null) {
        
        delete pGetItUrl;
        pGetItUrl = null;
    }
    if(pConnected != null) {
        
        delete pConnected;
        pConnected = null;
    }
    if(pConnectInstructions != null) {
        
        delete pConnectInstructions;
        pConnectInstructions = null;
    }
    if(pLastUpdate != null) {
        
        delete pLastUpdate;
        pLastUpdate = null;
    }
    if(pLatestData != null) {
        
        delete pLatestData;
        pLatestData = null;
    }
    if(pNoDataYet != null) {
        
        delete pNoDataYet;
        pNoDataYet = null;
    }
    
}


SamiConnector*
SamiConnector::fromJson(String* json) {
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
SamiConnector::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pDisplayNameKey = new JsonString(L"displayName");
        IJsonValue* pDisplayNameVal = null;
        pJsonObject->GetValue(pDisplayNameKey, pDisplayNameVal);
        if(pDisplayNameVal != null) {
            
            pDisplayName = new String();
            jsonToValue(pDisplayName, pDisplayNameVal, L"String", L"String");
        }
        delete pDisplayNameKey;
        JsonString* pImageKey = new JsonString(L"image");
        IJsonValue* pImageVal = null;
        pJsonObject->GetValue(pImageKey, pImageVal);
        if(pImageVal != null) {
            
            pImage = new String();
            jsonToValue(pImage, pImageVal, L"String", L"String");
        }
        delete pImageKey;
        JsonString* pGetItUrlKey = new JsonString(L"getItUrl");
        IJsonValue* pGetItUrlVal = null;
        pJsonObject->GetValue(pGetItUrlKey, pGetItUrlVal);
        if(pGetItUrlVal != null) {
            
            pGetItUrl = new String();
            jsonToValue(pGetItUrl, pGetItUrlVal, L"String", L"String");
        }
        delete pGetItUrlKey;
        JsonString* pConnectedKey = new JsonString(L"connected");
        IJsonValue* pConnectedVal = null;
        pJsonObject->GetValue(pConnectedKey, pConnectedVal);
        if(pConnectedVal != null) {
            
            pConnected = new String();
            jsonToValue(pConnected, pConnectedVal, L"String", L"String");
        }
        delete pConnectedKey;
        JsonString* pConnectInstructionsKey = new JsonString(L"connectInstructions");
        IJsonValue* pConnectInstructionsVal = null;
        pJsonObject->GetValue(pConnectInstructionsKey, pConnectInstructionsVal);
        if(pConnectInstructionsVal != null) {
            
            pConnectInstructions = new String();
            jsonToValue(pConnectInstructions, pConnectInstructionsVal, L"String", L"String");
        }
        delete pConnectInstructionsKey;
        JsonString* pLastUpdateKey = new JsonString(L"lastUpdate");
        IJsonValue* pLastUpdateVal = null;
        pJsonObject->GetValue(pLastUpdateKey, pLastUpdateVal);
        if(pLastUpdateVal != null) {
            
            pLastUpdate = new Integer();
            jsonToValue(pLastUpdate, pLastUpdateVal, L"Integer", L"Integer");
        }
        delete pLastUpdateKey;
        JsonString* pLatestDataKey = new JsonString(L"latestData");
        IJsonValue* pLatestDataVal = null;
        pJsonObject->GetValue(pLatestDataKey, pLatestDataVal);
        if(pLatestDataVal != null) {
            
            pLatestData = new Integer();
            jsonToValue(pLatestData, pLatestDataVal, L"Integer", L"Integer");
        }
        delete pLatestDataKey;
        JsonString* pNoDataYetKey = new JsonString(L"noDataYet");
        IJsonValue* pNoDataYetVal = null;
        pJsonObject->GetValue(pNoDataYetKey, pNoDataYetVal);
        if(pNoDataYetVal != null) {
            
            pNoDataYet = new Boolean(false);
            jsonToValue(pNoDataYet, pNoDataYetVal, L"Boolean", L"Boolean");
        }
        delete pNoDataYetKey;
        
    }
}

SamiConnector::SamiConnector(String* json) {
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
SamiConnector::asJson ()
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
SamiConnector::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pDisplayNameKey = new JsonString(L"displayName");
    pJsonObject->Add(pDisplayNameKey, toJson(getPDisplayName(), "String", ""));

    
    JsonString *pImageKey = new JsonString(L"image");
    pJsonObject->Add(pImageKey, toJson(getPImage(), "String", ""));

    
    JsonString *pGetItUrlKey = new JsonString(L"getItUrl");
    pJsonObject->Add(pGetItUrlKey, toJson(getPGetItUrl(), "String", ""));

    
    JsonString *pConnectedKey = new JsonString(L"connected");
    pJsonObject->Add(pConnectedKey, toJson(getPConnected(), "String", ""));

    
    JsonString *pConnectInstructionsKey = new JsonString(L"connectInstructions");
    pJsonObject->Add(pConnectInstructionsKey, toJson(getPConnectInstructions(), "String", ""));

    
    JsonString *pLastUpdateKey = new JsonString(L"lastUpdate");
    pJsonObject->Add(pLastUpdateKey, toJson(getPLastUpdate(), "Integer", ""));

    
    JsonString *pLatestDataKey = new JsonString(L"latestData");
    pJsonObject->Add(pLatestDataKey, toJson(getPLatestData(), "Integer", ""));

    
    JsonString *pNoDataYetKey = new JsonString(L"noDataYet");
    pJsonObject->Add(pNoDataYetKey, toJson(getPNoDataYet(), "Boolean", ""));

    
    return pJsonObject;
}

Integer*
SamiConnector::getPId() {
    return pId;
}
void
SamiConnector::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiConnector::getPName() {
    return pName;
}
void
SamiConnector::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiConnector::getPDisplayName() {
    return pDisplayName;
}
void
SamiConnector::setPDisplayName(String* pDisplayName) {
    this->pDisplayName = pDisplayName;
}

String*
SamiConnector::getPImage() {
    return pImage;
}
void
SamiConnector::setPImage(String* pImage) {
    this->pImage = pImage;
}

String*
SamiConnector::getPGetItUrl() {
    return pGetItUrl;
}
void
SamiConnector::setPGetItUrl(String* pGetItUrl) {
    this->pGetItUrl = pGetItUrl;
}

String*
SamiConnector::getPConnected() {
    return pConnected;
}
void
SamiConnector::setPConnected(String* pConnected) {
    this->pConnected = pConnected;
}

String*
SamiConnector::getPConnectInstructions() {
    return pConnectInstructions;
}
void
SamiConnector::setPConnectInstructions(String* pConnectInstructions) {
    this->pConnectInstructions = pConnectInstructions;
}

Integer*
SamiConnector::getPLastUpdate() {
    return pLastUpdate;
}
void
SamiConnector::setPLastUpdate(Integer* pLastUpdate) {
    this->pLastUpdate = pLastUpdate;
}

Integer*
SamiConnector::getPLatestData() {
    return pLatestData;
}
void
SamiConnector::setPLatestData(Integer* pLatestData) {
    this->pLatestData = pLatestData;
}

Boolean*
SamiConnector::getPNoDataYet() {
    return pNoDataYet;
}
void
SamiConnector::setPNoDataYet(Boolean* pNoDataYet) {
    this->pNoDataYet = pNoDataYet;
}



} /* namespace Swagger */

