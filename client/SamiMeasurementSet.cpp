
#include "SamiMeasurementSet.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMeasurementSet::SamiMeasurementSet() {
    init();
}

SamiMeasurementSet::~SamiMeasurementSet() {
    this->cleanup();
}

void
SamiMeasurementSet::init() {
    pMeasurements = null;
    pName = null;
    pSource = null;
    pCategory = null;
    pCombinationOperation = null;
    pUnit = null;
    
}

void
SamiMeasurementSet::cleanup() {
    if(pMeasurements != null) {
        pMeasurements->RemoveAll(true);
        delete pMeasurements;
        pMeasurements = null;
    }
    if(pName != null) {
        
        delete pName;
        pName = null;
    }
    if(pSource != null) {
        
        delete pSource;
        pSource = null;
    }
    if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
    if(pCombinationOperation != null) {
        
        delete pCombinationOperation;
        pCombinationOperation = null;
    }
    if(pUnit != null) {
        
        delete pUnit;
        pUnit = null;
    }
    
}


SamiMeasurementSet*
SamiMeasurementSet::fromJson(String* json) {
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
SamiMeasurementSet::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pMeasurementsKey = new JsonString(L"measurements");
        IJsonValue* pMeasurementsVal = null;
        pJsonObject->GetValue(pMeasurementsKey, pMeasurementsVal);
        if(pMeasurementsVal != null) {
            pMeasurements = new ArrayList();
            
            jsonToValue(pMeasurements, pMeasurementsVal, L"IList", L"SamiValueObject");
        }
        delete pMeasurementsKey;
        JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
        JsonString* pSourceKey = new JsonString(L"source");
        IJsonValue* pSourceVal = null;
        pJsonObject->GetValue(pSourceKey, pSourceVal);
        if(pSourceVal != null) {
            
            pSource = new String();
            jsonToValue(pSource, pSourceVal, L"String", L"String");
        }
        delete pSourceKey;
        JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new String();
            jsonToValue(pCategory, pCategoryVal, L"String", L"String");
        }
        delete pCategoryKey;
        JsonString* pCombinationOperationKey = new JsonString(L"combinationOperation");
        IJsonValue* pCombinationOperationVal = null;
        pJsonObject->GetValue(pCombinationOperationKey, pCombinationOperationVal);
        if(pCombinationOperationVal != null) {
            
            pCombinationOperation = new String();
            jsonToValue(pCombinationOperation, pCombinationOperationVal, L"String", L"String");
        }
        delete pCombinationOperationKey;
        JsonString* pUnitKey = new JsonString(L"unit");
        IJsonValue* pUnitVal = null;
        pJsonObject->GetValue(pUnitKey, pUnitVal);
        if(pUnitVal != null) {
            
            pUnit = new String();
            jsonToValue(pUnit, pUnitVal, L"String", L"String");
        }
        delete pUnitKey;
        
    }
}

SamiMeasurementSet::SamiMeasurementSet(String* json) {
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
SamiMeasurementSet::asJson ()
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
SamiMeasurementSet::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pMeasurementsKey = new JsonString(L"measurements");
    pJsonObject->Add(pMeasurementsKey, toJson(getPMeasurements(), "SamiValueObject", "array"));

    
    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    
    JsonString *pSourceKey = new JsonString(L"source");
    pJsonObject->Add(pSourceKey, toJson(getPSource(), "String", ""));

    
    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "String", ""));

    
    JsonString *pCombinationOperationKey = new JsonString(L"combinationOperation");
    pJsonObject->Add(pCombinationOperationKey, toJson(getPCombinationOperation(), "String", ""));

    
    JsonString *pUnitKey = new JsonString(L"unit");
    pJsonObject->Add(pUnitKey, toJson(getPUnit(), "String", ""));

    
    return pJsonObject;
}

IList*
SamiMeasurementSet::getPMeasurements() {
    return pMeasurements;
}
void
SamiMeasurementSet::setPMeasurements(IList* pMeasurements) {
    this->pMeasurements = pMeasurements;
}

String*
SamiMeasurementSet::getPName() {
    return pName;
}
void
SamiMeasurementSet::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiMeasurementSet::getPSource() {
    return pSource;
}
void
SamiMeasurementSet::setPSource(String* pSource) {
    this->pSource = pSource;
}

String*
SamiMeasurementSet::getPCategory() {
    return pCategory;
}
void
SamiMeasurementSet::setPCategory(String* pCategory) {
    this->pCategory = pCategory;
}

String*
SamiMeasurementSet::getPCombinationOperation() {
    return pCombinationOperation;
}
void
SamiMeasurementSet::setPCombinationOperation(String* pCombinationOperation) {
    this->pCombinationOperation = pCombinationOperation;
}

String*
SamiMeasurementSet::getPUnit() {
    return pUnit;
}
void
SamiMeasurementSet::setPUnit(String* pUnit) {
    this->pUnit = pUnit;
}



} /* namespace Swagger */

