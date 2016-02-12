
#include "SamiAggregatedCorrelation.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAggregatedCorrelation::SamiAggregatedCorrelation() {
    init();
}

SamiAggregatedCorrelation::~SamiAggregatedCorrelation() {
    this->cleanup();
}

void
SamiAggregatedCorrelation::init() {
    pId = null;
    pCorrelation = null;
    pCause_id = null;
    pEffect_id = null;
    pOnset_delay = null;
    pDuration_of_action = null;
    pNumber_of_pairs = null;
    pValue_predicting_high_outcome = null;
    pValue_predicting_low_outcome = null;
    pOptimal_pearson_product = null;
    pVote = null;
    pNumber_of_users = null;
    pNumber_of_correlations = null;
    pStatistical_significance = null;
    pCause_unit = null;
    pCause_unit_id = null;
    pCause_changes = null;
    pEffect_changes = null;
    pAggregate_qm_score = null;
    pCreated_at = null;
    pUpdated_at = null;
    pStatus = null;
    pError_message = null;
    pLast_successful_update_time = null;
    pReverse_pearson_correlation_coefficient = null;
    pPredictive_pearson_correlation_coefficient = null;
    pData_source = null;
    
}

void
SamiAggregatedCorrelation::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
    if(pCorrelation != null) {
        
        delete pCorrelation;
        pCorrelation = null;
    }
    if(pCause_id != null) {
        
        delete pCause_id;
        pCause_id = null;
    }
    if(pEffect_id != null) {
        
        delete pEffect_id;
        pEffect_id = null;
    }
    if(pOnset_delay != null) {
        
        delete pOnset_delay;
        pOnset_delay = null;
    }
    if(pDuration_of_action != null) {
        
        delete pDuration_of_action;
        pDuration_of_action = null;
    }
    if(pNumber_of_pairs != null) {
        
        delete pNumber_of_pairs;
        pNumber_of_pairs = null;
    }
    if(pValue_predicting_high_outcome != null) {
        
        delete pValue_predicting_high_outcome;
        pValue_predicting_high_outcome = null;
    }
    if(pValue_predicting_low_outcome != null) {
        
        delete pValue_predicting_low_outcome;
        pValue_predicting_low_outcome = null;
    }
    if(pOptimal_pearson_product != null) {
        
        delete pOptimal_pearson_product;
        pOptimal_pearson_product = null;
    }
    if(pVote != null) {
        
        delete pVote;
        pVote = null;
    }
    if(pNumber_of_users != null) {
        
        delete pNumber_of_users;
        pNumber_of_users = null;
    }
    if(pNumber_of_correlations != null) {
        
        delete pNumber_of_correlations;
        pNumber_of_correlations = null;
    }
    if(pStatistical_significance != null) {
        
        delete pStatistical_significance;
        pStatistical_significance = null;
    }
    if(pCause_unit != null) {
        
        delete pCause_unit;
        pCause_unit = null;
    }
    if(pCause_unit_id != null) {
        
        delete pCause_unit_id;
        pCause_unit_id = null;
    }
    if(pCause_changes != null) {
        
        delete pCause_changes;
        pCause_changes = null;
    }
    if(pEffect_changes != null) {
        
        delete pEffect_changes;
        pEffect_changes = null;
    }
    if(pAggregate_qm_score != null) {
        
        delete pAggregate_qm_score;
        pAggregate_qm_score = null;
    }
    if(pCreated_at != null) {
        
        delete pCreated_at;
        pCreated_at = null;
    }
    if(pUpdated_at != null) {
        
        delete pUpdated_at;
        pUpdated_at = null;
    }
    if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
    if(pError_message != null) {
        
        delete pError_message;
        pError_message = null;
    }
    if(pLast_successful_update_time != null) {
        
        delete pLast_successful_update_time;
        pLast_successful_update_time = null;
    }
    if(pReverse_pearson_correlation_coefficient != null) {
        
        delete pReverse_pearson_correlation_coefficient;
        pReverse_pearson_correlation_coefficient = null;
    }
    if(pPredictive_pearson_correlation_coefficient != null) {
        
        delete pPredictive_pearson_correlation_coefficient;
        pPredictive_pearson_correlation_coefficient = null;
    }
    if(pData_source != null) {
        
        delete pData_source;
        pData_source = null;
    }
    
}


SamiAggregatedCorrelation*
SamiAggregatedCorrelation::fromJson(String* json) {
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
SamiAggregatedCorrelation::fromJsonObject(IJsonValue* pJson) {
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
        JsonString* pCorrelationKey = new JsonString(L"correlation");
        IJsonValue* pCorrelationVal = null;
        pJsonObject->GetValue(pCorrelationKey, pCorrelationVal);
        if(pCorrelationVal != null) {
            
            pCorrelation = new Float();
            jsonToValue(pCorrelation, pCorrelationVal, L"Float", L"Float");
        }
        delete pCorrelationKey;
        JsonString* pCause_idKey = new JsonString(L"cause_id");
        IJsonValue* pCause_idVal = null;
        pJsonObject->GetValue(pCause_idKey, pCause_idVal);
        if(pCause_idVal != null) {
            
            pCause_id = new Integer();
            jsonToValue(pCause_id, pCause_idVal, L"Integer", L"Integer");
        }
        delete pCause_idKey;
        JsonString* pEffect_idKey = new JsonString(L"effect_id");
        IJsonValue* pEffect_idVal = null;
        pJsonObject->GetValue(pEffect_idKey, pEffect_idVal);
        if(pEffect_idVal != null) {
            
            pEffect_id = new Integer();
            jsonToValue(pEffect_id, pEffect_idVal, L"Integer", L"Integer");
        }
        delete pEffect_idKey;
        JsonString* pOnset_delayKey = new JsonString(L"onset_delay");
        IJsonValue* pOnset_delayVal = null;
        pJsonObject->GetValue(pOnset_delayKey, pOnset_delayVal);
        if(pOnset_delayVal != null) {
            
            pOnset_delay = new Integer();
            jsonToValue(pOnset_delay, pOnset_delayVal, L"Integer", L"Integer");
        }
        delete pOnset_delayKey;
        JsonString* pDuration_of_actionKey = new JsonString(L"duration_of_action");
        IJsonValue* pDuration_of_actionVal = null;
        pJsonObject->GetValue(pDuration_of_actionKey, pDuration_of_actionVal);
        if(pDuration_of_actionVal != null) {
            
            pDuration_of_action = new Integer();
            jsonToValue(pDuration_of_action, pDuration_of_actionVal, L"Integer", L"Integer");
        }
        delete pDuration_of_actionKey;
        JsonString* pNumber_of_pairsKey = new JsonString(L"number_of_pairs");
        IJsonValue* pNumber_of_pairsVal = null;
        pJsonObject->GetValue(pNumber_of_pairsKey, pNumber_of_pairsVal);
        if(pNumber_of_pairsVal != null) {
            
            pNumber_of_pairs = new Integer();
            jsonToValue(pNumber_of_pairs, pNumber_of_pairsVal, L"Integer", L"Integer");
        }
        delete pNumber_of_pairsKey;
        JsonString* pValue_predicting_high_outcomeKey = new JsonString(L"value_predicting_high_outcome");
        IJsonValue* pValue_predicting_high_outcomeVal = null;
        pJsonObject->GetValue(pValue_predicting_high_outcomeKey, pValue_predicting_high_outcomeVal);
        if(pValue_predicting_high_outcomeVal != null) {
            
            pValue_predicting_high_outcome = new Float();
            jsonToValue(pValue_predicting_high_outcome, pValue_predicting_high_outcomeVal, L"Float", L"Float");
        }
        delete pValue_predicting_high_outcomeKey;
        JsonString* pValue_predicting_low_outcomeKey = new JsonString(L"value_predicting_low_outcome");
        IJsonValue* pValue_predicting_low_outcomeVal = null;
        pJsonObject->GetValue(pValue_predicting_low_outcomeKey, pValue_predicting_low_outcomeVal);
        if(pValue_predicting_low_outcomeVal != null) {
            
            pValue_predicting_low_outcome = new Float();
            jsonToValue(pValue_predicting_low_outcome, pValue_predicting_low_outcomeVal, L"Float", L"Float");
        }
        delete pValue_predicting_low_outcomeKey;
        JsonString* pOptimal_pearson_productKey = new JsonString(L"optimal_pearson_product");
        IJsonValue* pOptimal_pearson_productVal = null;
        pJsonObject->GetValue(pOptimal_pearson_productKey, pOptimal_pearson_productVal);
        if(pOptimal_pearson_productVal != null) {
            
            pOptimal_pearson_product = new Float();
            jsonToValue(pOptimal_pearson_product, pOptimal_pearson_productVal, L"Float", L"Float");
        }
        delete pOptimal_pearson_productKey;
        JsonString* pVoteKey = new JsonString(L"vote");
        IJsonValue* pVoteVal = null;
        pJsonObject->GetValue(pVoteKey, pVoteVal);
        if(pVoteVal != null) {
            
            pVote = new Float();
            jsonToValue(pVote, pVoteVal, L"Float", L"Float");
        }
        delete pVoteKey;
        JsonString* pNumber_of_usersKey = new JsonString(L"number_of_users");
        IJsonValue* pNumber_of_usersVal = null;
        pJsonObject->GetValue(pNumber_of_usersKey, pNumber_of_usersVal);
        if(pNumber_of_usersVal != null) {
            
            pNumber_of_users = new Integer();
            jsonToValue(pNumber_of_users, pNumber_of_usersVal, L"Integer", L"Integer");
        }
        delete pNumber_of_usersKey;
        JsonString* pNumber_of_correlationsKey = new JsonString(L"number_of_correlations");
        IJsonValue* pNumber_of_correlationsVal = null;
        pJsonObject->GetValue(pNumber_of_correlationsKey, pNumber_of_correlationsVal);
        if(pNumber_of_correlationsVal != null) {
            
            pNumber_of_correlations = new Integer();
            jsonToValue(pNumber_of_correlations, pNumber_of_correlationsVal, L"Integer", L"Integer");
        }
        delete pNumber_of_correlationsKey;
        JsonString* pStatistical_significanceKey = new JsonString(L"statistical_significance");
        IJsonValue* pStatistical_significanceVal = null;
        pJsonObject->GetValue(pStatistical_significanceKey, pStatistical_significanceVal);
        if(pStatistical_significanceVal != null) {
            
            pStatistical_significance = new Float();
            jsonToValue(pStatistical_significance, pStatistical_significanceVal, L"Float", L"Float");
        }
        delete pStatistical_significanceKey;
        JsonString* pCause_unitKey = new JsonString(L"cause_unit");
        IJsonValue* pCause_unitVal = null;
        pJsonObject->GetValue(pCause_unitKey, pCause_unitVal);
        if(pCause_unitVal != null) {
            
            pCause_unit = new String();
            jsonToValue(pCause_unit, pCause_unitVal, L"String", L"String");
        }
        delete pCause_unitKey;
        JsonString* pCause_unit_idKey = new JsonString(L"cause_unit_id");
        IJsonValue* pCause_unit_idVal = null;
        pJsonObject->GetValue(pCause_unit_idKey, pCause_unit_idVal);
        if(pCause_unit_idVal != null) {
            
            pCause_unit_id = new Integer();
            jsonToValue(pCause_unit_id, pCause_unit_idVal, L"Integer", L"Integer");
        }
        delete pCause_unit_idKey;
        JsonString* pCause_changesKey = new JsonString(L"cause_changes");
        IJsonValue* pCause_changesVal = null;
        pJsonObject->GetValue(pCause_changesKey, pCause_changesVal);
        if(pCause_changesVal != null) {
            
            pCause_changes = new Integer();
            jsonToValue(pCause_changes, pCause_changesVal, L"Integer", L"Integer");
        }
        delete pCause_changesKey;
        JsonString* pEffect_changesKey = new JsonString(L"effect_changes");
        IJsonValue* pEffect_changesVal = null;
        pJsonObject->GetValue(pEffect_changesKey, pEffect_changesVal);
        if(pEffect_changesVal != null) {
            
            pEffect_changes = new Integer();
            jsonToValue(pEffect_changes, pEffect_changesVal, L"Integer", L"Integer");
        }
        delete pEffect_changesKey;
        JsonString* pAggregate_qm_scoreKey = new JsonString(L"aggregate_qm_score");
        IJsonValue* pAggregate_qm_scoreVal = null;
        pJsonObject->GetValue(pAggregate_qm_scoreKey, pAggregate_qm_scoreVal);
        if(pAggregate_qm_scoreVal != null) {
            
            pAggregate_qm_score = new Float();
            jsonToValue(pAggregate_qm_score, pAggregate_qm_scoreVal, L"Float", L"Float");
        }
        delete pAggregate_qm_scoreKey;
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
        JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
        JsonString* pError_messageKey = new JsonString(L"error_message");
        IJsonValue* pError_messageVal = null;
        pJsonObject->GetValue(pError_messageKey, pError_messageVal);
        if(pError_messageVal != null) {
            
            pError_message = new String();
            jsonToValue(pError_message, pError_messageVal, L"String", L"String");
        }
        delete pError_messageKey;
        JsonString* pLast_successful_update_timeKey = new JsonString(L"last_successful_update_time");
        IJsonValue* pLast_successful_update_timeVal = null;
        pJsonObject->GetValue(pLast_successful_update_timeKey, pLast_successful_update_timeVal);
        if(pLast_successful_update_timeVal != null) {
            
            pLast_successful_update_time = new DateTime();
            jsonToValue(pLast_successful_update_time, pLast_successful_update_timeVal, L"DateTime", L"DateTime");
        }
        delete pLast_successful_update_timeKey;
        JsonString* pReverse_pearson_correlation_coefficientKey = new JsonString(L"reverse_pearson_correlation_coefficient");
        IJsonValue* pReverse_pearson_correlation_coefficientVal = null;
        pJsonObject->GetValue(pReverse_pearson_correlation_coefficientKey, pReverse_pearson_correlation_coefficientVal);
        if(pReverse_pearson_correlation_coefficientVal != null) {
            
            pReverse_pearson_correlation_coefficient = new Float();
            jsonToValue(pReverse_pearson_correlation_coefficient, pReverse_pearson_correlation_coefficientVal, L"Float", L"Float");
        }
        delete pReverse_pearson_correlation_coefficientKey;
        JsonString* pPredictive_pearson_correlation_coefficientKey = new JsonString(L"predictive_pearson_correlation_coefficient");
        IJsonValue* pPredictive_pearson_correlation_coefficientVal = null;
        pJsonObject->GetValue(pPredictive_pearson_correlation_coefficientKey, pPredictive_pearson_correlation_coefficientVal);
        if(pPredictive_pearson_correlation_coefficientVal != null) {
            
            pPredictive_pearson_correlation_coefficient = new Float();
            jsonToValue(pPredictive_pearson_correlation_coefficient, pPredictive_pearson_correlation_coefficientVal, L"Float", L"Float");
        }
        delete pPredictive_pearson_correlation_coefficientKey;
        JsonString* pData_sourceKey = new JsonString(L"data_source");
        IJsonValue* pData_sourceVal = null;
        pJsonObject->GetValue(pData_sourceKey, pData_sourceVal);
        if(pData_sourceVal != null) {
            
            pData_source = new String();
            jsonToValue(pData_source, pData_sourceVal, L"String", L"String");
        }
        delete pData_sourceKey;
        
    }
}

SamiAggregatedCorrelation::SamiAggregatedCorrelation(String* json) {
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
SamiAggregatedCorrelation::asJson ()
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
SamiAggregatedCorrelation::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    
    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    
    JsonString *pCorrelationKey = new JsonString(L"correlation");
    pJsonObject->Add(pCorrelationKey, toJson(getPCorrelation(), "Float", ""));

    
    JsonString *pCause_idKey = new JsonString(L"cause_id");
    pJsonObject->Add(pCause_idKey, toJson(getPCauseId(), "Integer", ""));

    
    JsonString *pEffect_idKey = new JsonString(L"effect_id");
    pJsonObject->Add(pEffect_idKey, toJson(getPEffectId(), "Integer", ""));

    
    JsonString *pOnset_delayKey = new JsonString(L"onset_delay");
    pJsonObject->Add(pOnset_delayKey, toJson(getPOnsetDelay(), "Integer", ""));

    
    JsonString *pDuration_of_actionKey = new JsonString(L"duration_of_action");
    pJsonObject->Add(pDuration_of_actionKey, toJson(getPDurationOfAction(), "Integer", ""));

    
    JsonString *pNumber_of_pairsKey = new JsonString(L"number_of_pairs");
    pJsonObject->Add(pNumber_of_pairsKey, toJson(getPNumberOfPairs(), "Integer", ""));

    
    JsonString *pValue_predicting_high_outcomeKey = new JsonString(L"value_predicting_high_outcome");
    pJsonObject->Add(pValue_predicting_high_outcomeKey, toJson(getPValuePredictingHighOutcome(), "Float", ""));

    
    JsonString *pValue_predicting_low_outcomeKey = new JsonString(L"value_predicting_low_outcome");
    pJsonObject->Add(pValue_predicting_low_outcomeKey, toJson(getPValuePredictingLowOutcome(), "Float", ""));

    
    JsonString *pOptimal_pearson_productKey = new JsonString(L"optimal_pearson_product");
    pJsonObject->Add(pOptimal_pearson_productKey, toJson(getPOptimalPearsonProduct(), "Float", ""));

    
    JsonString *pVoteKey = new JsonString(L"vote");
    pJsonObject->Add(pVoteKey, toJson(getPVote(), "Float", ""));

    
    JsonString *pNumber_of_usersKey = new JsonString(L"number_of_users");
    pJsonObject->Add(pNumber_of_usersKey, toJson(getPNumberOfUsers(), "Integer", ""));

    
    JsonString *pNumber_of_correlationsKey = new JsonString(L"number_of_correlations");
    pJsonObject->Add(pNumber_of_correlationsKey, toJson(getPNumberOfCorrelations(), "Integer", ""));

    
    JsonString *pStatistical_significanceKey = new JsonString(L"statistical_significance");
    pJsonObject->Add(pStatistical_significanceKey, toJson(getPStatisticalSignificance(), "Float", ""));

    
    JsonString *pCause_unitKey = new JsonString(L"cause_unit");
    pJsonObject->Add(pCause_unitKey, toJson(getPCauseUnit(), "String", ""));

    
    JsonString *pCause_unit_idKey = new JsonString(L"cause_unit_id");
    pJsonObject->Add(pCause_unit_idKey, toJson(getPCauseUnitId(), "Integer", ""));

    
    JsonString *pCause_changesKey = new JsonString(L"cause_changes");
    pJsonObject->Add(pCause_changesKey, toJson(getPCauseChanges(), "Integer", ""));

    
    JsonString *pEffect_changesKey = new JsonString(L"effect_changes");
    pJsonObject->Add(pEffect_changesKey, toJson(getPEffectChanges(), "Integer", ""));

    
    JsonString *pAggregate_qm_scoreKey = new JsonString(L"aggregate_qm_score");
    pJsonObject->Add(pAggregate_qm_scoreKey, toJson(getPAggregateQmScore(), "Float", ""));

    
    JsonString *pCreated_atKey = new JsonString(L"created_at");
    pJsonObject->Add(pCreated_atKey, toJson(getPCreatedAt(), "DateTime", ""));

    
    JsonString *pUpdated_atKey = new JsonString(L"updated_at");
    pJsonObject->Add(pUpdated_atKey, toJson(getPUpdatedAt(), "DateTime", ""));

    
    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    
    JsonString *pError_messageKey = new JsonString(L"error_message");
    pJsonObject->Add(pError_messageKey, toJson(getPErrorMessage(), "String", ""));

    
    JsonString *pLast_successful_update_timeKey = new JsonString(L"last_successful_update_time");
    pJsonObject->Add(pLast_successful_update_timeKey, toJson(getPLastSuccessfulUpdateTime(), "DateTime", ""));

    
    JsonString *pReverse_pearson_correlation_coefficientKey = new JsonString(L"reverse_pearson_correlation_coefficient");
    pJsonObject->Add(pReverse_pearson_correlation_coefficientKey, toJson(getPReversePearsonCorrelationCoefficient(), "Float", ""));

    
    JsonString *pPredictive_pearson_correlation_coefficientKey = new JsonString(L"predictive_pearson_correlation_coefficient");
    pJsonObject->Add(pPredictive_pearson_correlation_coefficientKey, toJson(getPPredictivePearsonCorrelationCoefficient(), "Float", ""));

    
    JsonString *pData_sourceKey = new JsonString(L"data_source");
    pJsonObject->Add(pData_sourceKey, toJson(getPDataSource(), "String", ""));

    
    return pJsonObject;
}

Integer*
SamiAggregatedCorrelation::getPId() {
    return pId;
}
void
SamiAggregatedCorrelation::setPId(Integer* pId) {
    this->pId = pId;
}

Float*
SamiAggregatedCorrelation::getPCorrelation() {
    return pCorrelation;
}
void
SamiAggregatedCorrelation::setPCorrelation(Float* pCorrelation) {
    this->pCorrelation = pCorrelation;
}

Integer*
SamiAggregatedCorrelation::getPCauseId() {
    return pCause_id;
}
void
SamiAggregatedCorrelation::setPCauseId(Integer* pCause_id) {
    this->pCause_id = pCause_id;
}

Integer*
SamiAggregatedCorrelation::getPEffectId() {
    return pEffect_id;
}
void
SamiAggregatedCorrelation::setPEffectId(Integer* pEffect_id) {
    this->pEffect_id = pEffect_id;
}

Integer*
SamiAggregatedCorrelation::getPOnsetDelay() {
    return pOnset_delay;
}
void
SamiAggregatedCorrelation::setPOnsetDelay(Integer* pOnset_delay) {
    this->pOnset_delay = pOnset_delay;
}

Integer*
SamiAggregatedCorrelation::getPDurationOfAction() {
    return pDuration_of_action;
}
void
SamiAggregatedCorrelation::setPDurationOfAction(Integer* pDuration_of_action) {
    this->pDuration_of_action = pDuration_of_action;
}

Integer*
SamiAggregatedCorrelation::getPNumberOfPairs() {
    return pNumber_of_pairs;
}
void
SamiAggregatedCorrelation::setPNumberOfPairs(Integer* pNumber_of_pairs) {
    this->pNumber_of_pairs = pNumber_of_pairs;
}

Float*
SamiAggregatedCorrelation::getPValuePredictingHighOutcome() {
    return pValue_predicting_high_outcome;
}
void
SamiAggregatedCorrelation::setPValuePredictingHighOutcome(Float* pValue_predicting_high_outcome) {
    this->pValue_predicting_high_outcome = pValue_predicting_high_outcome;
}

Float*
SamiAggregatedCorrelation::getPValuePredictingLowOutcome() {
    return pValue_predicting_low_outcome;
}
void
SamiAggregatedCorrelation::setPValuePredictingLowOutcome(Float* pValue_predicting_low_outcome) {
    this->pValue_predicting_low_outcome = pValue_predicting_low_outcome;
}

Float*
SamiAggregatedCorrelation::getPOptimalPearsonProduct() {
    return pOptimal_pearson_product;
}
void
SamiAggregatedCorrelation::setPOptimalPearsonProduct(Float* pOptimal_pearson_product) {
    this->pOptimal_pearson_product = pOptimal_pearson_product;
}

Float*
SamiAggregatedCorrelation::getPVote() {
    return pVote;
}
void
SamiAggregatedCorrelation::setPVote(Float* pVote) {
    this->pVote = pVote;
}

Integer*
SamiAggregatedCorrelation::getPNumberOfUsers() {
    return pNumber_of_users;
}
void
SamiAggregatedCorrelation::setPNumberOfUsers(Integer* pNumber_of_users) {
    this->pNumber_of_users = pNumber_of_users;
}

Integer*
SamiAggregatedCorrelation::getPNumberOfCorrelations() {
    return pNumber_of_correlations;
}
void
SamiAggregatedCorrelation::setPNumberOfCorrelations(Integer* pNumber_of_correlations) {
    this->pNumber_of_correlations = pNumber_of_correlations;
}

Float*
SamiAggregatedCorrelation::getPStatisticalSignificance() {
    return pStatistical_significance;
}
void
SamiAggregatedCorrelation::setPStatisticalSignificance(Float* pStatistical_significance) {
    this->pStatistical_significance = pStatistical_significance;
}

String*
SamiAggregatedCorrelation::getPCauseUnit() {
    return pCause_unit;
}
void
SamiAggregatedCorrelation::setPCauseUnit(String* pCause_unit) {
    this->pCause_unit = pCause_unit;
}

Integer*
SamiAggregatedCorrelation::getPCauseUnitId() {
    return pCause_unit_id;
}
void
SamiAggregatedCorrelation::setPCauseUnitId(Integer* pCause_unit_id) {
    this->pCause_unit_id = pCause_unit_id;
}

Integer*
SamiAggregatedCorrelation::getPCauseChanges() {
    return pCause_changes;
}
void
SamiAggregatedCorrelation::setPCauseChanges(Integer* pCause_changes) {
    this->pCause_changes = pCause_changes;
}

Integer*
SamiAggregatedCorrelation::getPEffectChanges() {
    return pEffect_changes;
}
void
SamiAggregatedCorrelation::setPEffectChanges(Integer* pEffect_changes) {
    this->pEffect_changes = pEffect_changes;
}

Float*
SamiAggregatedCorrelation::getPAggregateQmScore() {
    return pAggregate_qm_score;
}
void
SamiAggregatedCorrelation::setPAggregateQmScore(Float* pAggregate_qm_score) {
    this->pAggregate_qm_score = pAggregate_qm_score;
}

DateTime*
SamiAggregatedCorrelation::getPCreatedAt() {
    return pCreated_at;
}
void
SamiAggregatedCorrelation::setPCreatedAt(DateTime* pCreated_at) {
    this->pCreated_at = pCreated_at;
}

DateTime*
SamiAggregatedCorrelation::getPUpdatedAt() {
    return pUpdated_at;
}
void
SamiAggregatedCorrelation::setPUpdatedAt(DateTime* pUpdated_at) {
    this->pUpdated_at = pUpdated_at;
}

String*
SamiAggregatedCorrelation::getPStatus() {
    return pStatus;
}
void
SamiAggregatedCorrelation::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

String*
SamiAggregatedCorrelation::getPErrorMessage() {
    return pError_message;
}
void
SamiAggregatedCorrelation::setPErrorMessage(String* pError_message) {
    this->pError_message = pError_message;
}

DateTime*
SamiAggregatedCorrelation::getPLastSuccessfulUpdateTime() {
    return pLast_successful_update_time;
}
void
SamiAggregatedCorrelation::setPLastSuccessfulUpdateTime(DateTime* pLast_successful_update_time) {
    this->pLast_successful_update_time = pLast_successful_update_time;
}

Float*
SamiAggregatedCorrelation::getPReversePearsonCorrelationCoefficient() {
    return pReverse_pearson_correlation_coefficient;
}
void
SamiAggregatedCorrelation::setPReversePearsonCorrelationCoefficient(Float* pReverse_pearson_correlation_coefficient) {
    this->pReverse_pearson_correlation_coefficient = pReverse_pearson_correlation_coefficient;
}

Float*
SamiAggregatedCorrelation::getPPredictivePearsonCorrelationCoefficient() {
    return pPredictive_pearson_correlation_coefficient;
}
void
SamiAggregatedCorrelation::setPPredictivePearsonCorrelationCoefficient(Float* pPredictive_pearson_correlation_coefficient) {
    this->pPredictive_pearson_correlation_coefficient = pPredictive_pearson_correlation_coefficient;
}

String*
SamiAggregatedCorrelation::getPDataSource() {
    return pData_source;
}
void
SamiAggregatedCorrelation::setPDataSource(String* pData_source) {
    this->pData_source = pData_source;
}



} /* namespace Swagger */

