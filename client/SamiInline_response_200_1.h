/*
 * SamiInline_response_200_1.h
 * 
 * 
 */

#ifndef SamiInline_response_200_1_H_
#define SamiInline_response_200_1_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiAggregatedCorrelation.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_1: public SamiObject {
public:
    SamiInline_response_200_1();
    SamiInline_response_200_1(String* json);
    virtual ~SamiInline_response_200_1();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_1* fromJson(String* obj);

    
    SamiAggregatedCorrelation* getPData();
    void setPData(SamiAggregatedCorrelation* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiAggregatedCorrelation* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_1_H_ */
