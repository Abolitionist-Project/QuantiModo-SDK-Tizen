
#include "SamiCorrelation.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCorrelation::SamiCorrelation() {
    init();
}

SamiCorrelation::~SamiCorrelation() {
    this->cleanup();
}

void
SamiCorrelation::init() {
    pCorrelationCoefficient = null;
    pCause = null;
    pOriginalCause = null;
    pEffect = null;
    pOriginalEffect = null;
    pOnsetDelay = null;
    pDurationOfAction = null;
    pNumberOfPairs = null;
    pEffectSize = null;
    pStatisticalSignificance = null;
    pTimestamp = null;
    pReverseCorrelation = null;
    pCausalityFactor = null;
    pCauseCategory = null;
    pEffectCategory = null;
    pValuePredictingHighOutcome = null;
    pValuePredictingLowOutcome = null;
    pOptimalPearsonProduct = null;
    pAverageVote = null;
    pUserVote = null;
    pCauseUnit = null;
    pCauseUnitId = null;
    
}

void
SamiCorrelation::cleanup() {
    if(pCorrelationCoefficient != null) {
        
        delete pCorrelationCoefficient;
        pCorrelationCoefficient = null;
    }
    if(pCause != null) {
        
        delete pCause;
        pCause = null;
    }
    if(pOriginalCause != null) {
        
        delete pOriginalCause;
        pOriginalCause = null;
    }
    if(pEffect != null) {
        
        delete pEffect;
        pEffect = null;
    }
    if(pOriginalEffect != null) {
        
        delete pOriginalEffect;
        pOriginalEffect = null;
    }
    if(pOnsetDelay != null) {
        
        delete pOnsetDelay;
        pOnsetDelay = null;
    }
    if(pDurationOfAction != null) {
        
        delete pDurationOfAction;
        pDurationOfAction = null;
    }
    if(pNumberOfPairs != null) {
        
        delete pNumberOfPairs;
        pNumberOfPairs = null;
    }
    if(pEffectSize != null) {
        
        delete pEffectSize;
        pEffectSize = null;
    }
    if(pStatisticalSignificance != null) {
        
        delete pStatisticalSignificance;
        pStatisticalSignificance = null;
    }
    if(pTimestamp != null) {
        
        delete pTimestamp;
        pTimestamp = null;
    }
    if(pReverseCorrelation != null) {
        
        delete pReverseCorrelation;
        pReverseCorrelation = null;
    }
    if(pCausalityFactor != null) {
        
        delete pCausalityFactor;
        pCausalityFactor = null;
    }
    if(pCauseCategory != null) {
        
        delete pCauseCategory;
        pCauseCategory = null;
    }
    if(pEffectCategory != null) {
        
        delete pEffectCategory;
        pEffectCategory = null;
    }
    if(pValuePredictingHighOutcome != null) {
        
        delete pValuePredictingHighOutcome;
        pValuePredictingHighOutcome = null;
    }
    if(pValuePredictingLowOutcome != null) {
        
        delete pValuePredictingLowOutcome;
        pValuePredictingLowOutcome = null;
    }
    if(pOptimalPearsonProduct != null) {
        
        delete pOptimalPearsonProduct;
        pOptimalPearsonProduct = null;
    }
    if(pAverageVote != null) {
        
        delete pAverageVote;
        pAverageVote = null;
    }
    if(pUserVote != null) {
        
        delete pUserVote;
        pUserVote = null;
    }
    if(pCauseUnit != null) {
        
        delete pCauseUnit;
        pCauseUnit = null;
    }
    if(pCauseUnitId != null) {
        
        delete pCauseUnitId;
        pCauseUnitId = null;
    }
    
}


SamiCorrelation*
SamiCorrelation::fromJson(String* json) {
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
SamiCorrelation::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCorrelationCoefficientKey = new JsonString(L"correlationCoefficient");
        IJsonValue* pCorrelationCoefficientVal = null;
        pJsonObject->GetValue(pCorrelationCoefficientKey, pCorrelationCoefficientVal);
        if(pCorrelationCoefficientVal != null) {
            
            pCorrelationCoefficient = new Long();
            jsonToValue(pCorrelationCoefficient, pCorrelationCoefficientVal, L"Long", L"Long");
        }
        delete pCorrelationCoefficientKey;
        JsonString* pCauseKey = new JsonString(L"cause");
        IJsonValue* pCauseVal = null;
        pJsonObject->GetValue(pCauseKey, pCauseVal);
        if(pCauseVal != null) {
            
            pCause = new String();
            jsonToValue(pCause, pCauseVal, L"String", L"String");
        }
        delete pCauseKey;
        JsonString* pOriginalCauseKey = new JsonString(L"originalCause");
        IJsonValue* pOriginalCauseVal = null;
        pJsonObject->GetValue(pOriginalCauseKey, pOriginalCauseVal);
        if(pOriginalCauseVal != null) {
            
            pOriginalCause = new String();
            jsonToValue(pOriginalCause, pOriginalCauseVal, L"String", L"String");
        }
        delete pOriginalCauseKey;
        JsonString* pEffectKey = new JsonString(L"effect");
        IJsonValue* pEffectVal = null;
        pJsonObject->GetValue(pEffectKey, pEffectVal);
        if(pEffectVal != null) {
            
            pEffect = new String();
            jsonToValue(pEffect, pEffectVal, L"String", L"String");
        }
        delete pEffectKey;
        JsonString* pOriginalEffectKey = new JsonString(L"originalEffect");
        IJsonValue* pOriginalEffectVal = null;
        pJsonObject->GetValue(pOriginalEffectKey, pOriginalEffectVal);
        if(pOriginalEffectVal != null) {
            
            pOriginalEffect = new String();
            jsonToValue(pOriginalEffect, pOriginalEffectVal, L"String", L"String");
        }
        delete pOriginalEffectKey;
        JsonString* pOnsetDelayKey = new JsonString(L"onsetDelay");
        IJsonValue* pOnsetDelayVal = null;
        pJsonObject->GetValue(pOnsetDelayKey, pOnsetDelayVal);
        if(pOnsetDelayVal != null) {
            
            pOnsetDelay = new Double();
            jsonToValue(pOnsetDelay, pOnsetDelayVal, L"Double", L"Double");
        }
        delete pOnsetDelayKey;
        JsonString* pDurationOfActionKey = new JsonString(L"durationOfAction");
        IJsonValue* pDurationOfActionVal = null;
        pJsonObject->GetValue(pDurationOfActionKey, pDurationOfActionVal);
        if(pDurationOfActionVal != null) {
            
            pDurationOfAction = new Long();
            jsonToValue(pDurationOfAction, pDurationOfActionVal, L"Long", L"Long");
        }
        delete pDurationOfActionKey;
        JsonString* pNumberOfPairsKey = new JsonString(L"numberOfPairs");
        IJsonValue* pNumberOfPairsVal = null;
        pJsonObject->GetValue(pNumberOfPairsKey, pNumberOfPairsVal);
        if(pNumberOfPairsVal != null) {
            
            pNumberOfPairs = new Long();
            jsonToValue(pNumberOfPairs, pNumberOfPairsVal, L"Long", L"Long");
        }
        delete pNumberOfPairsKey;
        JsonString* pEffectSizeKey = new JsonString(L"effectSize");
        IJsonValue* pEffectSizeVal = null;
        pJsonObject->GetValue(pEffectSizeKey, pEffectSizeVal);
        if(pEffectSizeVal != null) {
            
            pEffectSize = new String();
            jsonToValue(pEffectSize, pEffectSizeVal, L"String", L"String");
        }
        delete pEffectSizeKey;
        JsonString* pStatisticalSignificanceKey = new JsonString(L"statisticalSignificance");
        IJsonValue* pStatisticalSignificanceVal = null;
        pJsonObject->GetValue(pStatisticalSignificanceKey, pStatisticalSignificanceVal);
        if(pStatisticalSignificanceVal != null) {
            
            pStatisticalSignificance = new String();
            jsonToValue(pStatisticalSignificance, pStatisticalSignificanceVal, L"String", L"String");
        }
        delete pStatisticalSignificanceKey;
        JsonString* pTimestampKey = new JsonString(L"timestamp");
        IJsonValue* pTimestampVal = null;
        pJsonObject->GetValue(pTimestampKey, pTimestampVal);
        if(pTimestampVal != null) {
            
            pTimestamp = new Long();
            jsonToValue(pTimestamp, pTimestampVal, L"Long", L"Long");
        }
        delete pTimestampKey;
        JsonString* pReverseCorrelationKey = new JsonString(L"reverseCorrelation");
        IJsonValue* pReverseCorrelationVal = null;
        pJsonObject->GetValue(pReverseCorrelationKey, pReverseCorrelationVal);
        if(pReverseCorrelationVal != null) {
            
            pReverseCorrelation = new Long();
            jsonToValue(pReverseCorrelation, pReverseCorrelationVal, L"Long", L"Long");
        }
        delete pReverseCorrelationKey;
        JsonString* pCausalityFactorKey = new JsonString(L"causalityFactor");
        IJsonValue* pCausalityFactorVal = null;
        pJsonObject->GetValue(pCausalityFactorKey, pCausalityFactorVal);
        if(pCausalityFactorVal != null) {
            
            pCausalityFactor = new Long();
            jsonToValue(pCausalityFactor, pCausalityFactorVal, L"Long", L"Long");
        }
        delete pCausalityFactorKey;
        JsonString* pCauseCategoryKey = new JsonString(L"causeCategory");
        IJsonValue* pCauseCategoryVal = null;
        pJsonObject->GetValue(pCauseCategoryKey, pCauseCategoryVal);
        if(pCauseCategoryVal != null) {
            
            pCauseCategory = new String();
            jsonToValue(pCauseCategory, pCauseCategoryVal, L"String", L"String");
        }
        delete pCauseCategoryKey;
        JsonString* pEffectCategoryKey = new JsonString(L"effectCategory");
        IJsonValue* pEffectCategoryVal = null;
        pJsonObject->GetValue(pEffectCategoryKey, pEffectCategoryVal);
        if(pEffectCategoryVal != null) {
            
            pEffectCategory = new String();
            jsonToValue(pEffectCategory, pEffectCategoryVal, L"String", L"String");
        }
        delete pEffectCategoryKey;
        JsonString* pValuePredictingHighOutcomeKey = new JsonString(L"valuePredictingHighOutcome");
        IJsonValue* pValuePredictingHighOutcomeVal = null;
        pJsonObject->GetValue(pValuePredictingHighOutcomeKey, pValuePredictingHighOutcomeVal);
        if(pValuePredictingHighOutcomeVal != null) {
            
            pValuePredictingHighOutcome = new Long();
            jsonToValue(pValuePredictingHighOutcome, pValuePredictingHighOutcomeVal, L"Long", L"Long");
        }
        delete pValuePredictingHighOutcomeKey;
        JsonString* pValuePredictingLowOutcomeKey = new JsonString(L"valuePredictingLowOutcome");
        IJsonValue* pValuePredictingLowOutcomeVal = null;
        pJsonObject->GetValue(pValuePredictingLowOutcomeKey, pValuePredictingLowOutcomeVal);
        if(pValuePredictingLowOutcomeVal != null) {
            
            pValuePredictingLowOutcome = new Long();
            jsonToValue(pValuePredictingLowOutcome, pValuePredictingLowOutcomeVal, L"Long", L"Long");
        }
        delete pValuePredictingLowOutcomeKey;
        JsonString* pOptimalPearsonProductKey = new JsonString(L"optimalPearsonProduct");
        IJsonValue* pOptimalPearsonProductVal = null;
        pJsonObject->GetValue(pOptimalPearsonProductKey, pOptimalPearsonProductVal);
        if(pOptimalPearsonProductVal != null) {
            
            pOptimalPearsonProduct = new Long();
            jsonToValue(pOptimalPearsonProduct, pOptimalPearsonProductVal, L"Long", L"Long");
        }
        delete pOptimalPearsonProductKey;
        JsonString* pAverageVoteKey = new JsonString(L"averageVote");
        IJsonValue* pAverageVoteVal = null;
        pJsonObject->GetValue(pAverageVoteKey, pAverageVoteVal);
        if(pAverageVoteVal != null) {
            
            pAverageVote = new Long();
            jsonToValue(pAverageVote, pAverageVoteVal, L"Long", L"Long");
        }
        delete pAverageVoteKey;
        JsonString* pUserVoteKey = new JsonString(L"userVote");
        IJsonValue* pUserVoteVal = null;
        pJsonObject->GetValue(pUserVoteKey, pUserVoteVal);
        if(pUserVoteVal != null) {
            
            pUserVote = new Long();
            jsonToValue(pUserVote, pUserVoteVal, L"Long", L"Long");
        }
        delete pUserVoteKey;
        JsonString* pCauseUnitKey = new JsonString(L"causeUnit");
        IJsonValue* pCauseUnitVal = null;
        pJsonObject->GetValue(pCauseUnitKey, pCauseUnitVal);
        if(pCauseUnitVal != null) {
            
            pCauseUnit = new String();
            jsonToValue(pCauseUnit, pCauseUnitVal, L"String", L"String");
        }
        delete pCauseUnitKey;
        JsonString* pCauseUnitIdKey = new JsonString(L"causeUnitId");
        IJsonValue* pCauseUnitIdVal = null;
        pJsonObject->GetValue(pCauseUnitIdKey, pCauseUnitIdVal);
        if(pCauseUnitIdVal != null) {
            
            pCauseUnitId = null;
            jsonToValue(pCauseUnitId, pCauseUnitIdVal, L"Integer", L"Integer");
        }
        delete pCauseUnitIdKey;
        
    }
}

SamiCorrelation::SamiCorrelation(String* json) {
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
SamiCorrelation::asJson ()
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
SamiCorrelation::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pCorrelationCoefficientKey = new JsonString(L"correlationCoefficient");
    pJsonObject->Add(pCorrelationCoefficientKey, toJson(getPCorrelationCoefficient(), "Long", ""));

    
    JsonString *pCauseKey = new JsonString(L"cause");
    pJsonObject->Add(pCauseKey, toJson(getPCause(), "String", ""));

    
    JsonString *pOriginalCauseKey = new JsonString(L"originalCause");
    pJsonObject->Add(pOriginalCauseKey, toJson(getPOriginalCause(), "String", ""));

    
    JsonString *pEffectKey = new JsonString(L"effect");
    pJsonObject->Add(pEffectKey, toJson(getPEffect(), "String", ""));

    
    JsonString *pOriginalEffectKey = new JsonString(L"originalEffect");
    pJsonObject->Add(pOriginalEffectKey, toJson(getPOriginalEffect(), "String", ""));

    
    JsonString *pOnsetDelayKey = new JsonString(L"onsetDelay");
    pJsonObject->Add(pOnsetDelayKey, toJson(getPOnsetDelay(), "Double", ""));

    
    JsonString *pDurationOfActionKey = new JsonString(L"durationOfAction");
    pJsonObject->Add(pDurationOfActionKey, toJson(getPDurationOfAction(), "Long", ""));

    
    JsonString *pNumberOfPairsKey = new JsonString(L"numberOfPairs");
    pJsonObject->Add(pNumberOfPairsKey, toJson(getPNumberOfPairs(), "Long", ""));

    
    JsonString *pEffectSizeKey = new JsonString(L"effectSize");
    pJsonObject->Add(pEffectSizeKey, toJson(getPEffectSize(), "String", ""));

    
    JsonString *pStatisticalSignificanceKey = new JsonString(L"statisticalSignificance");
    pJsonObject->Add(pStatisticalSignificanceKey, toJson(getPStatisticalSignificance(), "String", ""));

    
    JsonString *pTimestampKey = new JsonString(L"timestamp");
    pJsonObject->Add(pTimestampKey, toJson(getPTimestamp(), "Long", ""));

    
    JsonString *pReverseCorrelationKey = new JsonString(L"reverseCorrelation");
    pJsonObject->Add(pReverseCorrelationKey, toJson(getPReverseCorrelation(), "Long", ""));

    
    JsonString *pCausalityFactorKey = new JsonString(L"causalityFactor");
    pJsonObject->Add(pCausalityFactorKey, toJson(getPCausalityFactor(), "Long", ""));

    
    JsonString *pCauseCategoryKey = new JsonString(L"causeCategory");
    pJsonObject->Add(pCauseCategoryKey, toJson(getPCauseCategory(), "String", ""));

    
    JsonString *pEffectCategoryKey = new JsonString(L"effectCategory");
    pJsonObject->Add(pEffectCategoryKey, toJson(getPEffectCategory(), "String", ""));

    
    JsonString *pValuePredictingHighOutcomeKey = new JsonString(L"valuePredictingHighOutcome");
    pJsonObject->Add(pValuePredictingHighOutcomeKey, toJson(getPValuePredictingHighOutcome(), "Long", ""));

    
    JsonString *pValuePredictingLowOutcomeKey = new JsonString(L"valuePredictingLowOutcome");
    pJsonObject->Add(pValuePredictingLowOutcomeKey, toJson(getPValuePredictingLowOutcome(), "Long", ""));

    
    JsonString *pOptimalPearsonProductKey = new JsonString(L"optimalPearsonProduct");
    pJsonObject->Add(pOptimalPearsonProductKey, toJson(getPOptimalPearsonProduct(), "Long", ""));

    
    JsonString *pAverageVoteKey = new JsonString(L"averageVote");
    pJsonObject->Add(pAverageVoteKey, toJson(getPAverageVote(), "Long", ""));

    
    JsonString *pUserVoteKey = new JsonString(L"userVote");
    pJsonObject->Add(pUserVoteKey, toJson(getPUserVote(), "Long", ""));

    
    JsonString *pCauseUnitKey = new JsonString(L"causeUnit");
    pJsonObject->Add(pCauseUnitKey, toJson(getPCauseUnit(), "String", ""));

    
    JsonString *pCauseUnitIdKey = new JsonString(L"causeUnitId");
    pJsonObject->Add(pCauseUnitIdKey, toJson(getPCauseUnitId(), "Integer", ""));

    
    return pJsonObject;
}

Long*
SamiCorrelation::getPCorrelationCoefficient() {
    return pCorrelationCoefficient;
}
void
SamiCorrelation::setPCorrelationCoefficient(Long* pCorrelationCoefficient) {
    this->pCorrelationCoefficient = pCorrelationCoefficient;
}

String*
SamiCorrelation::getPCause() {
    return pCause;
}
void
SamiCorrelation::setPCause(String* pCause) {
    this->pCause = pCause;
}

String*
SamiCorrelation::getPOriginalCause() {
    return pOriginalCause;
}
void
SamiCorrelation::setPOriginalCause(String* pOriginalCause) {
    this->pOriginalCause = pOriginalCause;
}

String*
SamiCorrelation::getPEffect() {
    return pEffect;
}
void
SamiCorrelation::setPEffect(String* pEffect) {
    this->pEffect = pEffect;
}

String*
SamiCorrelation::getPOriginalEffect() {
    return pOriginalEffect;
}
void
SamiCorrelation::setPOriginalEffect(String* pOriginalEffect) {
    this->pOriginalEffect = pOriginalEffect;
}

Double*
SamiCorrelation::getPOnsetDelay() {
    return pOnsetDelay;
}
void
SamiCorrelation::setPOnsetDelay(Double* pOnsetDelay) {
    this->pOnsetDelay = pOnsetDelay;
}

Long*
SamiCorrelation::getPDurationOfAction() {
    return pDurationOfAction;
}
void
SamiCorrelation::setPDurationOfAction(Long* pDurationOfAction) {
    this->pDurationOfAction = pDurationOfAction;
}

Long*
SamiCorrelation::getPNumberOfPairs() {
    return pNumberOfPairs;
}
void
SamiCorrelation::setPNumberOfPairs(Long* pNumberOfPairs) {
    this->pNumberOfPairs = pNumberOfPairs;
}

String*
SamiCorrelation::getPEffectSize() {
    return pEffectSize;
}
void
SamiCorrelation::setPEffectSize(String* pEffectSize) {
    this->pEffectSize = pEffectSize;
}

String*
SamiCorrelation::getPStatisticalSignificance() {
    return pStatisticalSignificance;
}
void
SamiCorrelation::setPStatisticalSignificance(String* pStatisticalSignificance) {
    this->pStatisticalSignificance = pStatisticalSignificance;
}

Long*
SamiCorrelation::getPTimestamp() {
    return pTimestamp;
}
void
SamiCorrelation::setPTimestamp(Long* pTimestamp) {
    this->pTimestamp = pTimestamp;
}

Long*
SamiCorrelation::getPReverseCorrelation() {
    return pReverseCorrelation;
}
void
SamiCorrelation::setPReverseCorrelation(Long* pReverseCorrelation) {
    this->pReverseCorrelation = pReverseCorrelation;
}

Long*
SamiCorrelation::getPCausalityFactor() {
    return pCausalityFactor;
}
void
SamiCorrelation::setPCausalityFactor(Long* pCausalityFactor) {
    this->pCausalityFactor = pCausalityFactor;
}

String*
SamiCorrelation::getPCauseCategory() {
    return pCauseCategory;
}
void
SamiCorrelation::setPCauseCategory(String* pCauseCategory) {
    this->pCauseCategory = pCauseCategory;
}

String*
SamiCorrelation::getPEffectCategory() {
    return pEffectCategory;
}
void
SamiCorrelation::setPEffectCategory(String* pEffectCategory) {
    this->pEffectCategory = pEffectCategory;
}

Long*
SamiCorrelation::getPValuePredictingHighOutcome() {
    return pValuePredictingHighOutcome;
}
void
SamiCorrelation::setPValuePredictingHighOutcome(Long* pValuePredictingHighOutcome) {
    this->pValuePredictingHighOutcome = pValuePredictingHighOutcome;
}

Long*
SamiCorrelation::getPValuePredictingLowOutcome() {
    return pValuePredictingLowOutcome;
}
void
SamiCorrelation::setPValuePredictingLowOutcome(Long* pValuePredictingLowOutcome) {
    this->pValuePredictingLowOutcome = pValuePredictingLowOutcome;
}

Long*
SamiCorrelation::getPOptimalPearsonProduct() {
    return pOptimalPearsonProduct;
}
void
SamiCorrelation::setPOptimalPearsonProduct(Long* pOptimalPearsonProduct) {
    this->pOptimalPearsonProduct = pOptimalPearsonProduct;
}

Long*
SamiCorrelation::getPAverageVote() {
    return pAverageVote;
}
void
SamiCorrelation::setPAverageVote(Long* pAverageVote) {
    this->pAverageVote = pAverageVote;
}

Long*
SamiCorrelation::getPUserVote() {
    return pUserVote;
}
void
SamiCorrelation::setPUserVote(Long* pUserVote) {
    this->pUserVote = pUserVote;
}

String*
SamiCorrelation::getPCauseUnit() {
    return pCauseUnit;
}
void
SamiCorrelation::setPCauseUnit(String* pCauseUnit) {
    this->pCauseUnit = pCauseUnit;
}

Integer*
SamiCorrelation::getPCauseUnitId() {
    return pCauseUnitId;
}
void
SamiCorrelation::setPCauseUnitId(Integer* pCauseUnitId) {
    this->pCauseUnitId = pCauseUnitId;
}



} /* namespace Swagger */

