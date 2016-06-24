
#include "SamiPostCorrelation.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPostCorrelation::SamiPostCorrelation() {
    init();
}

SamiPostCorrelation::~SamiPostCorrelation() {
    this->cleanup();
}

void
SamiPostCorrelation::init() {
    pCause = null;
pEffect = null;
pCorrelation = null;
pVote = null;
}

void
SamiPostCorrelation::cleanup() {
    if(pCause != null) {
        
        delete pCause;
        pCause = null;
    }
if(pEffect != null) {
        
        delete pEffect;
        pEffect = null;
    }
if(pCorrelation != null) {
        
        delete pCorrelation;
        pCorrelation = null;
    }
if(pVote != null) {
        
        delete pVote;
        pVote = null;
    }
}


SamiPostCorrelation*
SamiPostCorrelation::fromJson(String* json) {
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
SamiPostCorrelation::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pCorrelationKey = new JsonString(L"correlation");
        IJsonValue* pCorrelationVal = null;
        pJsonObject->GetValue(pCorrelationKey, pCorrelationVal);
        if(pCorrelationVal != null) {
            
            pCorrelation = new Double();
            jsonToValue(pCorrelation, pCorrelationVal, L"Double", L"Double");
        }
        delete pCorrelationKey;
JsonString* pVoteKey = new JsonString(L"vote");
        IJsonValue* pVoteVal = null;
        pJsonObject->GetValue(pVoteKey, pVoteVal);
        if(pVoteVal != null) {
            
            pVote = null;
            jsonToValue(pVote, pVoteVal, L"Integer", L"Integer");
        }
        delete pVoteKey;
    }
}

SamiPostCorrelation::SamiPostCorrelation(String* json) {
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
SamiPostCorrelation::asJson ()
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
SamiPostCorrelation::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCauseKey = new JsonString(L"cause");
    pJsonObject->Add(pCauseKey, toJson(getPCause(), "String", ""));

    JsonString *pEffectKey = new JsonString(L"effect");
    pJsonObject->Add(pEffectKey, toJson(getPEffect(), "String", ""));

    JsonString *pCorrelationKey = new JsonString(L"correlation");
    pJsonObject->Add(pCorrelationKey, toJson(getPCorrelation(), "Double", ""));

    JsonString *pVoteKey = new JsonString(L"vote");
    pJsonObject->Add(pVoteKey, toJson(getPVote(), "Integer", ""));

    return pJsonObject;
}

String*
SamiPostCorrelation::getPCause() {
    return pCause;
}
void
SamiPostCorrelation::setPCause(String* pCause) {
    this->pCause = pCause;
}

String*
SamiPostCorrelation::getPEffect() {
    return pEffect;
}
void
SamiPostCorrelation::setPEffect(String* pEffect) {
    this->pEffect = pEffect;
}

Double*
SamiPostCorrelation::getPCorrelation() {
    return pCorrelation;
}
void
SamiPostCorrelation::setPCorrelation(Double* pCorrelation) {
    this->pCorrelation = pCorrelation;
}

Integer*
SamiPostCorrelation::getPVote() {
    return pVote;
}
void
SamiPostCorrelation::setPVote(Integer* pVote) {
    this->pVote = pVote;
}



} /* namespace Swagger */

