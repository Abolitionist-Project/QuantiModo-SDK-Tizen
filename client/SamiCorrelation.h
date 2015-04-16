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


using Tizen::Base::Long;
using Tizen::Base::String;
using Tizen::Base::Double;


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
    
    String* getPEffect();
    void setPEffect(String* pEffect);
    
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
    

private:
    Long* pCorrelationCoefficient;
    String* pCause;
    String* pEffect;
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
    
};

} /* namespace Swagger */

#endif /* SamiCorrelation_H_ */
