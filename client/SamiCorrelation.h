/*
 * SamiCorrelation.h
 * 
 * 
 */

#ifndef SamiCorrelation_H_
#define SamiCorrelation_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiCorrelation: public SamiObject {
public:
    SamiCorrelation();
    SamiCorrelation(String* json);
    virtual ~SamiCorrelation();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCorrelation* fromJson(String* obj);

    Long* getPCorrelationCoefficient();
    void setPCorrelationCoefficient(Long* pCorrelationCoefficient);
    String* getPCause();
    void setPCause(String* pCause);
    String* getPOriginalCause();
    void setPOriginalCause(String* pOriginalCause);
    String* getPEffect();
    void setPEffect(String* pEffect);
    String* getPOriginalEffect();
    void setPOriginalEffect(String* pOriginalEffect);
    Double* getPOnsetDelay();
    void setPOnsetDelay(Double* pOnsetDelay);
    Long* getPDurationOfAction();
    void setPDurationOfAction(Long* pDurationOfAction);
    Long* getPNumberOfPairs();
    void setPNumberOfPairs(Long* pNumberOfPairs);
    String* getPEffectSize();
    void setPEffectSize(String* pEffectSize);
    String* getPStatisticalSignificance();
    void setPStatisticalSignificance(String* pStatisticalSignificance);
    Long* getPTimestamp();
    void setPTimestamp(Long* pTimestamp);
    Long* getPReverseCorrelation();
    void setPReverseCorrelation(Long* pReverseCorrelation);
    Long* getPCausalityFactor();
    void setPCausalityFactor(Long* pCausalityFactor);
    String* getPCauseCategory();
    void setPCauseCategory(String* pCauseCategory);
    String* getPEffectCategory();
    void setPEffectCategory(String* pEffectCategory);
    Long* getPValuePredictingHighOutcome();
    void setPValuePredictingHighOutcome(Long* pValuePredictingHighOutcome);
    Long* getPValuePredictingLowOutcome();
    void setPValuePredictingLowOutcome(Long* pValuePredictingLowOutcome);
    Long* getPOptimalPearsonProduct();
    void setPOptimalPearsonProduct(Long* pOptimalPearsonProduct);
    Long* getPAverageVote();
    void setPAverageVote(Long* pAverageVote);
    Long* getPUserVote();
    void setPUserVote(Long* pUserVote);
    String* getPCauseUnit();
    void setPCauseUnit(String* pCauseUnit);
    Integer* getPCauseUnitId();
    void setPCauseUnitId(Integer* pCauseUnitId);

private:
    Long* pCorrelationCoefficient;
String* pCause;
String* pOriginalCause;
String* pEffect;
String* pOriginalEffect;
Double* pOnsetDelay;
Long* pDurationOfAction;
Long* pNumberOfPairs;
String* pEffectSize;
String* pStatisticalSignificance;
Long* pTimestamp;
Long* pReverseCorrelation;
Long* pCausalityFactor;
String* pCauseCategory;
String* pEffectCategory;
Long* pValuePredictingHighOutcome;
Long* pValuePredictingLowOutcome;
Long* pOptimalPearsonProduct;
Long* pAverageVote;
Long* pUserVote;
String* pCauseUnit;
Integer* pCauseUnitId;
};

} /* namespace Swagger */

#endif /* SamiCorrelation_H_ */
