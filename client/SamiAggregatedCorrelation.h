/*
 * SamiAggregatedCorrelation.h
 * 
 * 
 */

#ifndef SamiAggregatedCorrelation_H_
#define SamiAggregatedCorrelation_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Float;
using Tizen::Base::DateTime;
using Tizen::Base::String;
using Tizen::Base::Integer;


namespace Swagger {

class SamiAggregatedCorrelation: public SamiObject {
public:
    SamiAggregatedCorrelation();
    SamiAggregatedCorrelation(String* json);
    virtual ~SamiAggregatedCorrelation();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAggregatedCorrelation* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    Float* getPCorrelation();
    void setPCorrelation(Float* pCorrelation);
    
    Integer* getPCauseId();
    void setPCauseId(Integer* pCause_id);
    
    Integer* getPEffectId();
    void setPEffectId(Integer* pEffect_id);
    
    Integer* getPOnsetDelay();
    void setPOnsetDelay(Integer* pOnset_delay);
    
    Integer* getPDurationOfAction();
    void setPDurationOfAction(Integer* pDuration_of_action);
    
    Integer* getPNumberOfPairs();
    void setPNumberOfPairs(Integer* pNumber_of_pairs);
    
    Float* getPValuePredictingHighOutcome();
    void setPValuePredictingHighOutcome(Float* pValue_predicting_high_outcome);
    
    Float* getPValuePredictingLowOutcome();
    void setPValuePredictingLowOutcome(Float* pValue_predicting_low_outcome);
    
    Float* getPOptimalPearsonProduct();
    void setPOptimalPearsonProduct(Float* pOptimal_pearson_product);
    
    Float* getPVote();
    void setPVote(Float* pVote);
    
    Integer* getPNumberOfUsers();
    void setPNumberOfUsers(Integer* pNumber_of_users);
    
    Integer* getPNumberOfCorrelations();
    void setPNumberOfCorrelations(Integer* pNumber_of_correlations);
    
    Float* getPStatisticalSignificance();
    void setPStatisticalSignificance(Float* pStatistical_significance);
    
    String* getPCauseUnit();
    void setPCauseUnit(String* pCause_unit);
    
    Integer* getPCauseUnitId();
    void setPCauseUnitId(Integer* pCause_unit_id);
    
    Integer* getPCauseChanges();
    void setPCauseChanges(Integer* pCause_changes);
    
    Integer* getPEffectChanges();
    void setPEffectChanges(Integer* pEffect_changes);
    
    Float* getPAggregateQmScore();
    void setPAggregateQmScore(Float* pAggregate_qm_score);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    
    String* getPStatus();
    void setPStatus(String* pStatus);
    
    String* getPErrorMessage();
    void setPErrorMessage(String* pError_message);
    
    DateTime* getPLastSuccessfulUpdateTime();
    void setPLastSuccessfulUpdateTime(DateTime* pLast_successful_update_time);
    
    Float* getPReversePearsonCorrelationCoefficient();
    void setPReversePearsonCorrelationCoefficient(Float* pReverse_pearson_correlation_coefficient);
    
    Float* getPPredictivePearsonCorrelationCoefficient();
    void setPPredictivePearsonCorrelationCoefficient(Float* pPredictive_pearson_correlation_coefficient);
    

private:
    Integer* pId;
    Float* pCorrelation;
    Integer* pCause_id;
    Integer* pEffect_id;
    Integer* pOnset_delay;
    Integer* pDuration_of_action;
    Integer* pNumber_of_pairs;
    Float* pValue_predicting_high_outcome;
    Float* pValue_predicting_low_outcome;
    Float* pOptimal_pearson_product;
    Float* pVote;
    Integer* pNumber_of_users;
    Integer* pNumber_of_correlations;
    Float* pStatistical_significance;
    String* pCause_unit;
    Integer* pCause_unit_id;
    Integer* pCause_changes;
    Integer* pEffect_changes;
    Float* pAggregate_qm_score;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    String* pStatus;
    String* pError_message;
    DateTime* pLast_successful_update_time;
    Float* pReverse_pearson_correlation_coefficient;
    Float* pPredictive_pearson_correlation_coefficient;
    
};

} /* namespace Swagger */

#endif /* SamiAggregatedCorrelation_H_ */
