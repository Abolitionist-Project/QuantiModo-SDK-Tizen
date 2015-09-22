
#include "SamiConnectorInstruction.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiConnectorInstruction::SamiConnectorInstruction() {
    init();
}

SamiConnectorInstruction::~SamiConnectorInstruction() {
    this->cleanup();
}

void
SamiConnectorInstruction::init() {
    pUrl = null;
    pParameters = null;
    pUsePopup = null;
    
}

void
SamiConnectorInstruction::cleanup() {
    if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
    if(pParameters != null) {
        pParameters->RemoveAll(true);
        delete pParameters;
        pParameters = null;
    }
    if(pUsePopup != null) {
        
        delete pUsePopup;
        pUsePopup = null;
    }
    
}


SamiConnectorInstruction*
SamiConnectorInstruction::fromJson(String* json) {
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
SamiConnectorInstruction::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new String();
            jsonToValue(pUrl, pUrlVal, L"String", L"String");
        }
        delete pUrlKey;
        JsonString* pParametersKey = new JsonString(L"parameters");
        IJsonValue* pParametersVal = null;
        pJsonObject->GetValue(pParametersKey, pParametersVal);
        if(pParametersVal != null) {
            pParameters = new ArrayList();
            
            jsonToValue(pParameters, pParametersVal, L"IList", L"String");
        }
        delete pParametersKey;
        JsonString* pUsePopupKey = new JsonString(L"usePopup");
        IJsonValue* pUsePopupVal = null;
        pJsonObject->GetValue(pUsePopupKey, pUsePopupVal);
        if(pUsePopupVal != null) {
            
            pUsePopup = new Boolean(false);
            jsonToValue(pUsePopup, pUsePopupVal, L"Boolean", L"Boolean");
        }
        delete pUsePopupKey;
        
    }
}

SamiConnectorInstruction::SamiConnectorInstruction(String* json) {
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
SamiConnectorInstruction::asJson ()
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
SamiConnectorInstruction::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    
    JsonString *pParametersKey = new JsonString(L"parameters");
    pJsonObject->Add(pParametersKey, toJson(getPParameters(), "String", "array"));

    
    JsonString *pUsePopupKey = new JsonString(L"usePopup");
    pJsonObject->Add(pUsePopupKey, toJson(getPUsePopup(), "Boolean", ""));

    
    return pJsonObject;
}

String*
SamiConnectorInstruction::getPUrl() {
    return pUrl;
}
void
SamiConnectorInstruction::setPUrl(String* pUrl) {
    this->pUrl = pUrl;
}

IList*
SamiConnectorInstruction::getPParameters() {
    return pParameters;
}
void
SamiConnectorInstruction::setPParameters(IList* pParameters) {
    this->pParameters = pParameters;
}

Boolean*
SamiConnectorInstruction::getPUsePopup() {
    return pUsePopup;
}
void
SamiConnectorInstruction::setPUsePopup(Boolean* pUsePopup) {
    this->pUsePopup = pUsePopup;
}



} /* namespace Swagger */

