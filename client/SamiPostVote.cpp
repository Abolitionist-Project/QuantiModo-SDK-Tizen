
#include "SamiPostVote.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPostVote::SamiPostVote() {
    init();
}

SamiPostVote::~SamiPostVote() {
    this->cleanup();
}

void
SamiPostVote::init() {
    pCause = null;
pEffect = null;
pVote = null;
}

void
SamiPostVote::cleanup() {
    if(pCause != null) {
        
        delete pCause;
        pCause = null;
    }
if(pEffect != null) {
        
        delete pEffect;
        pEffect = null;
    }
if(pVote != null) {
        
        delete pVote;
        pVote = null;
    }
}


SamiPostVote*
SamiPostVote::fromJson(String* json) {
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
SamiPostVote::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pVoteKey = new JsonString(L"vote");
        IJsonValue* pVoteVal = null;
        pJsonObject->GetValue(pVoteKey, pVoteVal);
        if(pVoteVal != null) {
            
            pVote = new Boolean(false);
            jsonToValue(pVote, pVoteVal, L"Boolean", L"Boolean");
        }
        delete pVoteKey;
    }
}

SamiPostVote::SamiPostVote(String* json) {
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
SamiPostVote::asJson ()
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
SamiPostVote::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCauseKey = new JsonString(L"cause");
    pJsonObject->Add(pCauseKey, toJson(getPCause(), "String", ""));

    JsonString *pEffectKey = new JsonString(L"effect");
    pJsonObject->Add(pEffectKey, toJson(getPEffect(), "String", ""));

    JsonString *pVoteKey = new JsonString(L"vote");
    pJsonObject->Add(pVoteKey, toJson(getPVote(), "Boolean", ""));

    return pJsonObject;
}

String*
SamiPostVote::getPCause() {
    return pCause;
}
void
SamiPostVote::setPCause(String* pCause) {
    this->pCause = pCause;
}

String*
SamiPostVote::getPEffect() {
    return pEffect;
}
void
SamiPostVote::setPEffect(String* pEffect) {
    this->pEffect = pEffect;
}

Boolean*
SamiPostVote::getPVote() {
    return pVote;
}
void
SamiPostVote::setPVote(Boolean* pVote) {
    this->pVote = pVote;
}



} /* namespace Swagger */

