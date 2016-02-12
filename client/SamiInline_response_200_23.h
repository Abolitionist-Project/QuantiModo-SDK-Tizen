/*
 * SamiInline_response_200_23.h
 * 
 * 
 */

#ifndef SamiInline_response_200_23_H_
#define SamiInline_response_200_23_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiTrackingReminder.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_23: public SamiObject {
public:
    SamiInline_response_200_23();
    SamiInline_response_200_23(String* json);
    virtual ~SamiInline_response_200_23();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_23* fromJson(String* obj);

    
    SamiTrackingReminder* getPData();
    void setPData(SamiTrackingReminder* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiTrackingReminder* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_23_H_ */
