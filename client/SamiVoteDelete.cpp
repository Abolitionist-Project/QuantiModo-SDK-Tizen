
#include "SamiVoteDelete.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVoteDelete::SamiVoteDelete() {
    init();
}

SamiVoteDelete::~SamiVoteDelete() {
    this->cleanup();
}

void
SamiVoteDelete::init() {
    pCause = null;
pEffect = null;
}

void
SamiVoteDelete::cleanup() {
    if(pCause != null) {
        
        delete pCause;
        pCause = null;
    }
if(pEffect != null) {
        
        delete pEffect;
        pEffect = null;
    }
}


SamiVoteDelete*
SamiVoteDelete::fromJson(String* json) {
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
SamiVoteDelete::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCauseKey = new JsonString(L"cause");
        IJsonValue* pCauseVal = null;
        pJsonObject->GetValue(pCauseKey, pCauseVal);
        if(pCauseVal != null) {
            
            pCause = new String();
            jsonToValue(pCause, pCauseVal, L"String", L"String");
        }
        delete pCauseKey;
JsonString* pEffectKey = new JsonString(L"effect");
        IJsonValue* pEffectVal = null;
        pJsonObject->GetValue(pEffectKey, pEffectVal);
        if(pEffectVal != null) {
            
            pEffect = new String();
            jsonToValue(pEffect, pEffectVal, L"String", L"String");
        }
        delete pEffectKey;
    }
}

SamiVoteDelete::SamiVoteDelete(String* json) {
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
SamiVoteDelete::asJson ()
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
SamiVoteDelete::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCauseKey = new JsonString(L"cause");
    pJsonObject->Add(pCauseKey, toJson(getPCause(), "String", ""));

    JsonString *pEffectKey = new JsonString(L"effect");
    pJsonObject->Add(pEffectKey, toJson(getPEffect(), "String", ""));

    return pJsonObject;
}

String*
SamiVoteDelete::getPCause() {
    return pCause;
}
void
SamiVoteDelete::setPCause(String* pCause) {
    this->pCause = pCause;
}

String*
SamiVoteDelete::getPEffect() {
    return pEffect;
}
void
SamiVoteDelete::setPEffect(String* pEffect) {
    this->pEffect = pEffect;
}



} /* namespace Swagger */

