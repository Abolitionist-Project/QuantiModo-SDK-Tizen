/*
 * SamiPostCorrelation.h
 * 
 * 
 */

#ifndef SamiPostCorrelation_H_
#define SamiPostCorrelation_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiPostCorrelation: public SamiObject {
public:
    SamiPostCorrelation();
    SamiPostCorrelation(String* json);
    virtual ~SamiPostCorrelation();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPostCorrelation* fromJson(String* obj);

    String* getPCause();
    void setPCause(String* pCause);
    String* getPEffect();
    void setPEffect(String* pEffect);
    Double* getPCorrelation();
    void setPCorrelation(Double* pCorrelation);
    Integer* getPVote();
    void setPVote(Integer* pVote);

private:
    String* pCause;
String* pEffect;
Double* pCorrelation;
Integer* pVote;
};

} /* namespace Swagger */

#endif /* SamiPostCorrelation_H_ */
